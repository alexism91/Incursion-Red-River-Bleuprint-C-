#pragma once
#include "CoreMinimal.h"
#include "PCGPinProperties.h"
#include "PCGPinPropertiesGPUStruct.h"
#include "PCGPinPropertiesGPU.generated.h"

USTRUCT(BlueprintType)
struct FPCGPinPropertiesGPU : public FPCGPinProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPinPropertiesGPUStruct PropertiesGPU;
    
    PCG_API FPCGPinPropertiesGPU();
};

