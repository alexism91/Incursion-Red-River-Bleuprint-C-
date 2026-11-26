#pragma once
#include "CoreMinimal.h"
#include "OptimusNode.h"
#include "OptimusNodeGraphProvider.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNodeSubGraphReferencer.h"
#include "OptimusNode_SubGraphReference.generated.h"

class UOptimusNodePin;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusNode_SubGraphReference : public UOptimusNode, public IOptimusNodePinRouter, public IOptimusNodeGraphProvider, public IOptimusNodeSubGraphReferencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubgraphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNodePin> DefaultComponentPin;
    
public:
    UOptimusNode_SubGraphReference();


    // Fix for true pure virtual functions not being implemented
};

