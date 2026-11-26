#include "GameplayAbilityRepAnimMontage.h"

FGameplayAbilityRepAnimMontage::FGameplayAbilityRepAnimMontage() {
    this->Animation = NULL;
    this->PlayRate = 0.00f;
    this->Position = 0.00f;
    this->BlendTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayCount = 0.00f;
    this->NextSectionID = 0;
    this->PlayInstanceId = 0;
    this->bRepPosition = false;
    this->IsStopped = false;
    this->SkipPositionCorrection = false;
    this->bSkipPlayRate = false;
    this->SectionIdToPlay = 0;
}

