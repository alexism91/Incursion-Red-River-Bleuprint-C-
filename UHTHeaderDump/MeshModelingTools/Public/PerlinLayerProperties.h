#pragma once
#include "CoreMinimal.h"
#include "PerlinLayerProperties.generated.h"

USTRUCT(BlueprintType)
struct FPerlinLayerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    MESHMODELINGTOOLS_API FPerlinLayerProperties();
};

