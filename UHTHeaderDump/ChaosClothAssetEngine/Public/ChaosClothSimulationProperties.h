#pragma once
#include "CoreMinimal.h"
#include "ChaosClothSimulationProperties.generated.h"

class UChaosClothAssetInteractor;

USTRUCT(BlueprintType)
struct FChaosClothSimulationProperties {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChaosClothAssetInteractor* ClothOutfitInteractor;
    
public:
    CHAOSCLOTHASSETENGINE_API FChaosClothSimulationProperties();
};

