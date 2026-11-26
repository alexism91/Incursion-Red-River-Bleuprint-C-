#include "MovieGraphConditionGroupQueryBase.h"

UMovieGraphConditionGroupQueryBase::UMovieGraphConditionGroupQueryBase() {
    this->OpType = EMovieGraphConditionGroupQueryOpType::Add;
    this->bIsEnabled = true;
}

bool UMovieGraphConditionGroupQueryBase::ShouldHidePropertyNames() const {
    return false;
}

bool UMovieGraphConditionGroupQueryBase::ShouldEvaluateComponents() const {
    return false;
}

void UMovieGraphConditionGroupQueryBase::SetOperationType(const EMovieGraphConditionGroupQueryOpType OperationType) {
}

void UMovieGraphConditionGroupQueryBase::SetEnabled(const bool bEnabled) {
}

bool UMovieGraphConditionGroupQueryBase::IsFirstConditionGroupQuery() const {
    return false;
}

bool UMovieGraphConditionGroupQueryBase::IsEnabled() const {
    return false;
}

bool UMovieGraphConditionGroupQueryBase::IsEditorOnlyQuery() const {
    return false;
}

EMovieGraphConditionGroupQueryOpType UMovieGraphConditionGroupQueryBase::GetOperationType() const {
    return EMovieGraphConditionGroupQueryOpType::Add;
}

void UMovieGraphConditionGroupQueryBase::EvaluateActorsAndComponents(const TArray<AActor*>& InActorsToQuery, const UWorld* InWorld, TSet<AActor*>& OutMatchingActors, TSet<UActorComponent*>& OutMatchingComponents) const {
}

void UMovieGraphConditionGroupQueryBase::Evaluate(const TArray<AActor*>& InActorsToQuery, const UWorld* InWorld, TSet<AActor*>& OutMatchingActors) const {
}


