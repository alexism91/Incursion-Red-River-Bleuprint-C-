#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionConvertMapping.generated.h"

USTRUCT(BlueprintType)
struct FMaterialExpressionConvertMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputComponentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputComponentIndex;
    
    ENGINE_API FMaterialExpressionConvertMapping();
};

