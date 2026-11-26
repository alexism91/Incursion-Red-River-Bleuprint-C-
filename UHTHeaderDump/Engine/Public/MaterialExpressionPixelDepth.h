#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionPixelDepth.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionPixelDepth : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionPixelDepth();

};

