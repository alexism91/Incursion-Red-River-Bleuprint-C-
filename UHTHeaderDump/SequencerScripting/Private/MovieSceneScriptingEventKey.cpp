#include "MovieSceneScriptingEventKey.h"

UMovieSceneScriptingEventKey::UMovieSceneScriptingEventKey() {
}

void UMovieSceneScriptingEventKey::SetValue(const FMovieSceneEvent& InNewValue) {
}

void UMovieSceneScriptingEventKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue() const {
    return FMovieSceneEvent{};
}

FFrameTime UMovieSceneScriptingEventKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


