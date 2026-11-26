#include "CameraVariableDefinition.h"

FCameraVariableDefinition::FCameraVariableDefinition() {
    this->VariableType = ECameraVariableType::Boolean;
    this->BlendableStructType = NULL;
    this->bIsPrivate = false;
    this->bIsInput = false;
    this->bAutoReset = false;
}

