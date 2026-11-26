#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneConditionCheckFrequency.h"
#include "EMovieSceneConditionScope.h"
#include "MovieSceneConditionContext.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneCondition.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UMovieSceneCondition : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
public:
    UMovieSceneCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMovieSceneConditionScope BP_GetScope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMovieSceneConditionCheckFrequency BP_GetCheckFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_EvaluateCondition(const FMovieSceneConditionContext& ConditionContext) const;
    
};

