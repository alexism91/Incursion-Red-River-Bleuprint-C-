#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSubstrateBSDF.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateBSDF : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionSubstrateBSDF();

};

