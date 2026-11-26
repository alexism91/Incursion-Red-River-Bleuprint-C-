#include "PCGGenerateSeedSettings.h"

UPCGGenerateSeedSettings::UPCGGenerateSeedSettings() {
    this->GenerationSource = EPCGGenerateSeedSource::RandomStream;
    this->bResetSeedPerInput = true;
}


