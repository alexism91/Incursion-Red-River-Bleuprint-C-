#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialRuntime.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FDynamicMaterialRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    TEST_C_API FDynamicMaterialRuntime();
};

