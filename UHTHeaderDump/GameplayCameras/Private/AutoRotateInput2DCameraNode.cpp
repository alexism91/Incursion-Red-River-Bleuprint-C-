#include "AutoRotateInput2DCameraNode.h"
#include "CriticalDamperValueInterpolator.h"

UAutoRotateInput2DCameraNode::UAutoRotateInput2DCameraNode() {
    this->Direction = ECameraAutoRotateDirection::Facing;
    this->Interpolator = CreateDefaultSubobject<UCriticalDamperValueInterpolator>(TEXT("Interpolator"));
    this->InputNode = NULL;
}


