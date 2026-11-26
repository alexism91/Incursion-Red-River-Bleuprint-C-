#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialSamplerType -FallbackName=EMaterialSamplerType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "MaterialExpressionHeightfieldMinMaxTexture.generated.h"

class UHeightfieldMinMaxTexture;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeightfieldMinMaxTexture* MinMaxTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialSamplerType> SamplerType;
    
    UMaterialExpressionHeightfieldMinMaxTexture();

};

