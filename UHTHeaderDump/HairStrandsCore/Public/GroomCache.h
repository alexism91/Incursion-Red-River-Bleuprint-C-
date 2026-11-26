#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosCaching -ObjectName=ChaosCacheData -FallbackName=ChaosCacheData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "GroomCacheInfo.h"
#include "Templates/SubclassOf.h"
#include "GroomCache.generated.h"

class UAssetUserData;

UCLASS(Blueprintable, MinimalAPI)
class UGroomCache : public UObject, public IInterface_AssetUserData, public IChaosCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomCacheInfo GroomCacheInfo;
    
public:
    UGroomCache();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

