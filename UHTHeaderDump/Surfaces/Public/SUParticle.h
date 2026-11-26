#pragma once
#include "CoreMinimal.h"
#include "SUSettings.h"
#include "SUParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SURFACES_API FSUParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUSettings Settings;
    
    FSUParticle();
};

