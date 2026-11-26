#pragma once
#include "CoreMinimal.h"
#include "IRRPendingEquip.generated.h"

class AIRRAIBaseController;
class UInventoryComponent;

USTRUCT(BlueprintType)
struct FIRRPendingEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIRRAIBaseController> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> Inventory;
    
    TEST_C_API FIRRPendingEquip();
};

