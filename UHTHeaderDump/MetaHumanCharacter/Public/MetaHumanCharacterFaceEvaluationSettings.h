#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterFaceEvaluationSettings.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterFaceEvaluationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighFrequencyDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadScale;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterFaceEvaluationSettings();
};

