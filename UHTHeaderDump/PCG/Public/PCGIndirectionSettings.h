#pragma once
#include "CoreMinimal.h"
#include "EPCGProxyInterfaceMode.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGIndirectionSettings.generated.h"

class UPCGBlueprintElement;

UCLASS(Blueprintable, MinimalAPI)
class UPCGIndirectionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGProxyInterfaceMode ProxyInterfaceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGSettings> SettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGBlueprintElement> BlueprintElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTagOutputsBasedOnOutputPins;
    
    UPCGIndirectionSettings();

};

