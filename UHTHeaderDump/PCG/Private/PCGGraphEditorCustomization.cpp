#include "PCGGraphEditorCustomization.h"

FPCGGraphEditorCustomization::FPCGGraphEditorCustomization() {
    this->Graph = NULL;
    this->bFilterNodesByCategory = false;
    this->NodeFilterType = EPCGGraphEditorFiltering::Allow;
    this->bFilterSubgraphs = false;
    this->SubgraphFilterType = EPCGGraphEditorFiltering::Allow;
}

