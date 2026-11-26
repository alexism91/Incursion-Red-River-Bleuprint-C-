#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "EOptimusGroomAttributeTypes.h"
#include "EOptimusGroomExecDomain.h"
#include "OptimusGroomAttributeReadDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusGroomAttributeReadDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroomAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomExecDomain GroomAttributeGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomAttributeTypes GroomAttributeType;
    
public:
    UOptimusGroomAttributeReadDataInterface();

};

