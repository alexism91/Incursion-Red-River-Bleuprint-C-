#pragma once
#include "CoreMinimal.h"
#include "EStateTreeSelectionFallback.h"
#include "StateTreeStateHandle.h"
#include "StateTreeStateLink.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeStateLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle StateHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeSelectionFallback Fallback;
    
    STATETREEMODULE_API FStateTreeStateLink();
};

