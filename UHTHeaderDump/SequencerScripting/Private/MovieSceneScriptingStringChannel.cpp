#include "MovieSceneScriptingStringChannel.h"

UMovieSceneScriptingStringChannel::UMovieSceneScriptingStringChannel() {
}

void UMovieSceneScriptingStringChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingStringChannel::SetDefault(const FString& InDefaultValue) {
}

void UMovieSceneScriptingStringChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingStringChannel::RemoveDefault() {
}

bool UMovieSceneScriptingStringChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

FString UMovieSceneScriptingStringChannel::GetDefault() const {
    return TEXT("");
}

UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const FFrameNumber& InTime, const FString& NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


