#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRequiredSamplersSwitch.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionRequiredSamplersSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput InputTrue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput InputFalse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RequiredSamplers;
    
    UMaterialExpressionRequiredSamplersSwitch();

};

