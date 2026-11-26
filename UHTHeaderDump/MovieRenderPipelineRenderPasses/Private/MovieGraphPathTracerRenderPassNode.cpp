#include "MovieGraphPathTracerRenderPassNode.h"

UMovieGraphPathTracerRenderPassNode::UMovieGraphPathTracerRenderPassNode() {
    this->bOverride_SpatialSampleCount = false;
    this->bOverride_SeedOffset = false;
    this->bOverride_bEnableReferenceMotionBlur = false;
    this->bOverride_bEnableDenoiser = false;
    this->bOverride_DenoiserType = false;
    this->bOverride_FrameCount = false;
    this->bOverride_bDisableToneCurve = false;
    this->bOverride_bAllowOCIO = false;
    this->bOverride_bLightingComponents_IncludeEmissive = false;
    this->bOverride_bLightingComponents_IncludeDiffuse = false;
    this->bOverride_bLightingComponents_IncludeIndirectDiffuse = false;
    this->bOverride_bLightingComponents_IncludeSpecular = false;
    this->bOverride_bLightingComponents_IncludeIndirectSpecular = false;
    this->bOverride_bLightingComponents_IncludeVolume = false;
    this->bOverride_bLightingComponents_IncludeIndirectVolume = false;
    this->bOverride_bWriteAllSamples = false;
    this->bOverride_AdditionalPostProcessMaterials = false;
    this->bOverride_bEnableHighResolutionTiling = false;
    this->bOverride_TileCount = false;
    this->bOverride_OverlapPercentage = false;
    this->bOverride_bAllocateHistoryPerTile = false;
    this->bOverride_bPageToSystemMemory = false;
    this->SpatialSampleCount = 1;
    this->SeedOffset = 0;
    this->bEnableReferenceMotionBlur = true;
    this->bEnableDenoiser = true;
    this->DenoiserType = EMovieGraphPathTracerDenoiserType::Spatial;
    this->FrameCount = 2;
    this->bWriteAllSamples = false;
    this->bDisableToneCurve = false;
    this->bAllowOCIO = true;
    this->bLightingComponents_IncludeEmissive = true;
    this->bLightingComponents_IncludeDiffuse = true;
    this->bLightingComponents_IncludeIndirectDiffuse = true;
    this->bLightingComponents_IncludeSpecular = true;
    this->bLightingComponents_IncludeIndirectSpecular = true;
    this->bLightingComponents_IncludeVolume = true;
    this->bLightingComponents_IncludeIndirectVolume = true;
    this->AdditionalPostProcessMaterials.AddDefaulted(2);
    this->bEnableHighResolutionTiling = false;
    this->TileCount = 1;
    this->OverlapPercentage = 0.00f;
    this->bAllocateHistoryPerTile = false;
    this->bPageToSystemMemory = false;
}


