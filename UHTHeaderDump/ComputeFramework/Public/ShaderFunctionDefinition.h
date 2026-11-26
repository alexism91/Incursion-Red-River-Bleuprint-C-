#pragma once
#include "CoreMinimal.h"
#include "ShaderParamTypeDefinition.h"
#include "ShaderFunctionDefinition.generated.h"

USTRUCT(BlueprintType)
struct FShaderFunctionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShaderParamTypeDefinition> ParamTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasReturnType;
    
    COMPUTEFRAMEWORK_API FShaderFunctionDefinition();
};

