#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DefaultItem.h"
#include "DefaultItemsContainer.h"
#include "EContainerType.h"
#include "LootPostProcessor.generated.h"

class ULootGenerationSettings;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API ULootPostProcessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    ULootPostProcessor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteOnContainer(UPARAM(Ref) FDefaultItemsContainer& InOutContainer, const TArray<FDefaultItemsContainer>& AllContainers, ULootGenerationSettings* SlotLootSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UPARAM(Ref) FDefaultItem& InOutItem, const TArray<FDefaultItemsContainer>& AllContainers, ULootGenerationSettings* SlotLootSettings, EContainerType SlotContainerType);
    
};

