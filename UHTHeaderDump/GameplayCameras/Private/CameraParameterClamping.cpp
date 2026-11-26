#include "CameraParameterClamping.h"

FCameraParameterClamping::FCameraParameterClamping() {
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->bClampMin = false;
    this->bClampMax = false;
}

