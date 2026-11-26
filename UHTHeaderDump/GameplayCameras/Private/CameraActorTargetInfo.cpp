#include "CameraActorTargetInfo.h"

FCameraActorTargetInfo::FCameraActorTargetInfo() {
    this->Actor = NULL;
    this->TargetShape = ECameraTargetShape::Point;
    this->TargetSize = 0.00f;
    this->Weight = 0.00f;
}

