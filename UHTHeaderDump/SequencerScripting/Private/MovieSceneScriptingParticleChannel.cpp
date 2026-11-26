#include "MovieSceneScriptingParticleChannel.h"

UMovieSceneScriptingParticleChannel::UMovieSceneScriptingParticleChannel() {
}

void UMovieSceneScriptingParticleChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingParticleChannel::SetDefault(EParticleKey InDefaultValue) {
}

void UMovieSceneScriptingParticleChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingParticleChannel::RemoveDefault() {
}

bool UMovieSceneScriptingParticleChannel::HasDefault() const {
    return false;
}

int32 UMovieSceneScriptingParticleChannel::GetNumKeys() const {
    return 0;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingParticleChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingParticleChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

EParticleKey UMovieSceneScriptingParticleChannel::GetDefault() const {
    return EParticleKey::Activate;
}

TArray<EParticleKey> UMovieSceneScriptingParticleChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const {
    return TArray<EParticleKey>();
}

FSequencerScriptingRange UMovieSceneScriptingParticleChannel::ComputeEffectiveRange() const {
    return FSequencerScriptingRange{};
}

UMovieSceneScriptingParticleKey* UMovieSceneScriptingParticleChannel::AddKey(const FFrameNumber& InTime, EParticleKey NewParticleValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


