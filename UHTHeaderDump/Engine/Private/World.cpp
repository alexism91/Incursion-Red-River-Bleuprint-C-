#include "World.h"

UWorld::UWorld() {
    this->PersistentLevel = NULL;
    this->NetDriver = NULL;
    this->LineBatcher = NULL;
    this->PersistentLineBatcher = NULL;
    this->ForegroundLineBatcher = NULL;
    this->NetworkManager = NULL;
    this->PhysicsCollisionHandler = NULL;
    this->PhysicsQueryHandler = NULL;
    this->PerModuleDataObjects.AddDefaulted(1);
    this->ServerStreamingLevelsVisibility = NULL;
    this->LineBatchers[0] = NULL;
    this->LineBatchers[1] = NULL;
    this->LineBatchers[2] = NULL;
    this->LineBatchers[3] = NULL;
    this->DemoNetDriver = NULL;
    this->MyParticleEventManager = NULL;
    this->DefaultPhysicsVolume = NULL;
    this->bAreConstraintsDirty = false;
    this->NavigationSystem = NULL;
    this->AuthorityGameMode = NULL;
    this->GameState = NULL;
    this->AISystem = NULL;
    this->AvoidanceManager = NULL;
    this->OwningGameInstance = NULL;
    this->CanvasForRenderingToTarget = NULL;
    this->CanvasForDrawMaterialToRenderTarget = NULL;
    this->PhysicsField = NULL;
    this->WorldComposition = NULL;
    this->ContentBundleManager = NULL;
}

AWorldSettings* UWorld::K2_GetWorldSettings() {
    return NULL;
}

void UWorld::HandleTimelineScrubbed() {
}

UDataLayerManager* UWorld::GetDataLayerManager() const {
    return NULL;
}


