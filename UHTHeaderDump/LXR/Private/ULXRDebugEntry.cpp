#include "ULXRDebugEntry.h"

UULXRDebugEntry::UULXRDebugEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->txtActorName = NULL;
    this->BorderSeenBySilhouetteLeft = NULL;
    this->BorderSeenBySilhouetteRight = NULL;
    this->SocketDebug = NULL;
    this->DetectionDebugs = NULL;
    this->CaptureDebug = NULL;
    this->MyEntryObject = NULL;
}

void UULXRDebugEntry::SeenBySilhouette(AActor* Actor) {
}

FLinearColor UULXRDebugEntry::GetMyDebugColor() {
    return FLinearColor{};
}

AActor* UULXRDebugEntry::GetMyDebugActor() const {
    return NULL;
}




