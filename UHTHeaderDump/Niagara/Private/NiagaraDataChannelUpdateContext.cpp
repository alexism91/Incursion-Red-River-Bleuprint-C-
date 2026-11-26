#include "NiagaraDataChannelUpdateContext.h"

FNiagaraDataChannelUpdateContext::FNiagaraDataChannelUpdateContext() {
    this->Reader = NULL;
    this->FirstNewDataIndex = 0;
    this->LastNewDataIndex = 0;
    this->NewElementCount = 0;
}

