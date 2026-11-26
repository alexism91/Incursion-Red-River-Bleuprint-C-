#include "CoverSystem.h"

ACoverSystem::ACoverSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldUseStaticData = true;
    this->bPromptWhenCoverDataOutdated = true;
    this->bGenerateOnBeginPlay = true;
    this->bGenerateOnNavigationRebuild = false;
    this->bEnableAsyncMode = true;
    this->bUseCustomBuildParams = false;
    this->OctreeExtent = 64000.00f;
    this->TraceChannel = ECC_GameTraceChannel1;
    this->bDebugDraw = false;
    this->DebugDrawDistance = 80000.00f;
    this->bDrawOctreeBounds = false;
}

void ACoverSystem::RebaseOrigin(const FVector& NewOrigin, bool bRegenerate) {
}

void ACoverSystem::OnNavigationGenerationFinished(ANavigationData* NavData) {
}

bool ACoverSystem::IsAsyncWorkerRunning() const {
    return false;
}

ACoverSystem* ACoverSystem::GetCoverSystem(const UObject* WorldContext) {
    return NULL;
}

void ACoverSystem::GetCoversWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCoverHandle>& OutCoverHandles) const {
}

void ACoverSystem::GetCoverDataWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCover>& OutCovers) const {
}

bool ACoverSystem::GetCoverData(const FCoverHandle& CoverHandle, FCoverData& OutData) const {
    return false;
}

void ACoverSystem::GenerateCovers(bool bForceRegenerate, bool bAsync, bool bDeferGenerationIfBusy) {
}


