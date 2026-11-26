#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionMaterialSample.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionMaterialSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialReference;
    
    UMaterialExpressionMaterialSample();

};

