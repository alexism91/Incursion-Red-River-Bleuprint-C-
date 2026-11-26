#include "PCGSubdivisionBaseSettings.h"

UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings() {
    this->bModuleInfoAsInput = false;
    this->bUseSeedAttribute = false;
    this->bForwardAttributesFromModulesInfo = false;
    this->SymbolAttributeName = TEXT("Symbol");
    this->bOutputSizeAttribute = true;
    this->SizeAttributeName = TEXT("Size");
    this->bOutputScalableAttribute = true;
    this->ScalableAttributeName = TEXT("Scalable");
    this->bOutputDebugColorAttribute = false;
    this->DebugColorAttributeName = TEXT("DebugColor");
}


