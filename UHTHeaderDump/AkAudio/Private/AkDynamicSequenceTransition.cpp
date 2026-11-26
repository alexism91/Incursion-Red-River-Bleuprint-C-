#include "AkDynamicSequenceTransition.h"

FAkDynamicSequenceTransition::FAkDynamicSequenceTransition() {
    this->TransitionDurationMs = 0;
    this->FadeCurve = EAkCurveInterpolation::Log3;
}

