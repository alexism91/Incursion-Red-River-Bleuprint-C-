#pragma once
#include "CoreMinimal.h"
#include "ArrayShaderValue.h"
#include "ShaderValueContainer.generated.h"

USTRUCT(BlueprintType)
struct FShaderValueContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ShaderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrayShaderValue> ArrayList;
    
    COMPUTEFRAMEWORK_API FShaderValueContainer();
};

