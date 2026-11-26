#pragma once
#include "CoreMinimal.h"
#include "RuntimeDataTableOperationParams.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeDataTableOperationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestTimeout;
    
    RUNTIMEDATATABLE_API FRuntimeDataTableOperationParams();
};

