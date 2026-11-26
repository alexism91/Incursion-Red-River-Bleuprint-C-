#include "MovieGraphDeferredPanoramicNode.h"

UMovieGraphDeferredPanoramicNode::UMovieGraphDeferredPanoramicNode() {
    this->bOverride_NumHorizontalSteps = false;
    this->bOverride_NumVerticalSteps = false;
    this->bOverride_bFollowCameraOrientation = false;
    this->bOverride_bAllocateHistoryPerPane = false;
    this->bOverride_bPageToSystemMemory = false;
    this->bOverride_SpatialSampleCount = false;
    this->bOverride_AntiAliasingMethod = false;
    this->bOverride_Filter = false;
    this->bOverride_bDisableToneCurve = false;
    this->bOverride_bAllowOCIO = false;
    this->bOverride_ViewModeIndex = false;
    this->bOverride_bWriteAllSamples = false;
    this->NumHorizontalSteps = 8;
    this->NumVerticalSteps = 3;
    this->bFollowCameraOrientation = true;
    this->bAllocateHistoryPerPane = false;
    this->bPageToSystemMemory = false;
    this->SpatialSampleCount = 1;
    this->AntiAliasingMethod = AAM_TSR;
    this->Filter = EMoviePipelinePanoramicFilterType::Bilinear;
    this->bWriteAllSamples = false;
    this->bDisableToneCurve = false;
    this->bAllowOCIO = true;
    this->ViewModeIndex = VMI_Lit;
}


