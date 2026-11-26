#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "LocalFogVolume.generated.h"

class ULocalFogVolumeComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ALocalFogVolume : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalFogVolumeComponent* LocalFogVolumeVolume;
    
public:
    ALocalFogVolume(const FObjectInitializer& ObjectInitializer);

};

