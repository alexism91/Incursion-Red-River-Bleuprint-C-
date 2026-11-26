#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneControlRigSpaceType.h"
#include "RigElementKey.h"
#include "MovieSceneControlRigSpaceBaseKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneControlRigSpaceBaseKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneControlRigSpaceType SpaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey ControlRigElement;
    
    CONTROLRIG_API FMovieSceneControlRigSpaceBaseKey();
};

