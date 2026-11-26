#include "ChaosVDQueryDataWrapper.h"

FChaosVDQueryDataWrapper::FChaosVDQueryDataWrapper() {
    this->ID = 0;
    this->ParentQueryID = 0;
    this->WorldSolverID = 0;
    this->bIsRetryQuery = false;
    this->Type = EChaosVDSceneQueryType::Invalid;
    this->Mode = EChaosVDSceneQueryMode::Single;
    this->CollisionChannel = 0;
}

