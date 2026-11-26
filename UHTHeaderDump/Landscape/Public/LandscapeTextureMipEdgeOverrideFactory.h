#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureMipDataProviderFactory -FallbackName=TextureMipDataProviderFactory
#include "LandscapeTextureMipEdgeOverrideFactory.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Within=Texture2D)
class ULandscapeTextureMipEdgeOverrideFactory : public UTextureMipDataProviderFactory {
    GENERATED_BODY()
public:
    ULandscapeTextureMipEdgeOverrideFactory();

};

