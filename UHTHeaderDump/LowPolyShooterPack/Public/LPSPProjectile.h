#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LPSPProjectile.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPProjectile : public AActor {
    GENERATED_BODY()
public:
    ALPSPProjectile(const FObjectInitializer& ObjectInitializer);

};

