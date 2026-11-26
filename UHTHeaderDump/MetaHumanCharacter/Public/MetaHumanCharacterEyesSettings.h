#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEyeProperties.h"
#include "MetaHumanCharacterEyesSettings.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterEyesSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeProperties EyeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeProperties EyeRight;
    
    FMetaHumanCharacterEyesSettings();
};

