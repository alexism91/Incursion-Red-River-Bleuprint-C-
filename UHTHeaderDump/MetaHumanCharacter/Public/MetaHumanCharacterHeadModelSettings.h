#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEyelashesProperties.h"
#include "MetaHumanCharacterTeethProperties.h"
#include "MetaHumanCharacterHeadModelSettings.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterHeadModelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyelashesProperties Eyelashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterTeethProperties Teeth;
    
    FMetaHumanCharacterHeadModelSettings();
};

