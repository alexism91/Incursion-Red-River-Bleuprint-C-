#pragma once
#include "CoreMinimal.h"
#include "RuntimeDataTableCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeDataTableCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResponseAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseCode;
    
    RUNTIMEDATATABLE_API FRuntimeDataTableCallbackInfo();
};

