#include "MovieSceneSpawnableBindingBase.h"

UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase() {
    this->SpawnOwnership = ESpawnOwnership::InnerSequence;
    this->bContinuouslyRespawn = false;
}


