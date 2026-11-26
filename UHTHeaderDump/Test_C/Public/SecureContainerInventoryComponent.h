#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "SecureContainerInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API USecureContainerInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    USecureContainerInventoryComponent(const FObjectInitializer& ObjectInitializer);

};

