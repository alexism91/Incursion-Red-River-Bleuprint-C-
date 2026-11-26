#pragma once
#include "CoreMinimal.h"
#include "ENeuralIndexType.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCustomOutput.h"
#include "MaterialExpressionNeuralNetworkInput.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionNeuralNetworkInput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENeuralIndexType> NeuralIndexType;
    
    UMaterialExpressionNeuralNetworkInput();

};

