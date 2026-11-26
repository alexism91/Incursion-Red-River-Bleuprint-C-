#include "PCGSelectionKey.h"

FPCGSelectionKey::FPCGSelectionKey() {
    this->ActorFilter = EPCGActorFilter::Self;
    this->Selection = EPCGActorSelection::ByTag;
    this->SelectionClass = NULL;
    this->OptionalExtraDependency = NULL;
}

