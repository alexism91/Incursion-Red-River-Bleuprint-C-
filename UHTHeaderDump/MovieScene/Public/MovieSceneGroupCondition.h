#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneGroupConditionOperator.h"
#include "MovieSceneCondition.h"
#include "MovieSceneConditionContainer.h"
#include "MovieSceneGroupCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMovieSceneGroupCondition : public UMovieSceneCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneGroupConditionOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneConditionContainer> SubConditions;
    
    UMovieSceneGroupCondition();

};

