#include "PCGCreatePointsSphereSettings.h"

UPCGCreatePointsSphereSettings::UPCGCreatePointsSphereSettings() {
    this->SphereGeneration = EPCGSphereGeneration::Geodesic;
    this->CoordinateSpace = EPCGCoordinateSpace::World;
    this->PointOrientation = EPCGSpherePointOrientation::Radial;
    this->Radius = 100.00f;
    this->GeodesicSubdivisions = 2;
    this->Theta = 12.00f;
    this->Phi = 12.00f;
    this->LatitudinalSegments = 15;
    this->LongitudinalSegments = 30;
    this->SampleCount = 100;
    this->PoissonDistance = 100.00f;
    this->PoissonMaxAttempts = 32;
    this->LatitudinalStartAngle = -90.00f;
    this->LatitudinalEndAngle = 90.00f;
    this->LongitudinalStartAngle = -180.00f;
    this->LongitudinalEndAngle = 180.00f;
    this->Jitter = 0.00f;
    this->PointSteepness = 0.50f;
    this->bCullPointsOutsideVolume = false;
}


