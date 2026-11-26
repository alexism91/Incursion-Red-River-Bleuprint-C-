#pragma once
#include "CoreMinimal.h"
#include "StateTreeAnyEnum.h"
#include "StateTreeEnumInputConsiderationInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEnumInputConsiderationInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeAnyEnum Input;
    
    STATETREEMODULE_API FStateTreeEnumInputConsiderationInstanceData();
};

