#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CharacterMadeFootstepSoundDelegate.generated.h"

class UNiagaraSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCharacterMadeFootstepSound, FHitResult, HitEvent, float, VolumeMulti, FName, Surface, UNiagaraSystem*, Particle, FName, Key);

