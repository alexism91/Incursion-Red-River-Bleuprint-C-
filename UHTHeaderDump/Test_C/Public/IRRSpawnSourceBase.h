#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRSpawnPointBase -FallbackName=IRRSpawnPointBase
#include "IRRSpawnValidationConfig.h"
#include "IRRSpawnSourceBase.generated.h"

class UIRRSpawnCandidateGenerator;

UCLASS(Abstract, Blueprintable, NoExport)
class TEST_C_API AIRRSpawnSourceBase : public AIRRSpawnPointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSpawnCandidateGenerator* CandidateGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSpawnValidationConfig ValidationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavPreCacheRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnFaction;
    
    AIRRSpawnSourceBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GenerateCandidates(TArray<FTransform>& OutCandidates) const;
    
};

