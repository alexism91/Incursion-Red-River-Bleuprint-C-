#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayAttribute.h"
#include "GameplayEffectCalculation.h"
#include "GameplayEffectSpec.h"
#include "GameplayModMagnitudeCalculation.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNonNetAuthorityDependencyRegistration;
    
public:
    UGameplayModMagnitudeCalculation();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float K2_GetCapturedAttributeMagnitude(const FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTargetSpecTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTagContainer GetTargetAggregatedTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTargetActorTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSourceSpecTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTagContainer GetSourceAggregatedTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSourceActorTags(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetSetByCallerMagnitudeByTag(const FGameplayEffectSpec& EffectSpec, const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetSetByCallerMagnitudeByName(const FGameplayEffectSpec& EffectSpec, const FName& MagnitudeName) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec) const;
    
};

