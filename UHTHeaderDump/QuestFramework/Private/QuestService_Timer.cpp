#include "QuestService_Timer.h"
#include "EQuestNetworkExecType.h"

UQuestService_Timer::UQuestService_Timer() {
    this->NetworkExecutionType = EQuestNetworkExecType::Both;
    this->InitialTime = 0.00f;
    this->Speed = 1.00f;
}


