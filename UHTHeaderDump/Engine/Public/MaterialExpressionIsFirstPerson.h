#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionIsFirstPerson.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionIsFirstPerson : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UMaterialExpressionIsFirstPerson();

};

