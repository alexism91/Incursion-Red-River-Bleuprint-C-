#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputMappingRebuildType.h"
#include "EMappingQueryIssue.h"
#include "EMappingQueryResult.h"
#include "EnhancedActionKeyMapping.h"
#include "InputActionValue.h"
#include "MappingQueryIssue.h"
#include "ModifyContextOptions.h"
#include "EnhancedInputSubsystemInterface.generated.h"

class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
class UInputAction;
class UInputMappingContext;
class UInputModifier;
class UInputTrigger;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UEnhancedInputSubsystemInterface : public UInterface {
    GENERATED_BODY()
};

class IEnhancedInputSubsystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateValueOfContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue) PURE_VIRTUAL(UpdateValueOfContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UpdateValueOfContinuousInputInjectionForAction(const UInputAction* Action, FInputActionValue RawValue) PURE_VIRTUAL(UpdateValueOfContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StopContinuousInputInjectionForPlayerMapping(const FName MappingName) PURE_VIRTUAL(StopContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StopContinuousInputInjectionForAction(const UInputAction* Action) PURE_VIRTUAL(StopContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(StartContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartContinuousInputInjectionForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(StartContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetInputMode(const FGameplayTagContainer& NewMode, const FModifyContextOptions& Options) PURE_VIRTUAL(SetInputMode,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType) PURE_VIRTUAL(RequestRebuildControlMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveTagsFromInputMode(const FGameplayTagContainer& TagsToRemove, const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveTagsFromInputMode,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveTagFromInputMode(const FGameplayTag& TagToRemove, const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveTagFromInputMode,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveMappingContext(const UInputMappingContext* MappingContext, const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveMappingContext,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual EMappingQueryResult QueryMapKeyInContextSet(const TArray<UInputMappingContext*>& PrioritizedActiveContexts, const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) PURE_VIRTUAL(QueryMapKeyInContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual EMappingQueryResult QueryMapKeyInActiveContextSet(const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) PURE_VIRTUAL(QueryMapKeyInActiveContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual TArray<FKey> QueryKeysMappedToAction(const UInputAction* Action) const PURE_VIRTUAL(QueryKeysMappedToAction, return TArray<FKey>(););
    
protected:
    UFUNCTION()
    virtual void OnUserSettingsChanged(UEnhancedInputUserSettings* Settings) PURE_VIRTUAL(OnUserSettingsChanged,);
    
    UFUNCTION()
    virtual void OnUserKeyProfileChanged(const UEnhancedPlayerMappableKeyProfile* InNewProfile) PURE_VIRTUAL(OnUserKeyProfileChanged,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputVectorForPlayerMapping(const FName MappingName, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputVectorForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputVectorForAction(const UInputAction* Action, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputVectorForAction,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool HasMappingContext(const UInputMappingContext* MappingContext, int32& OutFoundPriority) const PURE_VIRTUAL(HasMappingContext, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UEnhancedInputUserSettings* GetUserSettings() const PURE_VIRTUAL(GetUserSettings, return NULL;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual FGameplayTagContainer GetInputMode() const PURE_VIRTUAL(GetInputMode, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings() const PURE_VIRTUAL(GetAllPlayerMappableActionKeyMappings, return TArray<FEnhancedActionKeyMapping>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void ClearAllMappings() PURE_VIRTUAL(ClearAllMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void AppendTagsToInputMode(const FGameplayTagContainer& TagsToAdd, const FModifyContextOptions& Options) PURE_VIRTUAL(AppendTagsToInputMode,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void AddTagToInputMode(const FGameplayTag& TagToAdd, const FModifyContextOptions& Options) PURE_VIRTUAL(AddTagToInputMode,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void AddMappingContext(const UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options) PURE_VIRTUAL(AddMappingContext,);
    
};

