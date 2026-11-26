#include "CameraObjectInterfaceDataParameter.h"

UCameraObjectInterfaceDataParameter::UCameraObjectInterfaceDataParameter() {
    this->DataType = ECameraContextDataType::Name;
    this->DataContainerType = ECameraContextDataContainerType::None;
    this->DataTypeObject = NULL;
}


