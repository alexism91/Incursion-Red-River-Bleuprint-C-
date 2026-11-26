#include "LandscapePatchManager.h"

ALandscapePatchManager::ALandscapePatchManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALandscapePatchManager::SetTargetLandscape(ALandscape* InOwningLandscape) {
}

bool ALandscapePatchManager::RemovePatch(ULandscapePatchComponent* Patch) {
    return false;
}

void ALandscapePatchManager::MovePatchToIndex(ULandscapePatchComponent* Patch, int32 Index) {
}

int32 ALandscapePatchManager::GetIndexOfPatch(const ULandscapePatchComponent* Patch) const {
    return 0;
}

bool ALandscapePatchManager::ContainsPatch(ULandscapePatchComponent* Patch) const {
    return false;
}

void ALandscapePatchManager::AddPatch(ULandscapePatchComponent* Patch) {
}


