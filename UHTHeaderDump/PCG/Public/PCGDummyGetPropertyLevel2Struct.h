#pragma once
#include "CoreMinimal.h"
#include "PCGDummyGetPropertyLevel2Struct.generated.h"

USTRUCT(BlueprintType)
struct FPCGDummyGetPropertyLevel2Struct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> DoubleArrayProperty;
    
    PCG_API FPCGDummyGetPropertyLevel2Struct();
};

