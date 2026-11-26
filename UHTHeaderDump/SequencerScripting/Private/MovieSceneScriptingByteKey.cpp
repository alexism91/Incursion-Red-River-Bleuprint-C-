#include "MovieSceneScriptingByteKey.h"

UMovieSceneScriptingByteKey::UMovieSceneScriptingByteKey() {
}

void UMovieSceneScriptingByteKey::SetValue(uint8 InNewValue) {
}

void UMovieSceneScriptingByteKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

uint8 UMovieSceneScriptingByteKey::GetValue() const {
    return 0;
}

FFrameTime UMovieSceneScriptingByteKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


