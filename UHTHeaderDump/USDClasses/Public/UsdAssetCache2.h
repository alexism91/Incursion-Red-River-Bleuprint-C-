#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UsdAssetCache2.generated.h"

UCLASS(Blueprintable)
class USDCLASSES_API UUsdAssetCache2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double UnreferencedAssetStorageSizeMB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PersistentAssetStorageSizeMB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> AssetStorage;
    
public:
    UUsdAssetCache2();

    UFUNCTION(BlueprintCallable)
    bool TouchAsset(const UObject* Asset, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAssetReference(const UObject* Asset, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    UObject* RemoveAsset(const FString& Hash);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllAssetReferences(const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    void RefreshStorage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssetOwnedByCache(const FString& AssetPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHashForAsset(const UObject* Asset) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetCachedAsset(const FString& Hash);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetAllLoadedAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllCachedAssetPaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllAssetHashes() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanRemoveAsset(const FString& Hash);
    
    UFUNCTION(BlueprintCallable)
    void CacheAsset(const FString& Hash, UObject* Asset, const UObject* Referencer);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetReference(const UObject* Asset, const UObject* Referencer);
    
};

