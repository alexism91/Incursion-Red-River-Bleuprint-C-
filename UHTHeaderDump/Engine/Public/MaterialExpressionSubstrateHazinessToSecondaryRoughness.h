#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSubstrateUtilityBase.h"
#include "MaterialExpressionSubstrateHazinessToSecondaryRoughness.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateHazinessToSecondaryRoughness : public UMaterialExpressionSubstrateUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput BaseRoughness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Haziness;
    
    UMaterialExpressionSubstrateHazinessToSecondaryRoughness();

};

