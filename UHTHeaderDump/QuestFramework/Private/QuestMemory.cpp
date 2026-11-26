#include "QuestMemory.h"

UQuestMemory::UQuestMemory() {
}

void UQuestMemory::SetInteger(FName Variable, int32 Value) {
}

void UQuestMemory::SetFloat(FName Variable, float Value) {
}

void UQuestMemory::SetBool(FName Variable, bool Value) {
}

bool UQuestMemory::RunQuery(const FQuestMemoryQuery& Query) const {
    return false;
}

int32 UQuestMemory::GetInteger(FName Variable) const {
    return 0;
}

float UQuestMemory::GetFloat(FName Variable) const {
    return 0.0f;
}

bool UQuestMemory::GetBool(FName Variable) const {
    return false;
}


