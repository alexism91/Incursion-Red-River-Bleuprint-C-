#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EMaterialExpressionConvertType.h"
#include "MaterialExpressionConvertOutput.generated.h"

USTRUCT(BlueprintType)
struct FMaterialExpressionConvertOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialExpressionConvertType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultValue;
    
    ENGINE_API FMaterialExpressionConvertOutput();
};

