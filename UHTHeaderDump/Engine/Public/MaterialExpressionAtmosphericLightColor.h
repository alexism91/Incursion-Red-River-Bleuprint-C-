#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionAtmosphericLightColor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionAtmosphericLightColor : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionAtmosphericLightColor();

};

