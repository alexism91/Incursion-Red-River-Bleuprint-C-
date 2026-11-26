#include "IRRSettingCondition_SettingValue.h"

UIRRSettingCondition_SettingValue::UIRRSettingCondition_SettingValue() {
    this->MatchMin = 0.00f;
    this->MatchMax = 0.00f;
    this->When = EIRRSettingConditionWhen::Matches;
    this->Effect = EIRRSettingConditionEffect::Hide;
    this->ForcedNumber = 0.00f;
}


