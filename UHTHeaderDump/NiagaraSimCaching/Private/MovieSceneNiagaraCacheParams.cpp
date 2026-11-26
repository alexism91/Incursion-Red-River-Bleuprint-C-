#include "MovieSceneNiagaraCacheParams.h"

FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams() {
    this->SimCache = NULL;
    this->bLockCacheToReadOnly = false;
    this->bOverrideQualityLevel = false;
    this->RecordQualityLevel = EPerQualityLevels::Low;
    this->CacheReplayPlayMode = ENiagaraSimCacheSectionPlayMode::SimWithoutCache;
    this->SectionStretchMode = ENiagaraSimCacheSectionStretchMode::Repeat;
}

