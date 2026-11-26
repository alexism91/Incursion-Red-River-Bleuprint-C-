#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionExternalCodeBase.h"
#include "MaterialExpressionEyeAdaptationInverse.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionEyeAdaptationInverse : public UMaterialExpressionExternalCodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput LightValueInput;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput AlphaInput;
    
    UMaterialExpressionEyeAdaptationInverse();

};

