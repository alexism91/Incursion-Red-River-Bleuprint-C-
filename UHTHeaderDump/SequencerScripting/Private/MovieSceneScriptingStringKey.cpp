#include "MovieSceneScriptingStringKey.h"

UMovieSceneScriptingStringKey::UMovieSceneScriptingStringKey() {
}

void UMovieSceneScriptingStringKey::SetValue(const FString& InNewValue) {
}

void UMovieSceneScriptingStringKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

FString UMovieSceneScriptingStringKey::GetValue() const {
    return TEXT("");
}

FFrameTime UMovieSceneScriptingStringKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


