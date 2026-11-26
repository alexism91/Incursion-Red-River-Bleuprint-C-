#include "MovieGraphRenderLayer.h"

UMovieGraphRenderLayer::UMovieGraphRenderLayer() {
}

void UMovieGraphRenderLayer::SetRenderLayerName(const FName& NewName) {
}

void UMovieGraphRenderLayer::Revert() {
}

void UMovieGraphRenderLayer::RemoveModifier(UMovieGraphCollectionModifier* Modifier) {
}

FName UMovieGraphRenderLayer::GetRenderLayerName() const {
    return NAME_None;
}

TArray<UMovieGraphCollectionModifier*> UMovieGraphRenderLayer::GetModifiers() const {
    return TArray<UMovieGraphCollectionModifier*>();
}

UMovieGraphCollection* UMovieGraphRenderLayer::GetCollectionByName(const FString& Name) const {
    return NULL;
}

void UMovieGraphRenderLayer::Apply(const UWorld* World) {
}

void UMovieGraphRenderLayer::AddModifier(UMovieGraphCollectionModifier* Modifier) {
}


