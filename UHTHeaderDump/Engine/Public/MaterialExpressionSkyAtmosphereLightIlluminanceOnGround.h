#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightIlluminanceOnGround.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround();

};

