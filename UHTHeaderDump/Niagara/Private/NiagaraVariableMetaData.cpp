#include "NiagaraVariableMetaData.h"

FNiagaraVariableMetaData::FNiagaraVariableMetaData() {
    this->DisplayUnit = EUnit::Micrometers;
    this->bAdvancedDisplay = false;
    this->bDisplayInOverviewStack = false;
    this->InlineParameterSortPriority = 0;
    this->bOverrideColor = false;
    this->bEnableBoolOverride = false;
    this->bInlineEditConditionToggle = false;
    this->bIsStaticSwitch = false;
    this->StaticSwitchDefaultValue = 0;
    this->EditorSortPriority = 0;
}

