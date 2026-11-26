#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UsdAssetCache3.generated.h"

UCLASS(Blueprintable)
class USDCLASSES_API UUsdAssetCache3 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath AssetDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyHandleAssetsWithinAssetDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> HashToAssetPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleanUpUnreferencedAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FString> AssetPathToHashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> TransientObjectStorage;
    
public:
    UUsdAssetCache3();

    UFUNCTION(BlueprintCallable)
    FSoftObjectPath StopTrackingAsset(const FString& Hash);
    
    UFUNCTION(BlueprintCallable)
    void SetAssetDeletable(const UObject* Asset, bool bIsDeletable);
    
    UFUNCTION(BlueprintCallable)
    void RescanAssetDirectory();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAssetReferencer(const UObject* Asset, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllReferencersForAsset(const UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllReferencerAssets(const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllAssetReferencers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UObject*> LoadAndGetAllTrackedAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssetTrackedByCache(const FSoftObjectPath& AssetPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssetDeletable(const UObject* Asset) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetOrCreateCachedAsset(const FString& Hash, UClass* Class, const FString& DesiredName, int32 DesiredFlags, bool& bOutCreatedAsset, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHashForAsset(const FSoftObjectPath& AssetPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCachedAssetPath(const FString& Hash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetCachedAsset(const FString& Hash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FSoftObjectPath> GetAllTrackedAssets() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteUnreferencedAssetsWithConfirmation();
    
    UFUNCTION(BlueprintCallable)
    void DeleteUnreferencedAssets(const bool bShowConfirmation);
    
    UFUNCTION(BlueprintCallable)
    void CacheAsset(const FString& Hash, const FSoftObjectPath& AssetPath, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetReferencer(const UObject* Asset, const UObject* Referencer);
    
};

