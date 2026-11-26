#include "MovieSceneScriptingIntegerKey.h"

UMovieSceneScriptingIntegerKey::UMovieSceneScriptingIntegerKey() {
}

void UMovieSceneScriptingIntegerKey::SetValue(int32 InNewValue) {
}

void UMovieSceneScriptingIntegerKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

int32 UMovieSceneScriptingIntegerKey::GetValue() const {
    return 0;
}

FFrameTime UMovieSceneScriptingIntegerKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


