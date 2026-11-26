#include "MovieGraphDeferredRenderPassNode.h"

UMovieGraphDeferredRenderPassNode::UMovieGraphDeferredRenderPassNode() {
    this->bOverride_SpatialSampleCount = false;
    this->bOverride_AntiAliasingMethod = false;
    this->bOverride_bDisableToneCurve = false;
    this->bOverride_bAllowOCIO = false;
    this->bOverride_ViewModeIndex = false;
    this->bOverride_bWriteAllSamples = false;
    this->bOverride_AdditionalPostProcessMaterials = false;
    this->bOverride_bEnableHighResolutionTiling = false;
    this->bOverride_TileCount = false;
    this->bOverride_OverlapPercentage = false;
    this->bOverride_bAllocateHistoryPerTile = false;
    this->bOverride_bPageToSystemMemory = false;
    this->SpatialSampleCount = 1;
    this->AntiAliasingMethod = AAM_TSR;
    this->bWriteAllSamples = false;
    this->bDisableToneCurve = false;
    this->bAllowOCIO = true;
    this->ViewModeIndex = VMI_Lit;
    this->AdditionalPostProcessMaterials.AddDefaulted(2);
    this->bEnableHighResolutionTiling = false;
    this->TileCount = 1;
    this->OverlapPercentage = 0.00f;
    this->bAllocateHistoryPerTile = false;
    this->bPageToSystemMemory = false;
}


