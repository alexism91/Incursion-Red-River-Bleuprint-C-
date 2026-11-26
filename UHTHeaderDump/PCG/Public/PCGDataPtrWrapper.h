#pragma once
#include "CoreMinimal.h"
#include "PCGDataPtrWrapper.generated.h"

class UPCGData;

USTRUCT(BlueprintType)
struct FPCGDataPtrWrapper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGData* Data;
    
public:
    PCG_API FPCGDataPtrWrapper();
};

