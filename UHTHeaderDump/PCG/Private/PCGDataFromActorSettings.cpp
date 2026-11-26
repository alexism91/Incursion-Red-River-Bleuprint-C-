#include "PCGDataFromActorSettings.h"

UPCGDataFromActorSettings::UPCGDataFromActorSettings() {
    this->Mode = EPCGGetDataFromActorMode::ParseActorComponents;
    this->bIgnorePCGGeneratedComponents = true;
    this->bAlsoOutputSinglePointData = false;
    this->bComponentsMustOverlapSelf = true;
    this->bGetDataOnAllGrids = true;
    this->AllowedGrids = 0;
    this->bMergeSinglePointData = false;
    this->bAlwaysRequeryActors = false;
    this->bSilenceSanitizedAttributeNameWarnings = false;
    this->bSilenceReservedAttributeNameWarnings = false;
    this->bDisplayModeSettings = true;
}


