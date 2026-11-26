#include "GeometryScriptCopyBonesFromMeshOptions.h"

FGeometryScriptCopyBonesFromMeshOptions::FGeometryScriptCopyBonesFromMeshOptions() {
    this->ReindexWeights = false;
    this->BonesToCopyFromSource = EBonesToCopyFromSource::AllBones;
}

