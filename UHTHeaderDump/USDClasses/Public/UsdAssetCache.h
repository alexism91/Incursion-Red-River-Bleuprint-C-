#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UsdAssetCache.generated.h"

UCLASS(Blueprintable)
class USDCLASSES_API UUsdAssetCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> TransientStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> PersistentStorage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPersistentStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UObject>> OwnedAssets;
    
    UPROPERTY(EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UObject>> PrimPathToAssets;
    
public:
    UUsdAssetCache();

};

