#include "MovieSceneScriptingActorReferenceChannel.h"

UMovieSceneScriptingActorReferenceChannel::UMovieSceneScriptingActorReferenceChannel() {
}

void UMovieSceneScriptingActorReferenceChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingActorReferenceChannel::SetDefault(FMovieSceneObjectBindingID InDefaultValue) {
}

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault() {
}

bool UMovieSceneScriptingActorReferenceChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault() const {
    return FMovieSceneObjectBindingID{};
}

UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


