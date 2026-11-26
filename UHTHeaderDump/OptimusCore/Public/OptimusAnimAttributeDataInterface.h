#pragma once
#include "CoreMinimal.h"
#include "OptimusAnimAttributeArray.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusAnimAttributeDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusAnimAttributeArray AttributeArray;
    
    UOptimusAnimAttributeDataInterface();

};

