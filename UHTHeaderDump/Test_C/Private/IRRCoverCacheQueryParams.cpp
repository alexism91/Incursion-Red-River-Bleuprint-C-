#include "IRRCoverCacheQueryParams.h"

FIRRCoverCacheQueryParams::FIRRCoverCacheQueryParams() {
    this->Stance = EIRRCoverQueryStance::Defensive;
    this->AggressiveMode = EIRRCoverAggressiveMode::AdvanceAlongPath;
    this->DefensiveMode = EIRRCoverDefensiveMode::Standard;
    this->MinDistanceToTarget = 0.00f;
    this->MinDotToCurrentTarget = 0.00f;
    this->MaxAngleAroundTarget = 0.00f;
    this->bOnlyFullCover = false;
    this->bExcludeFlatWallCovers = false;
    this->bRequireStandingProtection = false;
    this->bRequirePeek = false;
    this->bRequireSoftPeek = false;
    this->MinPathLength = 0.00f;
    this->MaxPathLength = 0.00f;
    this->PathCostRefineCandidates = 0;
    this->bDiscardUnreachable = false;
    this->MinRepositionTravel = 0.00f;
    this->bLimitDistanceToPost = false;
    this->MaxDistanceToPost = 0.00f;
    this->FriendlySpacing = 0.00f;
    this->MaxCandidates = 0;
    this->SelectionMode = EIRRCoverSelectionMode::SingleBest;
    this->PathLengthWeight = 0.00f;
    this->DotWeight = 0.00f;
    this->PeekWeight = 0.00f;
    this->AvoidancePenaltyWeight = 0.00f;
    this->FlatWallCoverPenalty = 0.00f;
    this->EscalatedCoverPenalty = 0.00f;
}

