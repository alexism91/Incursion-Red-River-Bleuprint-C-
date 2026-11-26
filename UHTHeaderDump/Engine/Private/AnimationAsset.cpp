#include "AnimationAsset.h"
#include "Templates/SubclassOf.h"

UAnimationAsset::UAnimationAsset() {
    this->Skeleton = NULL;
}

float UAnimationAsset::GetPlayLength() const {
    return 0.0f;
}

UAnimMetaData* UAnimationAsset::FindMetaDataByClass(const TSubclassOf<UAnimMetaData> MetaDataClass) const {
    return NULL;
}


