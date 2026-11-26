#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DefaultAttachment.h"
#include "DefaultItem.h"
#include "DefaultItemsContainer.h"
#include "IRRRandomItemParameters.h"
#include "IRRVendorDefaultItem.h"
#include "IRRRandomItemGenerationFunctionLibrary.generated.h"

class UIRRItemDefinition;

UCLASS(Blueprintable)
class TEST_C_API UIRRRandomItemGenerationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRRandomItemGenerationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FIRRVendorDefaultItem GetRandomVendorItemWithParameters(UPARAM(Ref) FIRRRandomItemParameters& RandomParameters, FGameplayTagContainer CompatibleItems, FGameplayTagContainer AddedItems, bool bAttachment);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRandomItemWithParameters(UPARAM(Ref) FIRRRandomItemParameters& RandomParameters, FGameplayTagContainer AddedItems, FDefaultItem& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateRandomItems(FDefaultItemsContainer& InDefaultItemsContainer);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateRandomChildAttachmentsWithParameters(UPARAM(Ref) FIRRRandomItemParameters& RandomParameters, UIRRItemDefinition* ParentItemDefinition, int32 ParentIndex, int32 AttachmentDepth, TArray<FGameplayTagContainer>& RequiredAttachments, TArray<FDefaultAttachment>& InAttachments);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDefaultAttachment> GenerateRandomAttachmentsWithParameters(UPARAM(Ref) FIRRRandomItemParameters& RandomParameters, UIRRItemDefinition* ParentItemDefinition);
    
};

