#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintTaskWrapper.generated.h"

class UStateTreeTaskBlueprintBase;

USTRUCT(BlueprintType)
struct FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeTaskBlueprintBase> TaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TaskFlags;
    
    STATETREEMODULE_API FStateTreeBlueprintTaskWrapper();
};

