#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ETextureImportPNGInfill.h"
#include "TextureImportUserSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class UTextureImportUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureImportPNGInfill PNGInfill;
    
    UTextureImportUserSettings();

};

