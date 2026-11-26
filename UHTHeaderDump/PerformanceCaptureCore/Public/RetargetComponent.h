#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=IKRig -ObjectName=RetargetProfile -FallbackName=RetargetProfile
#include "RetargetComponent.generated.h"

class UIKRetargeter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URetargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference SourceSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ControlledSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOtherMeshesToFollowControlledMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRetargeter* RetargetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRetargetProfile CustomRetargetProfile;
    
    URetargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSourcePerformerMesh(USkeletalMeshComponent* InPerformerMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetRetargetAsset(UIKRetargeter* InRetargetAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMeshesFollowLeader(bool bInBool);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomRetargetProfile(FRetargetProfile InProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledMesh(USkeletalMeshComponent* InControlledMesh);
    
    UFUNCTION(BlueprintCallable)
    FRetargetProfile GetCustomRetargetProfile();
    
};

