#include "MovieSceneReplaceableActorBinding_BPBase.h"

UMovieSceneReplaceableActorBinding_BPBase::UMovieSceneReplaceableActorBinding_BPBase() {
    this->CustomBindingPriority = 0;
    this->PreviewSpawnableType = NULL;
}

bool UMovieSceneReplaceableActorBinding_BPBase::BP_SupportsBindingCreationFromObject_Implementation(const UObject* SourceObject) const {
    return false;
}


void UMovieSceneReplaceableActorBinding_BPBase::BP_InitReplaceableBinding_Implementation(UObject* SourceObject, UMovieScene* OwnerMovieScene) {
}


