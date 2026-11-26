#include "NiagaraDataInterfaceGeometryCollection.h"

UNiagaraDataInterfaceGeometryCollection::UNiagaraDataInterfaceGeometryCollection() {
    this->SourceMode = ENDIGeometryCollection_SourceMode::Default;
    this->DefaultGeometryCollection = NULL;
    this->SourceComponent = NULL;
    this->bIncludeIntermediateBones = false;
}


