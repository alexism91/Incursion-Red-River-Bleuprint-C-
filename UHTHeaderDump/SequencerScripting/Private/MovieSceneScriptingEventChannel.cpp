#include "MovieSceneScriptingEventChannel.h"

UMovieSceneScriptingEventChannel::UMovieSceneScriptingEventChannel() {
}

void UMovieSceneScriptingEventChannel::Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit) {
}

void UMovieSceneScriptingEventChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeysByIndex(const TArray<int32>& Indices) const {
    return TArray<UMovieSceneScriptingKey*>();
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit) {
    return NULL;
}


