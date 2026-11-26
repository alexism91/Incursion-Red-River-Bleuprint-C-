#pragma once
#include "CoreMinimal.h"
#include "HairDecimationSettings.generated.h"

USTRUCT(BlueprintType)
struct FHairDecimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveDecimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VertexDecimation;
    
    HAIRSTRANDSCORE_API FHairDecimationSettings();
};

