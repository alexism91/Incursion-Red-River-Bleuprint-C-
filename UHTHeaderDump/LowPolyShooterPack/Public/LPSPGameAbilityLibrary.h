#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "LPSPGameAbility.h"
#include "LPSPGameAbilityLibrary.generated.h"

UCLASS(Blueprintable)
class LOWPOLYSHOOTERPACK_API ULPSPGameAbilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULPSPGameAbilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TryStartGameAbility(const FLPSPGameAbility Ability, UPARAM(Ref) FGameplayTagContainer& Container);
    
    UFUNCTION(BlueprintCallable)
    static void StopGameAbility(const FLPSPGameAbility Ability, UPARAM(Ref) FGameplayTagContainer& Container, const bool AddRemoved);
    
    UFUNCTION(BlueprintCallable)
    static void StartGameAbility(const FLPSPGameAbility Ability, UPARAM(Ref) FGameplayTagContainer& Container);
    
    UFUNCTION(BlueprintCallable)
    static void DebugContainer(const FGameplayTagContainer Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStartGameAbility(const FLPSPGameAbility Ability, UPARAM(Ref) FGameplayTagContainer& Container);
    
};

