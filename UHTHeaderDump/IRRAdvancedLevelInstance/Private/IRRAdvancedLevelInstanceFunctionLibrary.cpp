#include "IRRAdvancedLevelInstanceFunctionLibrary.h"

UIRRAdvancedLevelInstanceFunctionLibrary::UIRRAdvancedLevelInstanceFunctionLibrary() {
}

bool UIRRAdvancedLevelInstanceFunctionLibrary::ReplaceLevelInstanceWithAdvancedLevelInstance(ALevelInstance* OldLI) {
    return false;
}

void UIRRAdvancedLevelInstanceFunctionLibrary::ReplaceAllLevelInstancesWithAdvancedLevelInstances(UObject* WorldContextObject) {
}

void UIRRAdvancedLevelInstanceFunctionLibrary::RemoveDuplicateLevelInstances(UObject* WorldContextObject) {
}

TMap<float, FIRRLevelInstanceMaterialParams> UIRRAdvancedLevelInstanceFunctionLibrary::GetMaterialParamsForLevelInstance() {
    return TMap<float, FIRRLevelInstanceMaterialParams>();
}

void UIRRAdvancedLevelInstanceFunctionLibrary::ConvertStaticMeshActorsToInstancedFoliage(UObject* WorldContextObject, const TArray<AActor*>& ActorsToConvert, bool bDestroyOriginals, float MaxWorldPositionOffsetDistance) {
}

AActor* UIRRAdvancedLevelInstanceFunctionLibrary::ConvertStaticMeshActorsToHISMs(UObject* WorldContextObject, const TArray<AActor*>& ActorsToConvert, AActor* ContainerActor, bool bDestroyOriginals, bool bCopyCollision, bool bCopyLighting, bool bCopyTags, float MaxWorldPositionOffsetDistance) {
    return NULL;
}


