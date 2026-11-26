#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ControlRigLayerInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    CONTROLRIG_API FControlRigLayerInstanceProxy();
};

