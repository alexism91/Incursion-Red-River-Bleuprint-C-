#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRSpawnValidationCompletedDelegate.h"
#include "IRRSpawnValidationConfig.h"
#include "IRRSpawnLOSValidator.generated.h"

class UIRRSpawnLOSValidator;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRRSpawnLOSValidator : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSpawnValidationCompleted OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Candidates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSpawnValidationConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnFaction;
    
public:
    UIRRSpawnLOSValidator();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRSpawnLOSValidator* ValidateRuntimeSpawnsLOS(UObject* WorldContextObject, const TArray<FVector>& NewCandidates, FIRRSpawnValidationConfig NewConfig, FGameplayTag NewSpawnFaction);
    
};

