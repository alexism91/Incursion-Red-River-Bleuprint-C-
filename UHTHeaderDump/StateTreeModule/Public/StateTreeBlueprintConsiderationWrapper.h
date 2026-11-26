#pragma once
#include "CoreMinimal.h"
#include "StateTreeConsiderationBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintConsiderationWrapper.generated.h"

class UStateTreeConsiderationBlueprintBase;

USTRUCT(BlueprintType)
struct FStateTreeBlueprintConsiderationWrapper : public FStateTreeConsiderationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeConsiderationBlueprintBase> ConsiderationClass;
    
    STATETREEMODULE_API FStateTreeBlueprintConsiderationWrapper();
};

