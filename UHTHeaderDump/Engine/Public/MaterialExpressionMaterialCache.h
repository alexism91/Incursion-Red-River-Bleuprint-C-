#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCustomOutput.h"
#include "MaterialExpressionMaterialCache.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionMaterialCache : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput UV;
    
    UMaterialExpressionMaterialCache();

};

