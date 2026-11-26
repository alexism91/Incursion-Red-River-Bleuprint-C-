#include "MetaHumanFaceFittingSolver.h"

UMetaHumanFaceFittingSolver::UMetaHumanFaceFittingSolver() {
    this->bOverrideDeviceConfig = false;
    this->DeviceConfig = NULL;
    this->FaceAnimationSolver = NULL;
    this->PredictiveSolver = NULL;
}


