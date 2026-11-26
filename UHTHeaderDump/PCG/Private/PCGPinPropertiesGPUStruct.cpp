#include "PCGPinPropertiesGPUStruct.h"

FPCGPinPropertiesGPUStruct::FPCGPinPropertiesGPUStruct() {
    this->InitializationMode = EPCGPinInitMode::FromInputPins;
    this->DataCountMode = EPCGDataCountMode::FromInputData;
    this->DataMultiplicity = EPCGDataMultiplicity::Pairwise;
    this->DataCount = 0;
    this->ElementCountMode = EPCGElementCountMode::FromInputData;
    this->ElementMultiplicity = EPCGElementMultiplicity::Product;
    this->ElementCount = 0;
    this->ElementCountMultiplier = 0;
    this->AttributeInheritanceMode = EPCGAttributeInheritanceMode::None;
}

