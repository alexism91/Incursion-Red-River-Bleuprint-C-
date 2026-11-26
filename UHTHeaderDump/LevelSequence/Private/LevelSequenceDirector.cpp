#include "LevelSequenceDirector.h"

ULevelSequenceDirector::ULevelSequenceDirector() {
    this->SubSequenceID = 0;
    this->InstanceId = 65535;
    this->InstanceSerial = 0;
    this->Player = NULL;
    this->MovieScenePlayerIndex = 0;
}


UMovieSceneSequence* ULevelSequenceDirector::GetSequence() {
    return NULL;
}

FQualifiedFrameTime ULevelSequenceDirector::GetRootSequenceTime() const {
    return FQualifiedFrameTime{};
}

FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime() const {
    return FQualifiedFrameTime{};
}

TArray<UObject*> ULevelSequenceDirector::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<UObject*>();
}

UObject* ULevelSequenceDirector::GetBoundObject(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}

TArray<AActor*> ULevelSequenceDirector::GetBoundActors(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<AActor*>();
}

AActor* ULevelSequenceDirector::GetBoundActor(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}


