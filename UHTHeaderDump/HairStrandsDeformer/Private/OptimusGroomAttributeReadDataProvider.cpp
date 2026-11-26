#include "OptimusGroomAttributeReadDataProvider.h"

UOptimusGroomAttributeReadDataProvider::UOptimusGroomAttributeReadDataProvider() {
    this->MeshComponent = NULL;
    this->GroomAttributeGroup = EOptimusGroomExecDomain::GuidesPoints;
    this->GroomAttributeType = EOptimusGroomAttributeTypes::Float;
}


