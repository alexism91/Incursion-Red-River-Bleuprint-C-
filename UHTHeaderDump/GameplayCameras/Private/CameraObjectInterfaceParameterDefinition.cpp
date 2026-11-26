#include "CameraObjectInterfaceParameterDefinition.h"

FCameraObjectInterfaceParameterDefinition::FCameraObjectInterfaceParameterDefinition() {
    this->ParameterType = ECameraObjectInterfaceParameterType::Blendable;
    this->VariableType = ECameraVariableType::Boolean;
    this->BlendableStructType = NULL;
    this->DataType = ECameraContextDataType::Name;
    this->DataContainerType = ECameraContextDataContainerType::None;
    this->DataTypeObject = NULL;
}

