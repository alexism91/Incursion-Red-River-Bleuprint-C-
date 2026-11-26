#pragma once
#include "CoreMinimal.h"
#include "OptimusComponentBindingProvider.h"
#include "OptimusNode.h"
#include "OptimusNode_ComponentSource_DuplicationInfo.h"
#include "OptimusNonCollapsibleNode.h"
#include "OptimusNode_ComponentSource.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Blueprintable)
class UOptimusNode_ComponentSource : public UOptimusNode, public IOptimusComponentBindingProvider, public IOptimusNonCollapsibleNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusComponentSourceBinding* Binding;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusNode_ComponentSource_DuplicationInfo DuplicationInfo;
    
public:
    UOptimusNode_ComponentSource();


    // Fix for true pure virtual functions not being implemented
};

