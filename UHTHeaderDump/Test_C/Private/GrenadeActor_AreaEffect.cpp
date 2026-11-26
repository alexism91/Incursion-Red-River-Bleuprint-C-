#include "GrenadeActor_AreaEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "IRRZoneEffectSourceComponent.h"

AGrenadeActor_AreaEffect::AGrenadeActor_AreaEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaEffectDuration = 20.00f;
    this->bScaleEffectVolumeRadius = true;
    this->bScaleActorRoot = false;
    this->AIAvoidance = EIRRAreaEffectAIAvoidance::None;
    this->AreaEffectAkStartEvent = NULL;
    this->AreaEffectEndEvent = NULL;
    this->AreaEffectLifetimeRtpc = NULL;
    this->EffectVolume = CreateDefaultSubobject<USphereComponent>(TEXT("EffectVolume"));
    this->ZoneEffectSource = CreateDefaultSubobject<UIRRZoneEffectSourceComponent>(TEXT("ZoneEffectSource"));
    this->EffectVolume->SetupAttachment(RootComponent);
}

UNiagaraComponent* AGrenadeActor_AreaEffect::SpawnAreaEffectFX(UNiagaraSystem* System) {
    return NULL;
}

void AGrenadeActor_AreaEffect::OnEffectVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGrenadeActor_AreaEffect::OnEffectVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




float AGrenadeActor_AreaEffect::GetNormalizedAreaEffectLifetime() const {
    return 0.0f;
}

float AGrenadeActor_AreaEffect::GetLifetimeScaleFactor(float NormalizedLifetime) const {
    return 0.0f;
}

UNiagaraComponent* AGrenadeActor_AreaEffect::GetAreaEffectFX() const {
    return NULL;
}


