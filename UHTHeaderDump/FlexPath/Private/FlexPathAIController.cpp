#include "FlexPathAIController.h"
#include "FlexPathFollowingComponent.h"

AFlexPathAIController::AFlexPathAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFlexPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


