#pragma once
#include "CoreMinimal.h"
#include "PCGDataFromActorSettings.h"
#include "PCGLandscapeDataProps.h"
#include "PCGGetLandscapeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGLandscapeDataProps SamplingProperties;
    
    UPCGGetLandscapeSettings();

};

