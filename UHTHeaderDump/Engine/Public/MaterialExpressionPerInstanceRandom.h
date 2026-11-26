#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionPerInstanceRandom.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionPerInstanceRandom();

};

