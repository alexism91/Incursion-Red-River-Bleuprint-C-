#include "GameplayCueNotify_SpawnCondition.h"

FGameplayCueNotify_SpawnCondition::FGameplayCueNotify_SpawnCondition() {
    this->LocallyControlledSource = EGameplayCueNotify_LocallyControlledSource::InstigatorActor;
    this->LocallyControlledPolicy = EGameplayCueNotify_LocallyControlledPolicy::Always;
    this->ChanceToPlay = 0.00f;
}

