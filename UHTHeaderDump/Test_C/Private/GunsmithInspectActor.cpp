#include "GunsmithInspectActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AGunsmithInspectActor::AGunsmithInspectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PivotComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PivotComponent"));
    this->PivotComponent->SetupAttachment(RootComponent);
}

TArray<FGunsmithAttachmentSlot> AGunsmithInspectActor::LayoutAttachmentSlots() {
    return TArray<FGunsmithAttachmentSlot>();
}

TArray<FGunsmithAttachmentSlot> AGunsmithInspectActor::GetGunsmithAttachmentSlot(float MajorAxis, float MinorAxis, FVector2D Center, float Spacing, int32 Attempts) {
    return TArray<FGunsmithAttachmentSlot>();
}


