#pragma once
#include "CoreMinimal.h"
#include "OptimusComponentBindingProvider.h"
#include "OptimusDataInterfaceProvider.h"
#include "OptimusNode.h"
#include "OptimusPinMutabilityDefiner.h"
#include "OptimusPropertyPinProvider.h"
#include "OptimusNode_DataInterface.generated.h"

class UOptimusComputeDataInterface;

UCLASS(Blueprintable)
class UOptimusNode_DataInterface : public UOptimusNode, public IOptimusDataInterfaceProvider, public IOptimusComponentBindingProvider, public IOptimusPinMutabilityDefiner, public IOptimusPropertyPinProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DataInterfaceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptimusComputeDataInterface* DataInterfaceData;
    
public:
    UOptimusNode_DataInterface();


    // Fix for true pure virtual functions not being implemented
};

