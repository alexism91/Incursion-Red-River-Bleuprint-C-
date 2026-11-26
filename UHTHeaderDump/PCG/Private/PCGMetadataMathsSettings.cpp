#include "PCGMetadataMathsSettings.h"

UPCGMetadataMathsSettings::UPCGMetadataMathsSettings() {
    this->Operation = EPCGMetadataMathsOperation::Add;
    this->bForceRoundingOpToInt = false;
    this->bForceOpToDouble = false;
}


