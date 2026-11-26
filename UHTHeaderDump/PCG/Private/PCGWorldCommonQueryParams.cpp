#include "PCGWorldCommonQueryParams.h"

FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams() {
    this->bIgnorePCGHits = false;
    this->bIgnoreSelfHits = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->bTraceComplex = false;
    this->ActorTagFilter = EPCGWorldQueryFilter::NoTagFilter;
    this->ActorClassFilter = EPCGWorldQueryFilter::NoTagFilter;
    this->ActorClass = NULL;
    this->ActorFilterFromInput = EPCGWorldQueryFilter::NoTagFilter;
    this->SelectLandscapeHits = EPCGWorldQuerySelectLandscapeHits::Exclude;
    this->bGetReferenceToActorHit = false;
    this->bGetReferenceToPhysicalMaterial = false;
}

