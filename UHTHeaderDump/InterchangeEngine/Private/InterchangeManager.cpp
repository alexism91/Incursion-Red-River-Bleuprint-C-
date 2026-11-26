#include "InterchangeManager.h"

UInterchangeManager::UInterchangeManager() {
}

bool UInterchangeManager::WarnIfInterchangeIsActive() {
    return false;
}

void UInterchangeManager::WaitUntilAllTasksDone(bool bCancel) {
}

bool UInterchangeManager::ScriptedReimportAssetAsync(UObject* ObjectToReimport, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

bool UInterchangeManager::ScriptedImportSceneAsync(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

bool UInterchangeManager::ScriptedImportAssetAsync(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

bool UInterchangeManager::ReimportAsset(UObject* ObjectToReimport, const FImportAssetParameters& ImportAssetParameters, TArray<UObject*>& OutImportedObjects) {
    return false;
}

bool UInterchangeManager::IsObjectBeingImported(UObject* Object) const {
    return false;
}

bool UInterchangeManager::IsInterchangeActive() {
    return false;
}

bool UInterchangeManager::ImportScene(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

bool UInterchangeManager::ImportAsset(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters, TArray<UObject*>& OutImportedObjects) {
    return false;
}

UInterchangeTranslatorBase* UInterchangeManager::GetTranslatorForSourceData(const UInterchangeSourceData* SourceData) const {
    return NULL;
}

TArray<FString> UInterchangeManager::GetSupportedFormatsForObject(const UObject* Object, int32 SourceFileIndex) const {
    return TArray<FString>();
}

TArray<FString> UInterchangeManager::GetSupportedFormats(const EInterchangeTranslatorType ForTranslatorType) const {
    return TArray<FString>();
}

TArray<FString> UInterchangeManager::GetSupportedAssetTypeFormats(const EInterchangeTranslatorAssetType ForTranslatorAssetType, const EInterchangeTranslatorType ForTranslatorType, bool bStrictMatchTranslatorType) const {
    return TArray<FString>();
}

UClass* UInterchangeManager::GetRegisteredFactoryClass(const UClass* ClassToMake) const {
    return NULL;
}

UInterchangeManager* UInterchangeManager::GetInterchangeManagerScripted() {
    return NULL;
}

UInterchangeAssetImportData* UInterchangeManager::GetAssetImportData(UObject* Asset) const {
    return NULL;
}

bool UInterchangeManager::ExportScene(const UObject* World, bool bIsAutomated) {
    return false;
}

bool UInterchangeManager::ExportAsset(const UObject* Asset, bool bIsAutomated) {
    return false;
}

UInterchangeSourceData* UInterchangeManager::CreateSourceData(const FString& InFilename) {
    return NULL;
}

bool UInterchangeManager::CanTranslateSourceData(const UInterchangeSourceData* SourceData, bool bSceneImportOnly) const {
    return false;
}

bool UInterchangeManager::CanReimport(const UObject* Object, TArray<FString>& OutFilenames) const {
    return false;
}

void UInterchangeManager::CancelAllTasks() {
}


