#include "MovieGraphCollection.h"

UMovieGraphCollection::UMovieGraphCollection() {
}

void UMovieGraphCollection::SetCollectionName(const FString& InName) {
}

bool UMovieGraphCollection::RemoveConditionGroup(UMovieGraphConditionGroup* InConditionGroup) {
    return false;
}

bool UMovieGraphCollection::MoveConditionGroupToIndex(UMovieGraphConditionGroup* InConditionGroup, const int32 newIndex) {
    return false;
}

TArray<UMovieGraphConditionGroup*> UMovieGraphCollection::GetConditionGroups() const {
    return TArray<UMovieGraphConditionGroup*>();
}

FString UMovieGraphCollection::GetCollectionName() const {
    return TEXT("");
}

FMovieGraphEvaluationResult UMovieGraphCollection::EvaluateActorsAndComponents(const UWorld* InWorld) const {
    return FMovieGraphEvaluationResult{};
}

TSet<AActor*> UMovieGraphCollection::Evaluate(const UWorld* InWorld) const {
    return TSet<AActor*>();
}

UMovieGraphConditionGroup* UMovieGraphCollection::AddConditionGroup() {
    return NULL;
}


