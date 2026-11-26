#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Templates/SubclassOf.h"
#include "Interface_AssetUserData.generated.h"

class UAssetUserData;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UInterface_AssetUserData : public UInterface {
    GENERATED_BODY()
};

class IInterface_AssetUserData : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

