#include "UsdAssetCache3.h"

UUsdAssetCache3::UUsdAssetCache3() {
    this->bOnlyHandleAssetsWithinAssetDirectory = false;
    this->bCleanUpUnreferencedAssets = false;
}

FSoftObjectPath UUsdAssetCache3::StopTrackingAsset(const FString& Hash) {
    return FSoftObjectPath{};
}

void UUsdAssetCache3::SetAssetDeletable(const UObject* Asset, bool bIsDeletable) {
}

void UUsdAssetCache3::RescanAssetDirectory() {
}

bool UUsdAssetCache3::RemoveAssetReferencer(const UObject* Asset, const UObject* Referencer) {
    return false;
}

bool UUsdAssetCache3::RemoveAllReferencersForAsset(const UObject* Asset) {
    return false;
}

bool UUsdAssetCache3::RemoveAllReferencerAssets(const UObject* Referencer) {
    return false;
}

bool UUsdAssetCache3::RemoveAllAssetReferencers() {
    return false;
}

TMap<FString, UObject*> UUsdAssetCache3::LoadAndGetAllTrackedAssets() const {
    return TMap<FString, UObject*>();
}

bool UUsdAssetCache3::IsAssetTrackedByCache(const FSoftObjectPath& AssetPath) const {
    return false;
}

bool UUsdAssetCache3::IsAssetDeletable(const UObject* Asset) const {
    return false;
}

UObject* UUsdAssetCache3::GetOrCreateCachedAsset(const FString& Hash, UClass* Class, const FString& DesiredName, int32 DesiredFlags, bool& bOutCreatedAsset, const UObject* Referencer) {
    return NULL;
}

int32 UUsdAssetCache3::GetNumAssets() const {
    return 0;
}

FString UUsdAssetCache3::GetHashForAsset(const FSoftObjectPath& AssetPath) const {
    return TEXT("");
}

FSoftObjectPath UUsdAssetCache3::GetCachedAssetPath(const FString& Hash) const {
    return FSoftObjectPath{};
}

UObject* UUsdAssetCache3::GetCachedAsset(const FString& Hash) const {
    return NULL;
}

TMap<FString, FSoftObjectPath> UUsdAssetCache3::GetAllTrackedAssets() const {
    return TMap<FString, FSoftObjectPath>();
}

void UUsdAssetCache3::DeleteUnreferencedAssetsWithConfirmation() {
}

void UUsdAssetCache3::DeleteUnreferencedAssets(const bool bShowConfirmation) {
}

void UUsdAssetCache3::CacheAsset(const FString& Hash, const FSoftObjectPath& AssetPath, const UObject* Referencer) {
}

bool UUsdAssetCache3::AddAssetReferencer(const UObject* Asset, const UObject* Referencer) {
    return false;
}


