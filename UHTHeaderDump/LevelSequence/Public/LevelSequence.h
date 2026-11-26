#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "Templates/SubclassOf.h"
#include "UpgradedLevelSequenceBindingReferences.h"
#include "LevelSequence.generated.h"

class UAssetUserData;
class UMovieScene;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class ULevelSequence : public UMovieSceneSequence, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradedLevelSequenceBindingReferences BindingReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DirectorClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    ULevelSequence();

    UFUNCTION(BlueprintCallable)
    void RemoveMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindOrAddMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* FindMetaDataByClass(UClass* InClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* CopyMetaData(UObject* InMetaData);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

