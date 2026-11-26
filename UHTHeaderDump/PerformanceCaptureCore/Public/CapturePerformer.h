#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshActor -FallbackName=SkeletalMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "CapturePerformer.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ACapturePerformer : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAllMeshesToFollowLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluateAnimation;
    
    ACapturePerformer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMocapMesh(USkeletalMesh* MocapMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetLiveLinkSubject(FLiveLinkSubjectName Subject);
    
    UFUNCTION(BlueprintCallable)
    void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLiveLinkSubjectName GetLiveLinkSubject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEvaluateLiveLinkData();
    
};

