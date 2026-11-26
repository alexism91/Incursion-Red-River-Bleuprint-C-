#include "LXRDebugSubsystem.h"

ULXRDebugSubsystem::ULXRDebugSubsystem() {
    this->CanvasWidget = NULL;
}

void ULXRDebugSubsystem::UpdateActorDebugFeatures(AActor* InActor, const FLXRDebugFeatures& InDebugFeatures) {
}

void ULXRDebugSubsystem::RemoveDebugActor(AActor* InActor, bool IsLocalControllerActor) {
}

int32 ULXRDebugSubsystem::GetAmountOfDebugActors() {
    return 0;
}

void ULXRDebugSubsystem::AddDebugActor(AActor* InActor, const FLXRDebugFeatures& InDebugFeatures, bool IsLocalControllerActor) {
}


