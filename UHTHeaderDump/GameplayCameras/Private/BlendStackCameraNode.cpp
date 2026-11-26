#include "BlendStackCameraNode.h"

UBlendStackCameraNode::UBlendStackCameraNode() {
    this->BlendStackType = ECameraBlendStackType::IsolatedTransient;
    this->Layer = ECameraRigLayer::None;
}


