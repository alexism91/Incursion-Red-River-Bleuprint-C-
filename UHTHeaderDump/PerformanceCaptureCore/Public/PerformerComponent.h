#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "PerformerComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPerformerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ControlledSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOtherMeshesToFollowControlledMesh;
    
    UPerformerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLiveLinkSubject(FLiveLinkSubjectName Subject);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMeshesFollowLeader(bool bInBool);
    
    UFUNCTION(BlueprintCallable)
    void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlledMesh(USkeletalMeshComponent* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLiveLinkSubjectName GetLiveLinkSubject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEvaluateLiveLinkData() const;
    
};

