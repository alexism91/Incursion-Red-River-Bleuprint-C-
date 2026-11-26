#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSubstrateBSDF.h"
#include "MaterialExpressionSubstrateConvertToDecal.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateConvertToDecal : public UMaterialExpressionSubstrateBSDF {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput DecalMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coverage;
    
    UMaterialExpressionSubstrateConvertToDecal();

};

