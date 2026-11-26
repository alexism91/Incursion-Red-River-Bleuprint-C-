#include "MovieGraphModifierNode.h"
#include "MovieGraphMergeableModifierContainer.h"
#include "Templates/SubclassOf.h"

UMovieGraphModifierNode::UMovieGraphModifierNode() {
    this->bOverride_ModifierName = true;
    this->bOverride_Collections = true;
    this->bOverride_ModifiersContainer = true;
    this->bOverride_DisabledCollections = true;
    this->ModifiersContainer = CreateDefaultSubobject<UMovieGraphMergeableModifierContainer>(TEXT("Modifiers"));
}

void UMovieGraphModifierNode::SetCollectionEnabled(const FName& InCollectionName, const bool bIsCollectionEnabled) {
}

bool UMovieGraphModifierNode::RemoveModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType) {
    return false;
}

bool UMovieGraphModifierNode::RemoveCollection(const FName& InCollectionName) {
    return false;
}

bool UMovieGraphModifierNode::IsCollectionEnabled(const FName& InCollectionName) const {
    return false;
}

TArray<UMovieGraphCollectionModifier*> UMovieGraphModifierNode::GetModifiers() const {
    return TArray<UMovieGraphCollectionModifier*>();
}

UMovieGraphCollectionModifier* UMovieGraphModifierNode::GetModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType) const {
    return NULL;
}

TArray<FName> UMovieGraphModifierNode::GetCollections() const {
    return TArray<FName>();
}

UMovieGraphCollectionModifier* UMovieGraphModifierNode::AddModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType) {
    return NULL;
}

void UMovieGraphModifierNode::AddCollection(const FName& InCollectionName) {
}


