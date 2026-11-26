#pragma once
#include "CoreMinimal.h"
#include "EFloatToIntMode.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionFloatToUInt.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionFloatToUInt : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFloatToIntMode Mode;
    
    UMaterialExpressionFloatToUInt();

};

