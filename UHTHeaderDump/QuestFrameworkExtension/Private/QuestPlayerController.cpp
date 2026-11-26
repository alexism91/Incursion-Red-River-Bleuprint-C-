#include "QuestPlayerController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=QuestFramework -ObjectName=QuestComponent -FallbackName=QuestComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=QuestFramework -ObjectName=QuestTrackerComponent -FallbackName=QuestTrackerComponent

AQuestPlayerController::AQuestPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->QuestFrameworkComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->QuestTrackerComponent = CreateDefaultSubobject<UQuestTrackerComponent>(TEXT("QuestTracker"));
}


