#include "MovieGraphRenderLayerSubsystem.h"

UMovieGraphRenderLayerSubsystem::UMovieGraphRenderLayerSubsystem() {
    this->ActiveRenderLayer = NULL;
}

void UMovieGraphRenderLayerSubsystem::SetActiveRenderLayerByObj(UMovieGraphRenderLayer* RenderLayer) {
}

void UMovieGraphRenderLayerSubsystem::SetActiveRenderLayerByName(const FName& RenderLayerName) {
}

void UMovieGraphRenderLayerSubsystem::Reset() {
}

void UMovieGraphRenderLayerSubsystem::RemoveRenderLayer(const FString& RenderLayerName) {
}

TArray<UMovieGraphRenderLayer*> UMovieGraphRenderLayerSubsystem::GetRenderLayers() {
    return TArray<UMovieGraphRenderLayer*>();
}

UMovieGraphRenderLayerSubsystem* UMovieGraphRenderLayerSubsystem::GetFromWorld(const UWorld* World) {
    return NULL;
}

UMovieGraphRenderLayer* UMovieGraphRenderLayerSubsystem::GetActiveRenderLayer() const {
    return NULL;
}

void UMovieGraphRenderLayerSubsystem::ClearActiveRenderLayer() {
}

bool UMovieGraphRenderLayerSubsystem::AddRenderLayer(UMovieGraphRenderLayer* RenderLayer) {
    return false;
}


