#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintConditionWrapper.generated.h"

class UStateTreeConditionBlueprintBase;

USTRUCT(BlueprintType)
struct FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeConditionBlueprintBase> ConditionClass;
    
    STATETREEMODULE_API FStateTreeBlueprintConditionWrapper();
};

