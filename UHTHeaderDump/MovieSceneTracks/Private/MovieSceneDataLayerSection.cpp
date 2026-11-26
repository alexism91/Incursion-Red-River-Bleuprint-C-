#include "MovieSceneDataLayerSection.h"

UMovieSceneDataLayerSection::UMovieSceneDataLayerSection() {
    this->DesiredState = EDataLayerRuntimeState::Activated;
    this->PrerollState = EDataLayerRuntimeState::Activated;
    this->bFlushOnActivated = true;
    this->bFlushOnUnload = false;
}

void UMovieSceneDataLayerSection::SetPrerollState(EDataLayerRuntimeState InPrerollState) {
}

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool NewBFlushOnUnload) {
}

void UMovieSceneDataLayerSection::SetFlushOnActivated(bool NewBFlushOnActivated) {
}

void UMovieSceneDataLayerSection::SetDesiredState(EDataLayerRuntimeState InDesiredState) {
}

void UMovieSceneDataLayerSection::SetDataLayerAssets(const TArray<UDataLayerAsset*>& InDataLayerAssets) {
}

bool UMovieSceneDataLayerSection::HasPreRoll() const {
    return false;
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetPrerollState() const {
    return EDataLayerRuntimeState::Unloaded;
}

bool UMovieSceneDataLayerSection::GetFlushOnUnload() const {
    return false;
}

bool UMovieSceneDataLayerSection::GetFlushOnActivated() const {
    return false;
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetDesiredState() const {
    return EDataLayerRuntimeState::Unloaded;
}

TArray<UDataLayerAsset*> UMovieSceneDataLayerSection::GetDataLayerAssets() const {
    return TArray<UDataLayerAsset*>();
}


