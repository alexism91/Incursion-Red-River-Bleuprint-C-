#pragma once
#include "CoreMinimal.h"
#include "ArrayShaderValue.generated.h"

USTRUCT(BlueprintType)
struct FArrayShaderValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ArrayOfValues;
    
    COMPUTEFRAMEWORK_API FArrayShaderValue();
};

