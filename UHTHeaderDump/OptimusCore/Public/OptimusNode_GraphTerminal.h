#pragma once
#include "CoreMinimal.h"
#include "EOptimusTerminalType.h"
#include "OptimusAlternativeSelectedObjectProvider.h"
#include "OptimusNode.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNonCollapsibleNode.h"
#include "OptimusNonCopyableNode.h"
#include "OptimusNode_GraphTerminal.generated.h"

class UOptimusNodePin;

UCLASS(Blueprintable)
class UOptimusNode_GraphTerminal : public UOptimusNode, public IOptimusNodePinRouter, public IOptimusAlternativeSelectedObjectProvider, public IOptimusNonCollapsibleNode, public IOptimusNonCopyableNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusTerminalType TerminalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNodePin> DefaultComponentPin;
    
public:
    UOptimusNode_GraphTerminal();


    // Fix for true pure virtual functions not being implemented
};

