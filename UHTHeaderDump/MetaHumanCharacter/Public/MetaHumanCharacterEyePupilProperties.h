#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEyePupilProperties.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterEyePupilProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Feather;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterEyePupilProperties();
};

