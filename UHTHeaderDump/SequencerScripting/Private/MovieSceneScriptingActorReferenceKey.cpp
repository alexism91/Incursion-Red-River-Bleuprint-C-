#include "MovieSceneScriptingActorReferenceKey.h"

UMovieSceneScriptingActorReferenceKey::UMovieSceneScriptingActorReferenceKey() {
}

void UMovieSceneScriptingActorReferenceKey::SetValue(const FMovieSceneObjectBindingID& InNewValue) {
}

void UMovieSceneScriptingActorReferenceKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue() const {
    return FMovieSceneObjectBindingID{};
}

FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


