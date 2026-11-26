#pragma once
#include "CoreMinimal.h"
#include "PCGNode.h"
#include "PCGBaseSubgraphNode.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGBaseSubgraphNode : public UPCGNode {
    GENERATED_BODY()
public:
    UPCGBaseSubgraphNode();

};

