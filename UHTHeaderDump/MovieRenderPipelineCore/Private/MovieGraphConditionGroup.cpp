#include "MovieGraphConditionGroup.h"
#include "Templates/SubclassOf.h"

UMovieGraphConditionGroup::UMovieGraphConditionGroup() {
    this->OpType = EMovieGraphConditionGroupOpType::Add;
}

void UMovieGraphConditionGroup::SetOperationType(const EMovieGraphConditionGroupOpType OperationType) {
}

bool UMovieGraphConditionGroup::RemoveQuery(UMovieGraphConditionGroupQueryBase* InQuery) {
    return false;
}

bool UMovieGraphConditionGroup::MoveQueryToIndex(UMovieGraphConditionGroupQueryBase* InQuery, const int32 newIndex) {
    return false;
}

bool UMovieGraphConditionGroup::IsFirstConditionGroup() const {
    return false;
}

TArray<UMovieGraphConditionGroupQueryBase*> UMovieGraphConditionGroup::GetQueries() const {
    return TArray<UMovieGraphConditionGroupQueryBase*>();
}

EMovieGraphConditionGroupOpType UMovieGraphConditionGroup::GetOperationType() const {
    return EMovieGraphConditionGroupOpType::Add;
}

FMovieGraphEvaluationResult UMovieGraphConditionGroup::EvaluateActorsAndComponents(const UWorld* InWorld) const {
    return FMovieGraphEvaluationResult{};
}

TSet<AActor*> UMovieGraphConditionGroup::Evaluate(const UWorld* InWorld) const {
    return TSet<AActor*>();
}

UMovieGraphConditionGroupQueryBase* UMovieGraphConditionGroup::DuplicateQuery(const int32 QueryIndex) {
    return NULL;
}

UMovieGraphConditionGroupQueryBase* UMovieGraphConditionGroup::AddQuery(const TSubclassOf<UMovieGraphConditionGroupQueryBase>& InQueryType, const int32 InsertIndex) {
    return NULL;
}


