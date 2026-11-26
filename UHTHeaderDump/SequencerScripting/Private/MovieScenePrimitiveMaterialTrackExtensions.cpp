#include "MovieScenePrimitiveMaterialTrackExtensions.h"

UMovieScenePrimitiveMaterialTrackExtensions::UMovieScenePrimitiveMaterialTrackExtensions() {
}

void UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo) {
}

void UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track, const int32 MaterialIndex) {
}

FComponentMaterialInfo UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track) {
    return FComponentMaterialInfo{};
}

int32 UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track) {
    return 0;
}


