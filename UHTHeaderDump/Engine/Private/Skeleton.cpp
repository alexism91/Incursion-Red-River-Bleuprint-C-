#include "Skeleton.h"

USkeleton::USkeleton() {
    this->bUseRetargetModesFromCompatibleSkeleton = false;
}

UBlendProfile* USkeleton::GetBlendProfile(const FName& InProfileName) {
    return NULL;
}

void USkeleton::AddCompatibleSkeletonSoft(const TSoftObjectPtr<USkeleton>& SourceSkeleton) {
}

void USkeleton::AddCompatibleSkeleton(const USkeleton* SourceSkeleton) {
}


