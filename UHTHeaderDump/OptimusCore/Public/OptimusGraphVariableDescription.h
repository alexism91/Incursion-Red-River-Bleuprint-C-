#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ShaderValueContainer -FallbackName=ShaderValueContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ShaderValueTypeHandle -FallbackName=ShaderValueTypeHandle
#include "OptimusValueIdentifier.h"
#include "OptimusGraphVariableDescription.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOptimusGraphVariableDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueTypeHandle ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValueIdentifier ValueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueContainer ShaderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SourceObject;
    
    OPTIMUSCORE_API FOptimusGraphVariableDescription();
};

