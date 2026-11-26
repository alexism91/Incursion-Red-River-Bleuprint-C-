#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionBindlessSwitch.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionBindlessSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Default;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Bindless;
    
    UMaterialExpressionBindlessSwitch();

};

