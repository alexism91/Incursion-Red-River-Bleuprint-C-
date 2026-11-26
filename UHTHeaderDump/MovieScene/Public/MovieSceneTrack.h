#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneConditionContainer.h"
#include "MovieSceneDecorationContainerObject.h"
#include "MovieSceneTrackEvalOptions.h"
#include "MovieSceneTrackEvaluationField.h"
#include "MovieSceneTrackRowMetadata.h"
#include "MovieSceneTrack.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneDecorationContainerObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackEvalOptions EvalOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneConditionContainer ConditionContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvalDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RowsDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EvaluationFieldGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackEvaluationField EvaluationField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneTrackRowMetadata> TrackRowMetadata;
    
public:
    UMovieSceneTrack();

};

