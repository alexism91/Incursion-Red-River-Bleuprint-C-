#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "LootRequestContext.h"
#include "LootModifierSubsystem.generated.h"

class ULootContextModifier;
class ULootModifierComponent;

UCLASS(Blueprintable)
class TEST_C_API ULootModifierSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULootContextModifier*> GlobalUnboundModifiers;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ULootModifierComponent>> RegisteredModifierComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveQueryTags;
    
public:
    ULootModifierSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetAllLootModifierVolumesHiddenInEditor(bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void RemoveQueryTag(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalModifier(ULootContextModifier* Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULootContextModifier*> GetGlobalModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetApplicableModifiers(const FLootRequestContext& Context, TArray<ULootContextModifier*>& OutModifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetActiveQueryTags() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearQueryTags();
    
    UFUNCTION(BlueprintCallable)
    void ClearGlobalModifiers();
    
    UFUNCTION(BlueprintCallable)
    void AddQueryTag(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalModifier(ULootContextModifier* Modifier);
    
};

