#include "MovieGraphNode.h"

UMovieGraphNode::UMovieGraphNode() {
    this->bIsDisabled = false;
}

void UMovieGraphNode::UnpromotePropertyFromPin(const FName& PropertyName) {
}

void UMovieGraphNode::TogglePromotePropertyToPin(const FName& PropertyName) {
}

void UMovieGraphNode::SetDisabled(const bool bNewDisableState) {
}

void UMovieGraphNode::PromotePropertyToPin(const FName& PropertyName) {
}

bool UMovieGraphNode::IsDisabled() const {
    return false;
}

TArray<FMovieGraphPropertyInfo> UMovieGraphNode::GetOverrideablePropertyInfo() const {
    return TArray<FMovieGraphPropertyInfo>();
}

TArray<UMovieGraphPin*> UMovieGraphNode::GetOutputPins() const {
    return TArray<UMovieGraphPin*>();
}

TArray<FMovieGraphPinProperties> UMovieGraphNode::GetOutputPinProperties() const {
    return TArray<FMovieGraphPinProperties>();
}

UMovieGraphPin* UMovieGraphNode::GetOutputPin(const FName& InPinLabel) const {
    return NULL;
}

TArray<UMovieGraphPin*> UMovieGraphNode::GetInputPins() const {
    return TArray<UMovieGraphPin*>();
}

TArray<FMovieGraphPinProperties> UMovieGraphNode::GetInputPinProperties() const {
    return TArray<FMovieGraphPinProperties>();
}

UMovieGraphPin* UMovieGraphNode::GetInputPin(const FName& InPinLabel, const EMovieGraphPinQueryRequirement PinRequirement) const {
    return NULL;
}

UMovieGraphPin* UMovieGraphNode::GetFirstConnectedOutputPin() const {
    return NULL;
}

UMovieGraphPin* UMovieGraphNode::GetFirstConnectedInputPin() const {
    return NULL;
}

TArray<FMovieGraphPropertyInfo> UMovieGraphNode::GetExposedProperties() const {
    return TArray<FMovieGraphPropertyInfo>();
}

EMovieGraphBranchRestriction UMovieGraphNode::GetBranchRestriction() const {
    return EMovieGraphBranchRestriction::Any;
}

bool UMovieGraphNode::CanBeDisabled() const {
    return false;
}

bool UMovieGraphNode::CanBeAddedByUser() const {
    return false;
}


