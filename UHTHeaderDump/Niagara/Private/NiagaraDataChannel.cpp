#include "NiagaraDataChannel.h"

UNiagaraDataChannel::UNiagaraDataChannel() {
    this->bKeepPreviousFrameData = true;
    this->bEnforceTickGroupReadWriteOrder = false;
    this->FinalWriteTickGroup = TG_EndPhysics;
}


