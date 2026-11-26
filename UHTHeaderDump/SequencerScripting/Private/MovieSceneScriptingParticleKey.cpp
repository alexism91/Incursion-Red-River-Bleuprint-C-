#include "MovieSceneScriptingParticleKey.h"

UMovieSceneScriptingParticleKey::UMovieSceneScriptingParticleKey() {
}

void UMovieSceneScriptingParticleKey::SetValue(EParticleKey InNewValue) {
}

void UMovieSceneScriptingParticleKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
}

EParticleKey UMovieSceneScriptingParticleKey::GetValue() const {
    return EParticleKey::Activate;
}

FFrameTime UMovieSceneScriptingParticleKey::GetTime(EMovieSceneTimeUnit TimeUnit) const {
    return FFrameTime{};
}


