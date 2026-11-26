#pragma once
#include "CoreMinimal.h"
#include "StateTreeStateHandle.h"
#include "CompactStateTreeFrame.generated.h"

USTRUCT(BlueprintType)
struct FCompactStateTreeFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfTasksStatusMasks;
    
    STATETREEMODULE_API FCompactStateTreeFrame();
};

