#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCommon -ObjectName=EInterchangeMaterialXBSDF -FallbackName=EInterchangeMaterialXBSDF
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCommon -ObjectName=EInterchangeMaterialXEDF -FallbackName=EInterchangeMaterialXEDF
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCommon -ObjectName=EInterchangeMaterialXShaders -FallbackName=EInterchangeMaterialXShaders
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCommon -ObjectName=EInterchangeMaterialXVDF -FallbackName=EInterchangeMaterialXVDF
#include "MaterialXPipelineSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Interchange)
class UMaterialXPipelineSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeMaterialXShaders, FSoftObjectPath> PredefinedSurfaceShaders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeMaterialXBSDF, FSoftObjectPath> PredefinedBSDF;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeMaterialXEDF, FSoftObjectPath> PredefinedEDF;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeMaterialXVDF, FSoftObjectPath> PredefinedVDF;
    
    UMaterialXPipelineSettings();

};

