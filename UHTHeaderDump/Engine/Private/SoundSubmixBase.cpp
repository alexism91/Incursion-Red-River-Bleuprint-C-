#include "SoundSubmixBase.h"

USoundSubmixBase::USoundSubmixBase() {
    this->bAutoDisable = true;
    this->AutoDisableTime = 0.01f;
}

USoundSubmixBase* USoundSubmixBase::FindDynamicAncestor() {
    return NULL;
}

bool USoundSubmixBase::DynamicDisconnect(const UObject* WorldContextObject) {
    return false;
}

bool USoundSubmixBase::DynamicConnect(const UObject* WorldContextObject, USoundSubmixBase* InParent) {
    return false;
}


