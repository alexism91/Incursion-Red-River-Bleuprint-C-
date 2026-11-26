#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBlueprintBase.h"
#include "StateTreeConditionBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
    UStateTreeConditionBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveTestCondition() const;
    
};

