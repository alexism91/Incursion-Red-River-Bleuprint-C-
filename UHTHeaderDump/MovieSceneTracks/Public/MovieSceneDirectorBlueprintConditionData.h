#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDirectorBlueprintConditionData.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FMovieSceneDirectorBlueprintConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> ConditionContextProperty;
    
    MOVIESCENETRACKS_API FMovieSceneDirectorBlueprintConditionData();
};

