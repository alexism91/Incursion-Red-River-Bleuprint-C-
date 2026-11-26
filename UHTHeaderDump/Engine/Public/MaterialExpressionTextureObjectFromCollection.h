#pragma once
#include "CoreMinimal.h"
#include "ETextureCollectionMemberType.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureObjectFromCollection.generated.h"

class UTextureCollection;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionTextureObjectFromCollection : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput TextureCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCollection* TextureCollectionObject;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput CollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureCollectionMemberType TextureType;
    
    UMaterialExpressionTextureObjectFromCollection();

};

