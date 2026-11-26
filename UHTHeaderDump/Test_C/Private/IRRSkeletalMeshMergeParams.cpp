#include "IRRSkeletalMeshMergeParams.h"

FIRRSkeletalMeshMergeParams::FIRRSkeletalMeshMergeParams() {
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bSkeletonBefore = false;
    this->Skeleton = NULL;
}

