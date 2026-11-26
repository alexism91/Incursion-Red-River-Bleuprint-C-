#include "UPSGroupMovementFormation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AUPSGroupMovementFormation::AUPSGroupMovementFormation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("RootArrowComponent"));
    this->RootArrowComponent = (UArrowComponent*)RootComponent;
    this->LeaderCharacter = NULL;
}


