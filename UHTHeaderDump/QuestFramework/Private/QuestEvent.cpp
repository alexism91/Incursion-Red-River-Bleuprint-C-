#include "QuestEvent.h"

UQuestEvent::UQuestEvent() {
    this->NetworkExecutionType = EQuestNetworkExecType::Both;
    this->bTriggerOnStateRestore = false;
}

void UQuestEvent::ExecuteEvent_Implementation(UQuestContext* Context, const FQuestEventPayload& Payload) {
}


