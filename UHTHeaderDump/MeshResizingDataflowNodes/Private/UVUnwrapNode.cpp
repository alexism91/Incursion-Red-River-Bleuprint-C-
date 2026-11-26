#include "UVUnwrapNode.h"

FUVUnwrapNode::FUVUnwrapNode() {
    this->Mesh = NULL;
    this->UVChannelIndex = 0;
    this->Method = EUVUnwrapMethod::ExponentialMap;
}

