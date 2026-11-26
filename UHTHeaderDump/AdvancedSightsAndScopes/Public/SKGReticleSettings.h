#pragma once
#include "CoreMinimal.h"
#include "SKGReticleMaterial.h"
#include "SKGReticleSettings.generated.h"

USTRUCT(BlueprintType)
struct FSKGReticleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReticleMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSKGReticleMaterial> ReticleMaterials;
    
    ADVANCEDSIGHTSANDSCOPES_API FSKGReticleSettings();
};

