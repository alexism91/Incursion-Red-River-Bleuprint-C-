#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionPriority.h"
#include "StateTreeNodeBase.h"
#include "StateTreeTaskBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeTaskBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTaskEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionPriority TransitionHandlingPriority;
    
    STATETREEMODULE_API FStateTreeTaskBase();
};

