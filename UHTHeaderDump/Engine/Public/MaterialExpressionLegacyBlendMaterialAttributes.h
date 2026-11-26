#pragma once
#include "CoreMinimal.h"
#include "EMaterialAttributeBlendFunction.h"
#include "ExpressionInput.h"
#include "MaterialExpressionBlendMaterialAttributes.h"
#include "MaterialExpressionLegacyBlendMaterialAttributes.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionLegacyBlendMaterialAttributes : public UMaterialExpressionBlendMaterialAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput VertexAttribute_UseA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput VertexAttribute_UseB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput PixelAttribute_UseA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput PixelAttribute_UseB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialAttributeBlendFunction::Type> BlendFunctionType;
    
    UMaterialExpressionLegacyBlendMaterialAttributes();

};

