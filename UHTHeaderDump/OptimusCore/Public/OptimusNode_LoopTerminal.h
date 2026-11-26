#pragma once
#include "CoreMinimal.h"
#include "EOptimusTerminalType.h"
#include "OptimusLoopTerminalInfo.h"
#include "OptimusNode.h"
#include "OptimusNodeAdderPinProvider.h"
#include "OptimusNodePairProvider.h"
#include "OptimusParameterBindingProvider.h"
#include "OptimusPinMutabilityDefiner.h"
#include "OptimusPinPairInfo.h"
#include "OptimusUnnamedNodePinProvider.h"
#include "OptimusNode_LoopTerminal.generated.h"

class UOptimusNodePin;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusNode_LoopTerminal : public UOptimusNode, public IOptimusNodeAdderPinProvider, public IOptimusUnnamedNodePinProvider, public IOptimusNodePairProvider, public IOptimusPinMutabilityDefiner, public IOptimusParameterBindingProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusTerminalType TerminalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusLoopTerminalInfo LoopInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusNodePin* IndexPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusNodePin* CountPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusPinPairInfo> PinPairInfos;
    
public:
    UOptimusNode_LoopTerminal();


    // Fix for true pure virtual functions not being implemented
};

