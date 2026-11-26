#include "MovieGraphGlobalGameOverridesNode.h"

UMovieGraphGlobalGameOverridesNode::UMovieGraphGlobalGameOverridesNode() {
    this->bOverride_GameModeOverride = false;
    this->bOverride_SoftGameModeOverride = false;
    this->bOverride_ScalabilityQualityLevel = false;
    this->bOverride_bDisableTextureStreaming = false;
    this->bOverride_bDisableLODs = false;
    this->bOverride_bDisableHLODs = false;
    this->bOverride_bFlushLevelStreaming = false;
    this->bOverride_bFlushAssetCompiler = false;
    this->bOverride_bFlushShaderCompiler = false;
    this->bOverride_bFlushGrassStreaming = false;
    this->bOverride_bFlushStreamingManagers = false;
    this->bOverride_VirtualTextureFeedbackFactor = false;
    this->bOverride_bRebuildLumenSceneBetweenRenderLayers = false;
    this->GameModeOverride = NULL;
    this->ScalabilityQualityLevel = EMovieGraphScalabilityQualityLevel::Cinematic;
    this->bDisableTextureStreaming = false;
    this->bDisableLODs = false;
    this->bDisableHLODs = false;
    this->bFlushLevelStreaming = false;
    this->bFlushAssetCompiler = false;
    this->bFlushShaderCompiler = false;
    this->bFlushGrassStreaming = false;
    this->bFlushStreamingManagers = false;
    this->VirtualTextureFeedbackFactor = 1;
    this->bRebuildLumenSceneBetweenRenderLayers = false;
}


