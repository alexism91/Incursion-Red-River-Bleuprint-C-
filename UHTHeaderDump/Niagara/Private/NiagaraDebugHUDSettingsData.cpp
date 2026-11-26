#include "NiagaraDebugHUDSettingsData.h"

FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData() {
    this->bHudEnabled = false;
    this->bHudRenderingEnabled = false;
    this->bValidationEnabled = false;
    this->bOverviewEnabled = false;
    this->OverviewMode = ENiagaraDebugHUDOverviewMode::Overview;
    this->OverviewSortMode = ENiagaraDebugHUDDOverviewSort::Name;
    this->bIncludeCascade = false;
    this->bShowRegisteredComponents = false;
    this->bOverviewShowFilteredSystemOnly = false;
    this->bShowGlobalBudgetInfo = false;
    this->bSystemFilterEnabled = false;
    this->bEmitterFilterEnabled = false;
    this->bActorFilterEnabled = false;
    this->bComponentFilterEnabled = false;
    this->bValidateSystemSimulationDataBuffers = false;
    this->bValidateParticleDataBuffers = false;
    this->bValidationLogErrors = false;
    this->ValidationAttributeDisplayTruncate = 0;
    this->SystemDebugVerbosity = ENiagaraDebugHudVerbosity::None;
    this->SystemEmitterVerbosity = ENiagaraDebugHudVerbosity::None;
    this->DataInterfaceVerbosity = ENiagaraDebugHudVerbosity::None;
    this->bSystemShowActiveOnlyInWorld = false;
    this->bShowParticleVariables = false;
    this->bEnableGpuParticleReadback = false;
    this->bShowParticleIndex = false;
    this->bShowParticlesVariablesWithSystem = false;
    this->bShowParticleVariablesVertical = false;
    this->bUseMaxParticlesToDisplay = false;
    this->MaxParticlesToDisplay = 0;
    this->bUseParticleDisplayClip = false;
    this->bUseParticleDisplayCenterRadius = false;
    this->ParticleDisplayCenterRadius = 0.00f;
    this->PerfReportFrames = 0;
    this->PerfSampleMode = ENiagaraDebugHUDPerfSampleMode::FrameTotal;
    this->PerfUnits = ENiagaraDebugHUDPerfUnits::Microseconds;
    this->bShowPerfColumGameThreadOnly = false;
    this->PerfGraphMode = ENiagaraDebugHUDPerfGraphMode::GameThread;
    this->PerfHistoryFrames = 0;
    this->bUsePerfGraphTimeRange = false;
    this->PerfGraphTimeRange = 0.00f;
    this->SmoothingWidth = 0;
    this->OverviewFont = ENiagaraDebugHudFont::Small;
    this->bDrawBoundsEnabled = false;
    this->bDrawBoundsWireframe = false;
    this->DrawBoundsAlpha = 0.00f;
    this->SystemColorTableOpacity = 0.00f;
    this->SystemColorSeed = 0;
    this->PlaybackMode = ENiagaraDebugPlaybackMode::Play;
    this->bPlaybackRateEnabled = false;
    this->PlaybackRate = 0.00f;
    this->bLoopTimeEnabled = false;
    this->LoopTime = 0.00f;
}

