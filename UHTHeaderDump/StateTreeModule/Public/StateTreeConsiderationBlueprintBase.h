#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBlueprintBase.h"
#include "StateTreeConsiderationBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UStateTreeConsiderationBlueprintBase : public UStateTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
    UStateTreeConsiderationBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float ReceiveGetScore() const;
    
};

