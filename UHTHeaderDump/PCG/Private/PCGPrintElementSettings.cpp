#include "PCGPrintElementSettings.h"

UPCGPrintElementSettings::UPCGPrintElementSettings() {
    this->Verbosity = EPCGPrintVerbosity::Log;
    this->bDisplayOnNode = false;
    this->bPrintPerComponent = true;
    this->bPrefixWithOwner = false;
    this->bPrefixWithComponent = false;
    this->bPrefixWithGraph = true;
    this->bPrefixWithNode = true;
    this->bEnablePrint = true;
}


