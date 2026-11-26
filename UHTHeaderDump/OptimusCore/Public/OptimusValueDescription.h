#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ShaderValueContainer -FallbackName=ShaderValueContainer
#include "EOptimusValueUsage.h"
#include "OptimusDataTypeRef.h"
#include "OptimusValueContainerStruct.h"
#include "OptimusValueDescription.generated.h"

USTRUCT(BlueprintType)
struct FOptimusValueDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusValueUsage ValueUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValueContainerStruct Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueContainer ShaderValue;
    
    OPTIMUSCORE_API FOptimusValueDescription();
};

