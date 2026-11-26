#include "MaterialExpressionTextureObjectFromCollection.h"

UMaterialExpressionTextureObjectFromCollection::UMaterialExpressionTextureObjectFromCollection() {
    this->MenuCategories.AddDefaulted(1);
    this->TextureCollectionObject = NULL;
    this->ConstCollectionIndex = 0;
    this->TextureType = ETextureCollectionMemberType::Texture2D;
}


