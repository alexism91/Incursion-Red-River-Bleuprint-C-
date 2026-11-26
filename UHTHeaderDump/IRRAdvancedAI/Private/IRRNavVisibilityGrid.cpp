#include "IRRNavVisibilityGrid.h"

FIRRNavVisibilityGrid::FIRRNavVisibilityGrid() {
    this->NumBins = 0;
    this->MaskWordsPerSample = 0;
    this->QuantMaxDistance = 0.00f;
    this->VisibilityRadius = 0.00f;
    this->ElevQuantMinCm = 0.00f;
    this->ElevQuantRangeCm = 0.00f;
    this->VoronoiCellSize = 0.00f;
}

