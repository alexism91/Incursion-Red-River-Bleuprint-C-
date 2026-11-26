#include "BakeHeightMapToolProperties.h"

UBakeHeightMapToolProperties::UBakeHeightMapToolProperties() {
    this->HeightRangeMode = EBakeHeightRangeMode::Absolute;
    this->InnerDistance = -1.00f;
    this->OuterDistance = 1.00f;
    this->InnerBoundsDistance = -0.10f;
    this->OuterBoundsDistance = 0.10f;
}


