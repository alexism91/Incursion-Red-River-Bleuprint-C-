#include "LandscapeMeshProxyComponent.h"

ULandscapeMeshProxyComponent::ULandscapeMeshProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentResolution = 0;
    this->ProxyLOD = 0;
    this->LODGroupKey = 0;
}


