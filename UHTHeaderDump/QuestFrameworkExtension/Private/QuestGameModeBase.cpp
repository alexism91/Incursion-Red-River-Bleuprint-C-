#include "QuestGameModeBase.h"
#include "QuestPlayerController.h"

AQuestGameModeBase::AQuestGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AQuestPlayerController::StaticClass();
}


