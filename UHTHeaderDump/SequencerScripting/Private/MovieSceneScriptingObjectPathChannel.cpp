#include "MovieSceneScriptingObjectPathChannel.h"

UMovieSceneScriptingObjectPathChannel::UMovieSceneScriptingObjectPathChannel() {
}

void UMovieSceneScriptingObjectPathChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingObjectPathChannel::SetDefault(UObject* InDefaultValue) {
}

void UMovieSceneScriptingObjectPathChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingObjectPathChannel::RemoveDefault() {
}

bool UMovieSceneScriptingObjectPathChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

UObject* UMovieSceneScriptingObjectPathChannel::GetDefault() const {
    return NULL;
}

UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const FFrameNumber InTime, UObject* NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


