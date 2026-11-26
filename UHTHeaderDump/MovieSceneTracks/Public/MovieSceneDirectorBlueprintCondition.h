#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneConditionCheckFrequency -FallbackName=EMovieSceneConditionCheckFrequency
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneConditionScope -FallbackName=EMovieSceneConditionScope
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneCondition -FallbackName=MovieSceneCondition
#include "MovieSceneDirectorBlueprintConditionData.h"
#include "MovieSceneDirectorBlueprintCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMovieSceneDirectorBlueprintCondition : public UMovieSceneCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDirectorBlueprintConditionData DirectorBlueprintConditionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneConditionScope Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneConditionCheckFrequency CheckFrequency;
    
public:
    UMovieSceneDirectorBlueprintCondition();

};

