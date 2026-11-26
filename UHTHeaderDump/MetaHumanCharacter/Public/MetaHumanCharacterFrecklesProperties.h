#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterFrecklesMask.h"
#include "MetaHumanCharacterFrecklesProperties.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterFrecklesProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToneShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanCharacterFrecklesMask Mask;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterFrecklesProperties();
};

