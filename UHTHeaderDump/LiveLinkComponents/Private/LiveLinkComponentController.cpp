#include "LiveLinkComponentController.h"
#include "Templates/SubclassOf.h"

ULiveLinkComponentController::ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateInEditor = true;
    this->bDisableEvaluateLiveLinkWhenSpawnable = true;
    this->bEvaluateLiveLink = true;
    this->bUpdateInPreviewEditor = false;
}

void ULiveLinkComponentController::SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation) {
}

void ULiveLinkComponentController::SetControlledComponent(TSubclassOf<ULiveLinkRole> InRoleClass, UActorComponent* InComponent) {
}

FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation() const {
    return FLiveLinkSubjectRepresentation{};
}

UActorComponent* ULiveLinkComponentController::GetControlledComponent(TSubclassOf<ULiveLinkRole> InRoleClass) const {
    return NULL;
}


