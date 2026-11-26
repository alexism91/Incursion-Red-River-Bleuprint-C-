#include "GrenadeActor_Explosive.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialForceComponent -FallbackName=RadialForceComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AGrenadeActor_Explosive::AGrenadeActor_Explosive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSettleAfterDetonate = false;
    this->ExplosionDamage = 0.00f;
    this->ExplosionDamageType = NULL;
    this->ShrapnelDamage = 0.00f;
    this->ShrapnelDamageType = NULL;
    this->DamageFalloffCurve = NULL;
    this->ExplosionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionSphere"));
    this->RadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
    this->ExplosionSphere->SetupAttachment(RootComponent);
    this->RadialForce->SetupAttachment(RootComponent);
}


