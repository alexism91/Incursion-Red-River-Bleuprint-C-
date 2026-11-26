#include "MovieSceneCVarSection.h"

UMovieSceneCVarSection::UMovieSceneCVarSection() {
    this->bSupportsInfiniteRange = true;
}

void UMovieSceneCVarSection::SetFromString(const FString& InString) {
}

FString UMovieSceneCVarSection::GetString() const {
    return TEXT("");
}


