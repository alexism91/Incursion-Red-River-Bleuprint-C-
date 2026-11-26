#include "MovieGraphRenderPropertyModifier.h"

UMovieGraphRenderPropertyModifier::UMovieGraphRenderPropertyModifier() {
    this->bOverride_bIsHidden = false;
    this->bOverride_bCastsShadows = false;
    this->bOverride_bCastShadowWhileHidden = false;
    this->bOverride_bAffectIndirectLightingWhileHidden = false;
    this->bOverride_bHoldout = false;
    this->bOverride_bProcessEditorOnlyActors = false;
    this->bIsHidden = false;
    this->bCastsShadows = true;
    this->bCastShadowWhileHidden = false;
    this->bAffectIndirectLightingWhileHidden = false;
    this->bHoldout = false;
    this->bProcessEditorOnlyActors = false;
}

void UMovieGraphRenderPropertyModifier::UndoModifier() {
}

void UMovieGraphRenderPropertyModifier::SetHidden(const bool bInIsHidden) {
}

bool UMovieGraphRenderPropertyModifier::IsHidden() const {
    return false;
}

void UMovieGraphRenderPropertyModifier::ApplyModifier(const UWorld* World) {
}


