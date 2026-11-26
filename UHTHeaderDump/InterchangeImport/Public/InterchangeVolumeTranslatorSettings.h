#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorSettings -FallbackName=InterchangeTranslatorSettings
#include "InterchangeVolumeTranslatorSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeVolumeTranslatorSettings : public UInterchangeTranslatorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTranslateAdjacentNumberedFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationID;
    
    UInterchangeVolumeTranslatorSettings();

};

