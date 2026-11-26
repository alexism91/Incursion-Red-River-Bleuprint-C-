#include "NavModifierComponent.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

UNavModifierComponent::UNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->AreaClassToReplace = NULL;
    this->NavMeshResolution = ENavigationDataResolution::MAX;
    this->bIncludeAgentHeight = true;
}

void UNavModifierComponent::SetAreaClassToReplace(TSubclassOf<UNavArea> NewAreaClassToReplace) {
}

void UNavModifierComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}


