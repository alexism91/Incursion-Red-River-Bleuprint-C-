#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayCueParameters.h"
#include "GameplayCueFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayCueFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayCueParameters MakeGameplayCueParametersFromHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
};

