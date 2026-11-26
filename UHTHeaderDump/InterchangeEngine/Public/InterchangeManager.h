#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorAssetType -FallbackName=EInterchangeTranslatorAssetType
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorType -FallbackName=EInterchangeTranslatorType
#include "ImportAssetParameters.h"
#include "InterchangeManager.generated.h"

class UInterchangeAssetImportData;
class UInterchangeAssetImportDataConverterBase;
class UInterchangeManager;
class UInterchangeSourceData;
class UInterchangeTranslatorBase;
class UInterchangeWriterBase;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInterchangeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UClass*> RegisteredTranslatorsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UClass*> RegisteredFactoryClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UInterchangeWriterBase*> RegisteredWriters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UInterchangeAssetImportDataConverterBase*> RegisteredConverters;
    
public:
    UInterchangeManager();

    UFUNCTION(BlueprintCallable)
    bool WarnIfInterchangeIsActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void WaitUntilAllTasksDone(bool bCancel);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ScriptedReimportAssetAsync(UObject* ObjectToReimport, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable)
    bool ScriptedImportSceneAsync(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable)
    bool ScriptedImportAssetAsync(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable)
    bool ReimportAsset(UObject* ObjectToReimport, const FImportAssetParameters& ImportAssetParameters, TArray<UObject*>& OutImportedObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectBeingImported(UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInterchangeActive();
    
    UFUNCTION(BlueprintCallable)
    bool ImportScene(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable)
    bool ImportAsset(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters, TArray<UObject*>& OutImportedObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeTranslatorBase* GetTranslatorForSourceData(const UInterchangeSourceData* SourceData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSupportedFormatsForObject(const UObject* Object, int32 SourceFileIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSupportedFormats(const EInterchangeTranslatorType ForTranslatorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSupportedAssetTypeFormats(const EInterchangeTranslatorAssetType ForTranslatorAssetType, const EInterchangeTranslatorType ForTranslatorType, bool bStrictMatchTranslatorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetRegisteredFactoryClass(const UClass* ClassToMake) const;
    
    UFUNCTION(BlueprintCallable)
    static UInterchangeManager* GetInterchangeManagerScripted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeAssetImportData* GetAssetImportData(UObject* Asset) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExportScene(const UObject* World, bool bIsAutomated);
    
    UFUNCTION(BlueprintCallable)
    bool ExportAsset(const UObject* Asset, bool bIsAutomated);
    
    UFUNCTION(BlueprintCallable)
    static UInterchangeSourceData* CreateSourceData(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTranslateSourceData(const UInterchangeSourceData* SourceData, bool bSceneImportOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReimport(const UObject* Object, TArray<FString>& OutFilenames) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelAllTasks();
    
};

