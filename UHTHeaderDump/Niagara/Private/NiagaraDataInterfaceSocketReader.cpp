#include "NiagaraDataInterfaceSocketReader.h"

UNiagaraDataInterfaceSocketReader::UNiagaraDataInterfaceSocketReader() {
    this->SourceMode = ENDISocketReaderSourceMode::Default;
    this->SourceAsset = NULL;
    this->AttachComponentClass = NULL;
    this->bUpdateSocketsPerFrame = true;
    this->bRequireCurrentFrameData = true;
}


