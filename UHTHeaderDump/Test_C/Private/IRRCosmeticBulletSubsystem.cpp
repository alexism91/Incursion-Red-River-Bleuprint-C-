#include "IRRCosmeticBulletSubsystem.h"

UIRRCosmeticBulletSubsystem::UIRRCosmeticBulletSubsystem() {
    this->TracerDataChannel = NULL;
}

bool UIRRCosmeticBulletSubsystem::IsSystemEnabled() const {
    return false;
}

int32 UIRRCosmeticBulletSubsystem::GetLiveBulletCount() const {
    return 0;
}


