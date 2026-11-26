#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Landscape -ObjectName=LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport -FallbackName=LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport
//CROSS-MODULE INCLUDE V2: -ModuleName=Landscape -ObjectName=LandscapeEditLayerProcedural -FallbackName=LandscapeEditLayerProcedural
#include "LandscapePatchEditLayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULandscapePatchEditLayer : public ULandscapeEditLayerProcedural, public ILandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport {
    GENERATED_BODY()
public:
    ULandscapePatchEditLayer();


    // Fix for true pure virtual functions not being implemented
};

