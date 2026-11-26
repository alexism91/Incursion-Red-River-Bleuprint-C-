#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=TransformHandle -FallbackName=TransformHandle
#include "ParticleSystemDynamicState.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FParticleSystemDynamicState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformHandle Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* SystemAsset;
    
public:
    ENGINE_API FParticleSystemDynamicState();
};

