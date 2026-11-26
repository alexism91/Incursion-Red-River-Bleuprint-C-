#include "WeaponLegacyDataRenamedAsset.h"

UWeaponLegacyDataRenamedAsset::UWeaponLegacyDataRenamedAsset() {
    this->DT_Muzzle = NULL;
    this->DT_Grip = NULL;
}

FQUA_AnimSet UWeaponLegacyDataRenamedAsset::GetAnimSetByType(EQUA_WeaponMontageType MontageType, FName Identifier) {
    return FQUA_AnimSet{};
}


