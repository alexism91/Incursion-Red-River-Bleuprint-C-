#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "TextureCollection.generated.h"

class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class UTextureCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Textures;
    
    UTextureCollection();

};

