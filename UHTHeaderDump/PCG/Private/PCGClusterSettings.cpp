#include "PCGClusterSettings.h"

UPCGClusterSettings::UPCGClusterSettings() {
    this->Algorithm = EPCGClusterAlgorithm::KMeans;
    this->NumClusters = 3;
    this->MaxIterations = 100;
    this->Tolerance = 0.00f;
    this->bOutputFinalCentroids = false;
    this->bOutputFinalCentroidElementCount = false;
}


