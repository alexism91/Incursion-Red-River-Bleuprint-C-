#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSubstrateUtilityBase.h"
#include "MaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 : public UMaterialExpressionSubstrateUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput BaseColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Metallic;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Specular;
    
    UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0();

};

