#include "MovieSceneScriptingObjectPathKey.h"

UMovieSceneScriptingObjectPathKey::UMovieSceneScriptingObjectPathKey() {
}

void UMovieSceneScriptingObjectPathKey::SetValue(UObject* InNewValue) {
}

void UMovieSceneScriptingObjectPathKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

UObject* UMovieSceneScriptingObjectPathKey::GetValue() const {
    return NULL;
}

FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


