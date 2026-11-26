#pragma once
#include "CoreMinimal.h"
#include "EPCGDensityMergeOperation.h"
#include "EPCGTextureAddressMode.h"
#include "EPCGTextureMappingMethod.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGSampleTextureSettings.generated.h"

UCLASS(Blueprintable)
class UPCGSampleTextureSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGTextureMappingMethod TextureMappingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector UVCoordinatesAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGTextureAddressMode TilingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDensityMergeOperation DensityMergeFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampOutputDensity;
    
    UPCGSampleTextureSettings();

};

