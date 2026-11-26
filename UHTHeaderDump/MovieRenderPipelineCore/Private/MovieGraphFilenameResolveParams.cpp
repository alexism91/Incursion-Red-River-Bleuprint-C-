#include "MovieGraphFilenameResolveParams.h"

FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams() {
    this->RootFrameNumber = 0;
    this->ShotFrameNumber = 0;
    this->RootFrameNumberRel = 0;
    this->ShotFrameNumberRel = 0;
    this->Version = 0;
    this->bForceRelativeFrameNumbers = false;
    this->bEnsureAbsolutePath = false;
    this->ZeroPadFrameNumberCount = 0;
    this->Job = NULL;
    this->Shot = NULL;
    this->EvaluatedConfig = NULL;
    this->FrameNumberOffset = 0;
}

