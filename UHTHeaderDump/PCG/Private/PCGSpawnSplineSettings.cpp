#include "PCGSpawnSplineSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

UPCGSpawnSplineSettings::UPCGSpawnSplineSettings() {
    this->SplineComponent = USplineComponent::StaticClass();
    this->bSpawnComponentFromAttribute = false;
    this->bOutputSplineComponentReference = true;
    this->ComponentReferenceAttributeName = TEXT("ComponentReference");
}


