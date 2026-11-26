#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionLightVector.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionLightVector : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionLightVector();

};

