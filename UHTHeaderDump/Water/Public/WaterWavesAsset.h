#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaterWavesAsset.generated.h"

class UWaterWaves;

UCLASS(Blueprintable, MinimalAPI)
class UWaterWavesAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterWaves* WaterWaves;
    
public:
    UWaterWavesAsset();

};

