#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EMetaHumanQualityLevel -FallbackName=EMetaHumanQualityLevel
#include "MetaHumanCharacterPaletteProjectSettings.generated.h"

class UMetaHumanCollectionPipeline;

UCLASS(Blueprintable, DefaultConfig, Config=MetaHumanCharacter)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterPaletteProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMetaHumanCollectionPipeline> DefaultCharacterPipelineClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<EMetaHumanQualityLevel, TSoftClassPtr<UMetaHumanCollectionPipeline>> DefaultCharacterLegacyPipelines;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<EMetaHumanQualityLevel, TSoftClassPtr<UMetaHumanCollectionPipeline>> DefaultCharacterUEFNPipelines;
    
    UMetaHumanCharacterPaletteProjectSettings();

};

