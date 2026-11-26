#include "NiagaraRendererReadbackParameters.h"

FNiagaraRendererReadbackParameters::FNiagaraRendererReadbackParameters() {
    this->bExportPosition = false;
    this->bExportTangentBasis = false;
    this->bExportColor = false;
    this->ExportNumTexCoords = 0;
    this->bExportMaterials = false;
    this->bApplyWPO = false;
}

