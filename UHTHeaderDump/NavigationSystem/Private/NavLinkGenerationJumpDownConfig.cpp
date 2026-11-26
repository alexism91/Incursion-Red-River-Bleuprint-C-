#include "NavLinkGenerationJumpDownConfig.h"

FNavLinkGenerationJumpDownConfig::FNavLinkGenerationJumpDownConfig() {
    this->bEnabled = false;
    this->JumpLength = 0.00f;
    this->JumpDistanceFromEdge = 0.00f;
    this->JumpMaxDepth = 0.00f;
    this->JumpHeight = 0.00f;
    this->JumpEndsHeightTolerance = 0.00f;
    this->SamplingSeparationFactor = 0.00f;
    this->FilterDistanceThreshold = 0.00f;
    this->LinkBuilderFlags = 0;
    this->DownDirectionAreaClass = NULL;
    this->UpDirectionAreaClass = NULL;
    this->LinkProxyClass = NULL;
    this->LinkProxy = NULL;
    this->bLinkProxyRegistered = false;
}

