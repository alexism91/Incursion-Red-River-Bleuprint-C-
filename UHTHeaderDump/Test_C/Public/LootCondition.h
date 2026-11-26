#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "IRRVendorDefaultItem.h"
#include "LootCondition.generated.h"

class UIRRItemDefinition;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API ULootCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    ULootCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ValidateItem(UIRRItemDefinition* ItemDefinition, const FIRRVendorDefaultItem& VendorItem, const FGameplayTagContainer& AlreadyAddedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetConditionDescription() const;
    
};

