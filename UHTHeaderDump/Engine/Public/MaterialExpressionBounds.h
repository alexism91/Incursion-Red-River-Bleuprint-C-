#pragma once
#include "CoreMinimal.h"
#include "EMaterialExpressionBoundsType.h"
#include "MaterialExpression.h"
#include "MaterialExpressionBounds.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionBounds : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialExpressionBoundsType> Type;
    
    UMaterialExpressionBounds();

};

