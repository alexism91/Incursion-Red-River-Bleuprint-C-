#include "RecordedStateTreeTransitionResult.h"

FRecordedStateTreeTransitionResult::FRecordedStateTreeTransitionResult() {
    this->Priority = EStateTreeTransitionPriority::None;
    this->SourceStateTree = NULL;
}

