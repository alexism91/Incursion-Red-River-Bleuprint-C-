#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "InterchangeContentImportSettings.h"
#include "InterchangeGroup.h"
#include "InterchangeSceneImportSettings.h"
#include "InterchangeProjectSettings.generated.h"

class UInterchangeFilePickerBase;
class UInterchangePipelineBase;

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UInterchangeProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterchangeContentImportSettings ContentImportSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterchangeSceneImportSettings SceneImportSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangeFilePickerBase> FilePickerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangePipelineBase> GenericPipelineClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ConverterDefaultPipeline;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangeGroup> InterchangeGroups;
    
    UInterchangeProjectSettings();

};

