#pragma once
#include "CoreMinimal.h"
#include "HTNNodeInstancePool.generated.h"

class UHTNNode;

USTRUCT(BlueprintType)
struct FHTNNodeInstancePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNNode*> Instances;
    
    HTN_API FHTNNodeInstancePool();
};

