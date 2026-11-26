#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GroomPluginSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UGroomPluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroomCacheLookAheadBuffer;
    
    UGroomPluginSettings();

};

