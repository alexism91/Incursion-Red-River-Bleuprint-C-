#include "NiagaraDataInterfaceDataChannelRead.h"

UNiagaraDataInterfaceDataChannelRead::UNiagaraDataInterfaceDataChannelRead() {
    this->Channel = NULL;
    this->bReadCurrentFrame = false;
    this->bUpdateSourceDataEveryTick = true;
    this->bOverrideSpawnGroupToDataChannelIndex = false;
    this->bOnlySpawnOnceOnSubticks = true;
}


