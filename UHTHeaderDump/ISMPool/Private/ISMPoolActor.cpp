#include "ISMPoolActor.h"
#include "ISMPoolComponent.h"

AISMPoolActor::AISMPoolActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UISMPoolComponent>(TEXT("ISMPoolComp"));
    this->ISMPoolComp = (UISMPoolComponent*)RootComponent;
    this->ISMPoolDebugDrawComp = NULL;
}


