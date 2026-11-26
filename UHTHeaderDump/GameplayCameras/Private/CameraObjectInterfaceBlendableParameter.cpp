#include "CameraObjectInterfaceBlendableParameter.h"

UCameraObjectInterfaceBlendableParameter::UCameraObjectInterfaceBlendableParameter() {
    this->ParameterType = ECameraVariableType::Boolean;
    this->BlendableStructType = NULL;
    this->bIsPreBlended = true;
    this->PrivateVariable = NULL;
}


