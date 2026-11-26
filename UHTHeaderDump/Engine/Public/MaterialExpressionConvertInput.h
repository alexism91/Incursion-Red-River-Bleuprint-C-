#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EMaterialExpressionConvertType.h"
#include "ExpressionInput.h"
#include "MaterialExpressionConvertInput.generated.h"

USTRUCT(BlueprintType)
struct FMaterialExpressionConvertInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ExpressionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialExpressionConvertType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultValue;
    
    ENGINE_API FMaterialExpressionConvertInput();
};

