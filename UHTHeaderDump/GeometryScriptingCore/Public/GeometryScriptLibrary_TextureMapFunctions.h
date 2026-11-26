#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptColorList.h"
#include "GeometryScriptSampleTextureOptions.h"
#include "GeometryScriptUVList.h"
#include "GeometryScriptLibrary_TextureMapFunctions.generated.h"

class UGeometryScriptDebug;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_TextureMapFunctions();

    UFUNCTION(BlueprintCallable)
    static void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, UTextureRenderTarget2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, UTexture2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug* Debug);
    
};

