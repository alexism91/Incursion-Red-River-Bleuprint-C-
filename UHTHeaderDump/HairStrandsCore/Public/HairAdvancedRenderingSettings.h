#pragma once
#include "CoreMinimal.h"
#include "HairAdvancedRenderingSettings.generated.h"

USTRUCT(BlueprintType)
struct FHairAdvancedRenderingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStableRasterization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScatterSceneLighting;
    
    HAIRSTRANDSCORE_API FHairAdvancedRenderingSettings();
};

