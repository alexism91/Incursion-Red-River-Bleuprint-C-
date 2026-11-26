#include "CameraContextDataDefinition.h"

FCameraContextDataDefinition::FCameraContextDataDefinition() {
    this->DataType = ECameraContextDataType::Name;
    this->DataContainerType = ECameraContextDataContainerType::None;
    this->DataTypeObject = NULL;
    this->bAutoReset = false;
}

