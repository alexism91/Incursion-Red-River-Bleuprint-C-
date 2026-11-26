#include "ULXRDebugFeature.h"
#include "Templates/SubclassOf.h"

UULXRDebugFeature::UULXRDebugFeature() : UUserWidget(FObjectInitializer::Get()) {
    this->DebugEntryWidget = NULL;
    this->MyDebugFeature = ELXRDebugFeature::None;
}

void UULXRDebugFeature::SetMyComponent(UActorComponent* InComponent) {
}

bool UULXRDebugFeature::IsMyFeatureEnabled() const {
    return false;
}

TSubclassOf<UActorComponent> UULXRDebugFeature::GetMyDebugComponentClass() const {
    return NULL;
}

AActor* UULXRDebugFeature::GetMyDebugActor() const {
    return NULL;
}

UActorComponent* UULXRDebugFeature::GetMyComponent(TSubclassOf<UActorComponent> FeatureComponent) const {
    return NULL;
}




