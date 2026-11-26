#include "UserInterfaceSettings.h"

UUserInterfaceSettings::UUserInterfaceSettings() {
    this->RenderFocusRule = ERenderFocusRule::NavigationOnly;
    this->ApplicationScale = 1.00f;
    this->UIScaleRule = EUIScalingRule::ShortestSide;
    this->bAllowHighDPIInGameMode = false;
    this->bLoadWidgetsOnDedicatedServer = true;
    this->bAuthorizeAutomaticWidgetVariableCreation = true;
    this->bEnableDistanceFieldFontRasterization = false;
    this->CustomScalingRuleClassInstance = NULL;
    this->CustomScalingRule = NULL;
}

bool UUserInterfaceSettings::ShouldDisplayDistanceFieldFontSettings() {
    return false;
}


