#include "MovieGraphMaterialModifier.h"

UMovieGraphMaterialModifier::UMovieGraphMaterialModifier() {
    this->bOverride_Material = false;
}

void UMovieGraphMaterialModifier::UndoModifier() {
}

void UMovieGraphMaterialModifier::SetMaterial(TSoftObjectPtr<UMaterialInterface> InMaterial) {
}

void UMovieGraphMaterialModifier::ApplyModifier(const UWorld* World) {
}


