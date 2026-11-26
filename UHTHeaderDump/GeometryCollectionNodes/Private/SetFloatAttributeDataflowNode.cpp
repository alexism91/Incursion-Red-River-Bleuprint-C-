#include "SetFloatAttributeDataflowNode.h"

FSetFloatAttributeDataflowNode::FSetFloatAttributeDataflowNode() {
    this->Method = EDataflowSetFloatArrayMethod::Random;
    this->RandomSeed = 0;
    this->NoiseScale = 0.00f;
}

