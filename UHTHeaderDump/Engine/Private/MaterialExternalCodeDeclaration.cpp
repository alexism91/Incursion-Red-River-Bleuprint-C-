#include "MaterialExternalCodeDeclaration.h"

FMaterialExternalCodeDeclaration::FMaterialExternalCodeDeclaration() {
    this->bIsInlined = false;
    this->ReturnType = (EMaterialValueTypeBridge)0;
    this->Derivative = EDerivativeStatus::NotAware;
    this->ShaderFrequency = (EMaterialShaderFrequency)0;
}

