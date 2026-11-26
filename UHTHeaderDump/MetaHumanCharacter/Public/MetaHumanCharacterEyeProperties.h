#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEyeCorneaProperties.h"
#include "MetaHumanCharacterEyeIrisProperties.h"
#include "MetaHumanCharacterEyePupilProperties.h"
#include "MetaHumanCharacterEyeScleraProperties.h"
#include "MetaHumanCharacterEyeProperties.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterEyeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeIrisProperties Iris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyePupilProperties Pupil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeCorneaProperties Cornea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeScleraProperties Sclera;
    
    FMetaHumanCharacterEyeProperties();
};

