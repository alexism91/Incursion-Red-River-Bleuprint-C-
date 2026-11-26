#include "PCGPinProperties.h"

FPCGPinProperties::FPCGPinProperties() {
    this->Usage = EPCGPinUsage::Normal;
    this->AllowedTypes = EPCGDataType::None;
    this->bAllowMultipleData = false;
    this->PinStatus = EPCGPinStatus::Normal;
    this->bInvisiblePin = false;
    this->bAllowMultipleConnections = false;
}

