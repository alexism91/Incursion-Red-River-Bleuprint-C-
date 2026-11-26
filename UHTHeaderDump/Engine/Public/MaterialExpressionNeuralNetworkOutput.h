#pragma once
#include "CoreMinimal.h"
#include "ENeuralIndexType.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionNeuralNetworkOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionNeuralNetworkOutput : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENeuralIndexType> NeuralIndexType;
    
    UMaterialExpressionNeuralNetworkOutput();

};

