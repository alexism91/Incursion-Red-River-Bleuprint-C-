#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "Templates/SubclassOf.h"
#include "InterchangeSceneImportAsset.generated.h"

class UAssetUserData;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSceneImportAsset : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UInterchangeSceneImportAsset();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

