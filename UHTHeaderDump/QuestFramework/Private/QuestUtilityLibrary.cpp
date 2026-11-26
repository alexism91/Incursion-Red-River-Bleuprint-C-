#include "QuestUtilityLibrary.h"

UQuestUtilityLibrary::UQuestUtilityLibrary() {
}

void UQuestUtilityLibrary::SetQuestVariableAsInteger(UQuestContext* Context, const FQuestVariable& Variable, int32 NewValue) {
}

void UQuestUtilityLibrary::SetQuestVariableAsFloat(UQuestContext* Context, const FQuestVariable& Variable, float NewValue) {
}

void UQuestUtilityLibrary::SetQuestVariableAsBool(UQuestContext* Context, const FQuestVariable& Variable, bool NewValue) {
}

void UQuestUtilityLibrary::SendQuestMessage(const UObject* WorldContext, const FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Recipient, AActor* Sender) {
}

UQuestComponent* UQuestUtilityLibrary::GetSharedQuestComponent(const UObject* WorldContext) {
    return NULL;
}

int32 UQuestUtilityLibrary::GetQuestVariableValueAsInteger(UQuestContext* Context, const FQuestVariable& Variable) {
    return 0;
}

float UQuestUtilityLibrary::GetQuestVariableValueAsFloat(UQuestContext* Context, const FQuestVariable& Variable) {
    return 0.0f;
}

bool UQuestUtilityLibrary::GetQuestVariableValueAsBool(UQuestContext* Context, const FQuestVariable& Variable) {
    return false;
}

UQuestTrackerComponent* UQuestUtilityLibrary::GetQuestTrackerComponentFromActor(AActor* Actor, bool bLookForComponent) {
    return NULL;
}

UQuestComponent* UQuestUtilityLibrary::GetQuestComponentFromActor(AActor* Actor, bool bLookForComponent) {
    return NULL;
}

UQuestTrackerViewModel* UQuestUtilityLibrary::GetPlayerQuestTrackerViewModel(APlayerController* PlayerController) {
    return NULL;
}

UQuestTrackerComponent* UQuestUtilityLibrary::GetPlayerQuestTrackerComponent(APlayerController* PlayerController) {
    return NULL;
}

UQuestListViewModel* UQuestUtilityLibrary::GetPlayerQuestListViewModel(APlayerController* PlayerController) {
    return NULL;
}

UQuestComponent* UQuestUtilityLibrary::GetPlayerQuestComponent(APlayerController* PlayerController) {
    return NULL;
}

UQuestComponent* UQuestUtilityLibrary::GetGameStateQuestComponent(const UObject* WorldContext) {
    return NULL;
}

UQuestComponent* UQuestUtilityLibrary::GetGameModeQuestComponent(const UObject* WorldContext) {
    return NULL;
}

FText UQuestUtilityLibrary::FormatQuestText(const FQuestText& Text, UQuestContext* Context) {
    return FText::GetEmpty();
}

UQuestComponent* UQuestUtilityLibrary::FindRelevantQuestComponentFromActor(AActor* Actor) {
    return NULL;
}

void UQuestUtilityLibrary::FilterChangedQuestContextViewModels(const TArray<UQuestContextViewModel*>& OldList, const TArray<UQuestContextViewModel*>& NewList, TArray<UQuestContextViewModel*>& OutAdded, TArray<UQuestContextViewModel*>& OutRemoved) {
}

void UQuestUtilityLibrary::FilterChangedObjectiveViewModels(const TArray<UQuestObjectiveViewModel*>& OldList, const TArray<UQuestObjectiveViewModel*>& NewList, TArray<UQuestObjectiveViewModel*>& OutAdded, TArray<UQuestObjectiveViewModel*>& OutRemoved) {
}

FText UQuestUtilityLibrary::ConvertQuestResultToText(EQuestResult InResult, FText NotStarted, FText InProgress, FText Completed, FText Failed) {
    return FText::GetEmpty();
}

FLinearColor UQuestUtilityLibrary::ConvertQuestResultToColor(EQuestResult InResult, FLinearColor NotStarted, FLinearColor InProgress, FLinearColor Completed, FLinearColor Failed) {
    return FLinearColor{};
}

bool UQuestUtilityLibrary::ConvertQuestResultToBool(EQuestResult InResult, bool NotStarted, bool InProgress, bool Completed, bool Failed) {
    return false;
}

void UQuestUtilityLibrary::BroadcastQuestMessage(const UObject* WorldContext, const FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Sender) {
}


