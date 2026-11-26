#include "GeometryScriptPointClusteringOptions.h"

FGeometryScriptPointClusteringOptions::FGeometryScriptPointClusteringOptions() {
    this->TargetNumClusters = 0;
    this->InitializeMethod = EGeometryScriptInitKMeansMethod::Random;
    this->RandomSeed = 0;
    this->MaxIterations = 0;
}

