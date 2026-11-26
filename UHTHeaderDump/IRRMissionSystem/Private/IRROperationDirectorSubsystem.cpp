#include "IRROperationDirectorSubsystem.h"

UIRROperationDirectorSubsystem::UIRROperationDirectorSubsystem() {
}

bool UIRROperationDirectorSubsystem::RegisterOperation(AIRROperationStartPoint_Auto* StartPoint, const FIRROperationActivation& InActivation) {
    return false;
}

void UIRROperationDirectorSubsystem::OnSightCheckComplete(const TArray<FVector>& ValidLocations, const TArray<int32>& UnseenCandidates) {
}

TArray<AIRROperationStartPoint*> UIRROperationDirectorSubsystem::GetRunningOperations() const {
    return TArray<AIRROperationStartPoint*>();
}

TArray<AIRROperationStartPoint_Auto*> UIRROperationDirectorSubsystem::GetPendingOperations() const {
    return TArray<AIRROperationStartPoint_Auto*>();
}

UIRROperationDirectorSubsystem* UIRROperationDirectorSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UIRROperationDirectorSubsystem::CancelPendingOperation(AIRROperationStartPoint_Auto* StartPoint) {
    return false;
}

int32 UIRROperationDirectorSubsystem::ActivateSelectedOperationsNow() {
    return 0;
}

bool UIRROperationDirectorSubsystem::ActivateOperationNow(AIRROperationStartPoint_Auto* StartPoint) {
    return false;
}

int32 UIRROperationDirectorSubsystem::ActivateAllOperationsNow() {
    return 0;
}


