#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneServerClientMask.h"
#include "MovieSceneSequenceHierarchyNode.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSequenceTransform.h"
#include "MovieSceneSubSequenceData.h"
#include "MovieSceneSubSequenceTree.h"
#include "MovieSceneSequenceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceHierarchyNode RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSubSequenceTree Tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceTransform RootTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneServerClientMask AccumulatedNetworkMask;
    
public:
    MOVIESCENE_API FMovieSceneSequenceHierarchy();
};

