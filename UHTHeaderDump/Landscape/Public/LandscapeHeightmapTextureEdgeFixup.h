#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "LandscapeHeightmapTextureEdgeFixup.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Within=Texture2D)
class ULandscapeHeightmapTextureEdgeFixup : public UAssetUserData {
    GENERATED_BODY()
public:
    ULandscapeHeightmapTextureEdgeFixup();

};

