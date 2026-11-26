#pragma once
#include "CoreMinimal.h"
#include "EOverriddenPropertyOperation.h"
#include "OverriddenPropertyNodeID.h"
#include "OverriddenPropertyNode.generated.h"

USTRUCT(BlueprintType)
struct FOverriddenPropertyNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverriddenPropertyNodeID NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOverriddenPropertyOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOverriddenPropertyNodeID, FOverriddenPropertyNodeID> SubPropertyNodeKeys;
    
    COREUOBJECT_API FOverriddenPropertyNode();
};

