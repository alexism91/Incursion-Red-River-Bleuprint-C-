#include "OptimusFunctionNodeGraph.h"

UOptimusFunctionNodeGraph::UOptimusFunctionNodeGraph() {
    this->Category = TEXT("Deformers");
    this->AccessSpecifier = TEXT("Private");
}

TArray<FName> UOptimusFunctionNodeGraph::GetAccessSpecifierOptions() const {
    return TArray<FName>();
}


