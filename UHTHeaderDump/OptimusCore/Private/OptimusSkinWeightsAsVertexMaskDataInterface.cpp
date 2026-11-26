#include "OptimusSkinWeightsAsVertexMaskDataInterface.h"

UOptimusSkinWeightsAsVertexMaskDataInterface::UOptimusSkinWeightsAsVertexMaskDataInterface() {
    this->BoneNames.AddDefaulted(1);
    this->ExpandTowardsRoot = 0;
    this->ExpandTowardsLeaf = 999;
    this->bDebugDrawIncludedBones = true;
}


