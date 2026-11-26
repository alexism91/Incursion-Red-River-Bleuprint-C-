#include "EnhancedActionKeyMapping.h"

FEnhancedActionKeyMapping::FEnhancedActionKeyMapping() {
    this->Action = NULL;
    this->bShouldBeIgnored = false;
    this->bHasAlwaysTickTrigger = false;
    this->SettingBehavior = EPlayerMappableKeySettingBehaviors::InheritSettingsFromAction;
    this->PlayerMappableKeySettings = NULL;
}

