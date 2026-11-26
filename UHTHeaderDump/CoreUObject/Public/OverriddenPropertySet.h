#pragma once
#include "CoreMinimal.h"
#include "OverriddenPropertyNode.h"
#include "OverriddenPropertySet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOverriddenPropertySet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FOverriddenPropertyNode> OverriddenPropertyNodes;
    
public:
    COREUOBJECT_API FOverriddenPropertySet();
};

