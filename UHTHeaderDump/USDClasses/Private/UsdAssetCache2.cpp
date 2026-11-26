#include "UsdAssetCache2.h"

UUsdAssetCache2::UUsdAssetCache2() {
    this->UnreferencedAssetStorageSizeMB = 500.00f;
    this->PersistentAssetStorageSizeMB = 500.00f;
}

bool UUsdAssetCache2::TouchAsset(const UObject* Asset, const UObject* Referencer) {
    return false;
}

void UUsdAssetCache2::Reset() {
}

bool UUsdAssetCache2::RemoveAssetReference(const UObject* Asset, const UObject* Referencer) {
    return false;
}

UObject* UUsdAssetCache2::RemoveAsset(const FString& Hash) {
    return NULL;
}

bool UUsdAssetCache2::RemoveAllAssetReferences(const UObject* Referencer) {
    return false;
}

void UUsdAssetCache2::RefreshStorage() {
}

bool UUsdAssetCache2::IsAssetOwnedByCache(const FString& AssetPath) const {
    return false;
}

int32 UUsdAssetCache2::GetNumAssets() const {
    return 0;
}

FString UUsdAssetCache2::GetHashForAsset(const UObject* Asset) const {
    return TEXT("");
}

UObject* UUsdAssetCache2::GetCachedAsset(const FString& Hash) {
    return NULL;
}

TArray<UObject*> UUsdAssetCache2::GetAllLoadedAssets() const {
    return TArray<UObject*>();
}

TArray<FString> UUsdAssetCache2::GetAllCachedAssetPaths() const {
    return TArray<FString>();
}

TArray<FString> UUsdAssetCache2::GetAllAssetHashes() const {
    return TArray<FString>();
}

bool UUsdAssetCache2::CanRemoveAsset(const FString& Hash) {
    return false;
}

void UUsdAssetCache2::CacheAsset(const FString& Hash, UObject* Asset, const UObject* Referencer) {
}

bool UUsdAssetCache2::AddAssetReference(const UObject* Asset, const UObject* Referencer) {
    return false;
}


