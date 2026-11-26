#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "RaidTraderStockComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API URaidTraderStockComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    URaidTraderStockComponent(const FObjectInitializer& ObjectInitializer);

};

