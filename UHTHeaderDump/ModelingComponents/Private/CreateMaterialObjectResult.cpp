#include "CreateMaterialObjectResult.h"

FCreateMaterialObjectResult::FCreateMaterialObjectResult() {
    this->ResultCode = ECreateModelingObjectResult::Ok;
    this->NewAsset = NULL;
}

