#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ComputeDistanceFieldSettings.h"
#include "DistanceFieldToTextureSettings.h"
#include "GeometryScriptLibrary_VolumeTextureBakeFunctions.generated.h"

class UDynamicMesh;
class UVolumeTexture;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_VolumeTextureBakeFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_VolumeTextureBakeFunctions();

    UFUNCTION(BlueprintCallable)
    static bool BakeSignedDistanceToVolumeTexture(const UDynamicMesh* TargetMesh, UVolumeTexture* VolumeTexture, FComputeDistanceFieldSettings DistanceSettings, FDistanceFieldToTextureSettings TextureSettings);
    
};

