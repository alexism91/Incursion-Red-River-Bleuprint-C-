#include "FontFace.h"

UFontFace::UFontFace() {
    this->Hinting = EFontHinting::Default;
    this->LoadingPolicy = EFontLoadingPolicy::LazyLoad;
    this->LayoutMethod = EFontLayoutMethod::Metrics;
    this->AscendOverriddenValue = 0;
    this->bIsAscendOverridden = false;
    this->DescendOverriddenValue = 0;
    this->bIsDescendOverridden = false;
    this->StrikeBrushHeightPercentage = 60;
    this->bEnableDistanceFieldRendering = false;
    this->MinDistanceFieldPpem = 32;
    this->MidDistanceFieldPpem = 48;
    this->MaxDistanceFieldPpem = 64;
    this->MinMultiDistanceFieldPpem = 32;
    this->MidMultiDistanceFieldPpem = 40;
    this->MaxMultiDistanceFieldPpem = 56;
}


