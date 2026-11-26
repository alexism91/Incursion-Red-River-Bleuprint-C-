#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInterchangeTranslatorAssetType.h"
#include "EInterchangeTranslatorType.h"
#include "InterchangeTranslatorBase.generated.h"

class UInterchangeResultsContainer;
class UInterchangeSourceData;
class UInterchangeTranslatorSettings;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeTranslatorBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeSourceData* SourceData;
    
    UInterchangeTranslatorBase();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const UInterchangeTranslatorSettings* InterchangeTranslatorSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInterchangeTranslatorType GetTranslatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSupportedFormats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInterchangeTranslatorAssetType GetSupportedAssetTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeSourceData* GetSourceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeTranslatorSettings* GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanImportSourceData(const UInterchangeSourceData* InSourceData) const;
    
};

