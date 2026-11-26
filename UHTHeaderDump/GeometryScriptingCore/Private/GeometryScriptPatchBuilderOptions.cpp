#include "GeometryScriptPatchBuilderOptions.h"

FGeometryScriptPatchBuilderOptions::FGeometryScriptPatchBuilderOptions() {
    this->InitialPatchCount = 0;
    this->MinPatchSize = 0;
    this->PatchCurvatureAlignmentWeight = 0.00f;
    this->PatchMergingMetricThresh = 0.00f;
    this->PatchMergingAngleThresh = 0.00f;
    this->bRespectInputGroups = false;
    this->bAutoPack = false;
}

