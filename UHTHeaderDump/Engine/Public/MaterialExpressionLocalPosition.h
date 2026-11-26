#pragma once
#include "CoreMinimal.h"
#include "ELocalPositionOrigin.h"
#include "EPositionIncludedOffsets.h"
#include "MaterialExpression.h"
#include "MaterialExpressionLocalPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionLocalPosition : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionIncludedOffsets IncludedOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocalPositionOrigin LocalOrigin;
    
    UMaterialExpressionLocalPosition();

};

