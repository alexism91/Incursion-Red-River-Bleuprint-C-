#pragma once
#include "CoreMinimal.h"
#include "EMaterialExpressionOperatorKind.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionOperator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionOperator : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialExpressionOperatorKind Operator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstC;
    
    UMaterialExpressionOperator();

};

