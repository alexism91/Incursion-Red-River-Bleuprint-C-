#include "CompositeCorePluginSettings.h"

UCompositeCorePluginSettings::UCompositeCorePluginSettings() {
    this->bApplyPreExposure = false;
    this->bApplyFXAA = false;
    this->DisabledPrimitiveClasses.AddDefaulted(5);
    this->AllowedComponentClasses.AddDefaulted(1);
    this->SceneViewExtensionPriority = 101;
}


