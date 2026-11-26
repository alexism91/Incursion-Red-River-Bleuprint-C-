#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "Interface_PreviewMeshProvider.h"
#include "Templates/SubclassOf.h"
#include "AnimationAsset.generated.h"

class UAnimMetaData;
class UAssetUserData;
class USkeleton;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAnimationAsset : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAnimMetaData*> MetaData;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UAnimationAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMetaData* FindMetaDataByClass(const TSubclassOf<UAnimMetaData> MetaDataClass) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

