#include "CreateActorResult.h"

FCreateActorResult::FCreateActorResult() {
    this->ResultCode = ECreateModelingObjectResult::Ok;
    this->NewActor = NULL;
}

