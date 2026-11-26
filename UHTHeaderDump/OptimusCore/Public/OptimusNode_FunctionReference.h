#pragma once
#include "CoreMinimal.h"
#include "OptimusFunctionGraphIdentifier.h"
#include "OptimusNode.h"
#include "OptimusNodeGraphProvider.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNodeSubGraphReferencer.h"
#include "OptimusNode_FunctionReference.generated.h"

class UOptimusFunctionNodeGraph;
class UOptimusNodePin;

UCLASS(Blueprintable)
class UOptimusNode_FunctionReference : public UOptimusNode, public IOptimusNodePinRouter, public IOptimusNodeGraphProvider, public IOptimusNodeSubGraphReferencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusFunctionGraphIdentifier FunctionGraphIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNodePin> DefaultComponentPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusFunctionNodeGraph> ResolvedFunctionGraph;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOptimusFunctionNodeGraph> FunctionGraph;
    
public:
    UOptimusNode_FunctionReference();


    // Fix for true pure virtual functions not being implemented
};

