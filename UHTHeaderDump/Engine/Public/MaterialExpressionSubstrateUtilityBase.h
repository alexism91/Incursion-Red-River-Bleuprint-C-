#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSubstrateUtilityBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateUtilityBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionSubstrateUtilityBase();

};

