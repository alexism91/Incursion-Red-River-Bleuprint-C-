#pragma once
#include "CoreMinimal.h"
#include "SUDecal.h"
#include "SUParticle.h"
#include "SUDetails.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct SURFACES_API FSUDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUDecal Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSUParticle> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    FSUDetails();
};

