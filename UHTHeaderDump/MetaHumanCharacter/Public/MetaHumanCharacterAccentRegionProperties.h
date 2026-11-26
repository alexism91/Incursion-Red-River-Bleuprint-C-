#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterAccentRegionProperties.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterAccentRegionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Redness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lightness;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterAccentRegionProperties();
};

