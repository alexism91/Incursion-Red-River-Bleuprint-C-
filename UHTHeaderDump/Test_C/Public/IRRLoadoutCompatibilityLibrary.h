#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRLoadoutCompatibilityLibrary.generated.h"

class UIRRItemDefinition;

UCLASS(Blueprintable)
class TEST_C_API UIRRLoadoutCompatibilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRLoadoutCompatibilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResolveItemDefinitionsByTag(FGameplayTag ItemTag, TArray<UIRRItemDefinition*>& OutDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static UIRRItemDefinition* ResolveItemDefinitionByTag(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAttachmentCompatible(UIRRItemDefinition* ParentDefinition, FGameplayTag AttachmentIdentifier);
    
    UFUNCTION(BlueprintCallable)
    static void GetCompatibleAttachments(UIRRItemDefinition* ParentDefinition, FGameplayTag CategoryTag, TArray<UIRRItemDefinition*>& OutDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindEquipSlotForAttachment(UIRRItemDefinition* ParentDefinition, FGameplayTag AttachmentIdentifier);
    
};

