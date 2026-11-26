#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingReferences -FallbackName=MovieSceneBindingReferences
#include "UpgradedLevelSequenceBindingReferences.generated.h"

USTRUCT(BlueprintType)
struct FUpgradedLevelSequenceBindingReferences : public FMovieSceneBindingReferences {
    GENERATED_BODY()
public:
    LEVELSEQUENCE_API FUpgradedLevelSequenceBindingReferences();
};

