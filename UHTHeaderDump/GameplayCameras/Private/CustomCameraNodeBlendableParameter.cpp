#include "CustomCameraNodeBlendableParameter.h"

FCustomCameraNodeBlendableParameter::FCustomCameraNodeBlendableParameter() {
    this->ParameterType = ECameraVariableType::Boolean;
    this->BlendableStructType = NULL;
    this->OverrideVariable = NULL;
}

