#include "MovieSceneMaterialTrackExtensions.h"

UMovieSceneMaterialTrackExtensions::UMovieSceneMaterialTrackExtensions() {
}

void UMovieSceneMaterialTrackExtensions::SetMaterialInfo(UMovieSceneComponentMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo) {
}

void UMovieSceneMaterialTrackExtensions::SetMaterialIndex(UMovieSceneComponentMaterialTrack* Track, const int32 MaterialIndex) {
}

FComponentMaterialInfo UMovieSceneMaterialTrackExtensions::GetMaterialInfo(UMovieSceneComponentMaterialTrack* Track) {
    return FComponentMaterialInfo{};
}

int32 UMovieSceneMaterialTrackExtensions::GetMaterialIndex(UMovieSceneComponentMaterialTrack* Track) {
    return 0;
}


