#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusDebugDrawParameters.h"
#include "OptimusDebugDrawDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDebugDrawParameters DebugDrawParameters;
    
    UOptimusDebugDrawDataInterface();

};

