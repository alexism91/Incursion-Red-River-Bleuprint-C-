#include "FontOutlineSettings.h"

FFontOutlineSettings::FFontOutlineSettings() {
    this->OutlineSize = 0;
    this->bMiteredCorners = false;
    this->bSeparateFillAlpha = false;
    this->bApplyOutlineToDropShadows = false;
    this->OutlineMaterial = NULL;
}

