#include "GeneralSettings.h"

UGeneralSettings::UGeneralSettings() {
    this->Build = TEXT("#1.4.0.4");
    this->DoubleTabDelay = 0.25f;
    this->SettingsSaveGameName = TEXT("GameSettingsSaveGame");
    this->MagSocket = TEXT("Socket_Mag");
    this->ProjectileSocket = TEXT("Socket_Projectile");
    this->StockSocket = TEXT("Socket_Stock");
    this->MuzzleSocket = TEXT("Socket_Muzzle");
    this->SightSocket = TEXT("Socket_Sight");
    this->BarrelSocket = TEXT("Socket_Barrel");
    this->HandguardSocket = TEXT("Socket_Handguard");
    this->PistolGrip = TEXT("Socket_PistolGrip");
    this->Foregrip = TEXT("Socket_Foregrip");
    this->BotSenseReceiverBone = TEXT("Camera");
    this->PlayerSenseReceiverBone = TEXT("Camera");
    this->CalibrationPoseSettleTime = 1.00f;
    this->CalibrationLeanMagnitude = 1.00f;
}


