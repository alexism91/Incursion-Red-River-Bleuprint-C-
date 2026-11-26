#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPostVolumeUserFlagTest.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionPostVolumeUserFlagTest : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput BitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstBitIndex;
    
    UMaterialExpressionPostVolumeUserFlagTest();

};

