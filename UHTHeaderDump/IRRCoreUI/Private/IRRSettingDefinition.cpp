#include "IRRSettingDefinition.h"

FIRRSettingDefinition::FIRRSettingDefinition() {
    this->Type = EIRRSettingType::Switcher;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->DefaultNumber = 0.00f;
    this->FractionalDigits = 0;
    this->bSaved = false;
    this->bIncludeInReset = false;
    this->Restart = EIRRSettingRestart::Never;
    this->RowWidgetClass = NULL;
    this->Handler = NULL;
}

