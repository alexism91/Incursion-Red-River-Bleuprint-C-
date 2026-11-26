#include "MovieSceneScriptingByteChannel.h"

UMovieSceneScriptingByteChannel::UMovieSceneScriptingByteChannel() {
}

void UMovieSceneScriptingByteChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingByteChannel::SetDefault(uint8 InDefaultValue) {
}

void UMovieSceneScriptingByteChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingByteChannel::RemoveDefault() {
}

bool UMovieSceneScriptingByteChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

uint8 UMovieSceneScriptingByteChannel::GetDefault() const {
    return 0;
}

UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(const FFrameNumber& InTime, uint8 NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) {
    return NULL;
}


