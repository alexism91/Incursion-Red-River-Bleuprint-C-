#include "MovieSceneScriptingIntegerChannel.h"

UMovieSceneScriptingIntegerChannel::UMovieSceneScriptingIntegerChannel() {
}

void UMovieSceneScriptingIntegerChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingIntegerChannel::SetInterpolateLinearKeys(bool bInInterpolateLinearKeys) {
}

void UMovieSceneScriptingIntegerChannel::SetDefault(int32 InDefaultValue) {
}

void UMovieSceneScriptingIntegerChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingIntegerChannel::RemoveDefault() {
}

bool UMovieSceneScriptingIntegerChannel::HasDefault() const {
    return false;
}

int32 UMovieSceneScriptingIntegerChannel::GetNumKeys() const {
    return 0;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

bool UMovieSceneScriptingIntegerChannel::GetInterpolateLinearKeys() const {
    return false;
}

int32 UMovieSceneScriptingIntegerChannel::GetDefault() const {
    return 0;
}

TArray<int32> UMovieSceneScriptingIntegerChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const {
    return TArray<int32>();
}

UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const FFrameNumber& InTime, int32 NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


