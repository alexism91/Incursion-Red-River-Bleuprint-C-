#include "CustomCameraNodeDataParameter.h"

FCustomCameraNodeDataParameter::FCustomCameraNodeDataParameter() {
    this->ParameterType = ECameraContextDataType::Name;
    this->ParameterContainerType = ECameraContextDataContainerType::None;
    this->ParameterTypeObject = NULL;
}

