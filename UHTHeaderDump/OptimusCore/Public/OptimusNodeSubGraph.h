#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraph.h"
#include "OptimusParameterBindingArray.h"
#include "OptimusParameterBindingProvider.h"
#include "OptimusNodeSubGraph.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusNodeSubGraph : public UOptimusNodeGraph, public IOptimusParameterBindingProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray InputBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray OutputBindings;
    
    UOptimusNodeSubGraph();


    // Fix for true pure virtual functions not being implemented
};

