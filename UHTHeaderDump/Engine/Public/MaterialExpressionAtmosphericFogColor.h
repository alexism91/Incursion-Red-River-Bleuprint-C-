#pragma once
#include "CoreMinimal.h"
#include "EPositionOrigin.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionAtmosphericFogColor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionOrigin WorldPositionOriginType;
    
    UMaterialExpressionAtmosphericFogColor();

};

