#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshActor -FallbackName=SkeletalMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=IKRig -ObjectName=RetargetProfile -FallbackName=RetargetProfile
#include "CaptureCharacter.generated.h"

class ACapturePerformer;
class UIKRetargeter;
class URetargetComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ACaptureCharacter : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACapturePerformer> SourcePerformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRetargeter* RetargetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAllSkeletalMeshesToFollowLeader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetargetComponent* RetargetComponent;
    
public:
    ACaptureCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSourcePerformer(ACapturePerformer* InPerformer);
    
    UFUNCTION(BlueprintCallable)
    void SetRetargetAsset(UIKRetargeter* InRetargetAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomRetargetProfile(FRetargetProfile InProfile);
    
    UFUNCTION(BlueprintCallable)
    FRetargetProfile GetCustomRetargetProfile();
    
};

