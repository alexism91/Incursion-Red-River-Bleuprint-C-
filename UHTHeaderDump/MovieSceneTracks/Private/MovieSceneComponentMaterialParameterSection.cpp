#include "MovieSceneComponentMaterialParameterSection.h"

UMovieSceneComponentMaterialParameterSection::UMovieSceneComponentMaterialParameterSection() {
    this->bSupportsInfiniteRange = true;
}

bool UMovieSceneComponentMaterialParameterSection::RemoveScalarParameter(const FMaterialParameterInfo& InParameterInfo) {
    return false;
}

bool UMovieSceneComponentMaterialParameterSection::RemoveColorParameter(const FMaterialParameterInfo& InParameterInfo) {
    return false;
}

void UMovieSceneComponentMaterialParameterSection::AddScalarParameterKey(const FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue, const FString& InLayerName, const FString& InAssetName) {
}

void UMovieSceneComponentMaterialParameterSection::AddColorParameterKey(const FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue, const FString& InLayerName, const FString& InAssetName, const FParameterChannelNames& InChannelNames) {
}


