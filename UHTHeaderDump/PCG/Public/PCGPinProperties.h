#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.h"
#include "EPCGPinStatus.h"
#include "EPCGPinUsage.h"
#include "PCGPinProperties.generated.h"

USTRUCT(BlueprintType)
struct FPCGPinProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPinUsage Usage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataType AllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPinStatus PinStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvisiblePin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleConnections;
    
public:
    PCG_API FPCGPinProperties();
};

