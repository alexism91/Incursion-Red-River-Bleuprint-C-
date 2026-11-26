#include "CreateComponentResult.h"

FCreateComponentResult::FCreateComponentResult() {
    this->ResultCode = ECreateModelingObjectResult::Ok;
    this->NewComponent = NULL;
}

