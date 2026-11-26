#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorSettings -FallbackName=InterchangeTranslatorSettings
#include "InterchangeFbxTranslatorSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFrontXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertSceneUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepFbxNamespace;
    
    UInterchangeFbxTranslatorSettings();

};

