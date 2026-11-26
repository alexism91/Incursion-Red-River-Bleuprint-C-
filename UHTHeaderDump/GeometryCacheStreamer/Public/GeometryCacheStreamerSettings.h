#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GeometryCacheStreamerSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class GEOMETRYCACHESTREAMER_API UGeometryCacheStreamerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadBuffer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMemoryAllowed;
    
    UGeometryCacheStreamerSettings();

};

