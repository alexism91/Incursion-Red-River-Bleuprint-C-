#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureCollection.generated.h"

class UTextureCollection;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionTextureCollection : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCollection* TextureCollection;
    
    UMaterialExpressionTextureCollection();

};

