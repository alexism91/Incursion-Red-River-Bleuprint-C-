#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSubstrateUtilityBase.h"
#include "MaterialExpressionSubstrateTransmittanceToMFP.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubstrateTransmittanceToMFP : public UMaterialExpressionSubstrateUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput TransmittanceColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Thickness;
    
    UMaterialExpressionSubstrateTransmittanceToMFP();

};

