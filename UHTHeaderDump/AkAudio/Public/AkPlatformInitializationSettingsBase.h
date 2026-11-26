#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkPlatformInitializationSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API UAkPlatformInitializationSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UAkPlatformInitializationSettingsBase();

};

