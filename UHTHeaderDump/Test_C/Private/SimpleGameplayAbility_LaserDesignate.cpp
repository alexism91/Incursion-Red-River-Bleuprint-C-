#include "SimpleGameplayAbility_LaserDesignate.h"

USimpleGameplayAbility_LaserDesignate::USimpleGameplayAbility_LaserDesignate() {
    this->HandlerVoice = NULL;
    this->ReportInterval = 0.05f;
}

void USimpleGameplayAbility_LaserDesignate::PushLaseReport() {
}

ULaserComponent* USimpleGameplayAbility_LaserDesignate::FindDesignator() const {
    return NULL;
}


