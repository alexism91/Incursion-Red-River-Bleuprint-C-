#include "MetaHumanCharacterInstance.h"

UMetaHumanCharacterInstance::UMetaHumanCharacterInstance() {
    this->OverridePipelineInstance = NULL;
    this->Collection = NULL;
}

void UMetaHumanCharacterInstance::UnregisterOnInstanceUpdated(UObject* Object) {
}

void UMetaHumanCharacterInstance::SetMetaHumanCollection(UMetaHumanCollection* InCollection) {
}

void UMetaHumanCharacterInstance::RegisterOnInstanceUpdated(const FMetaHumanCharacterInstanceUpdated_Unicast& Delegate) {
}

UMetaHumanCollection* UMetaHumanCharacterInstance::GetMetaHumanCollection() const {
    return NULL;
}

FInstancedStruct UMetaHumanCharacterInstance::GetAssemblyOutput() const {
    return FInstancedStruct{};
}

void UMetaHumanCharacterInstance::ClearAssemblyOutput() {
}

void UMetaHumanCharacterInstance::Assemble(EMetaHumanCharacterPaletteBuildQuality Quality, const FMetaHumanCharacterAssembled& OnAssembled) {
}


