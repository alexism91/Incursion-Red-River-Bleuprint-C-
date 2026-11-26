#include "CollisionPushCameraNode.h"

UCollisionPushCameraNode::UCollisionPushCameraNode() {
    this->SafePosition = ECollisionSafePosition::Pivot;
    this->SafePositionOffsetSpace = ECollisionSafePositionOffsetSpace::Pivot;
    this->CollisionChannel = ECC_Camera;
    this->PushInterpolator = NULL;
    this->PullInterpolator = NULL;
    this->bRunAsyncCollision = false;
}


