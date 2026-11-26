#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneCondition -FallbackName=MovieSceneCondition
#include "EMovieSceneScalabilityConditionGroup.h"
#include "EMovieSceneScalabilityConditionLevel.h"
#include "EMovieSceneScalabilityConditionOperator.h"
#include "MovieSceneScalabilityCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMovieSceneScalabilityCondition : public UMovieSceneCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneScalabilityConditionGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneScalabilityConditionOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneScalabilityConditionLevel Level;
    
    UMovieSceneScalabilityCondition();

};

