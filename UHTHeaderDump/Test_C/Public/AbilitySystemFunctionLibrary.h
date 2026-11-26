#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EGameplayTagEventHandle.h"
#include "SimpleAttributeBuff.h"
#include "SimpleAttributeModifier.h"
#include "AbilitySystemFunctionLibrary.generated.h"

class AActor;
class UGameplayAbilityComponent;
class UGameplayTagsComponent;
class UObject;
class USimpleGameplayAttribute;
class USimpleGameplayAttribute_Health;

UCLASS(Blueprintable)
class TEST_C_API UAbilitySystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAbilitySystemFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopAllActiveAbilities(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool SendGameplayEventToActor_New(const AActor* Actor, const FGameplayTag& GameplayTag, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void SendGameplayEventToActor(AActor* Actor, FGameplayTag GameplayTag, EGameplayTagEventHandle EventType);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAttributeBuff(AActor* Actor, FGameplayTag Tag, FSimpleAttributeBuff Buff, bool bReplicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasPlayerGameplayTags(const UObject* WorldContextObject, FGameplayTagContainer GameplayTags, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasGameplayTags(AActor* Actor, FGameplayTagContainer GameplayTags, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    static USimpleGameplayAttribute_Health* GetHealthAttributeSet(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTagsComponent* GetGameplayTagsComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbilityComponent* GetGameplayAbilityComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static USimpleGameplayAttribute* GetAttributeSet(AActor* Actor, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteAttributeModifier(AActor* Actor, FGameplayTag Tag, FSimpleAttributeModifier Modifier, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    static void AddAttributeBuff(AActor* Actor, FGameplayTag Tag, FSimpleAttributeBuff Buff, bool bReplicate);
    
};

