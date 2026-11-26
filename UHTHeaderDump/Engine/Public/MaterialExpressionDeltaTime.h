#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionDeltaTime.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionDeltaTime : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionDeltaTime();

};

