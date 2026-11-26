#pragma once
#include "CoreMinimal.h"
#include "ComputeGraphInstance.generated.h"

class UComputeDataProvider;

USTRUCT(BlueprintType)
struct FComputeGraphInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UComputeDataProvider*> DataProviders;
    
public:
    COMPUTEFRAMEWORK_API FComputeGraphInstance();
};

