#include "ChaosVDJointStateDataWrapper.h"

FChaosVDJointStateDataWrapper::FChaosVDJointStateDataWrapper() {
    this->bDisabled = false;
    this->bBroken = false;
    this->bBreaking = false;
    this->bDriveTargetChanged = false;
    this->bEnabledDuringResim = false;
    this->ResimType = EChaosVDJointReSimType::FullResim;
    this->SyncState = EChaosVDJointSyncType::InSync;
}

