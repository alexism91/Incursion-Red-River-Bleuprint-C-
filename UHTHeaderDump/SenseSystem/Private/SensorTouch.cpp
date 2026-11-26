#include "SensorTouch.h"

USensorTouch::USensorTouch() {
    this->SensorTag = TEXT("SensorTouch");
    this->ChannelSetup.AddDefaulted(1);
    this->SensorTests.AddDefaulted(1);
    this->bActorRootCollision = true;
    this->bOnComponentHit = true;
    this->bOnComponentBeginOverlap = true;
}

void USensorTouch::SetTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions) {
}

void USensorTouch::SetTouchCollision(UPrimitiveComponent* Prim) {
}

void USensorTouch::RemoveTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions) {
}

void USensorTouch::RemoveTouchCollision(UPrimitiveComponent* InTouchCollision) {
}

void USensorTouch::OnTouchHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USensorTouch::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USensorTouch::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USensorTouch::AddTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions) {
}

void USensorTouch::AddTouchCollision(UPrimitiveComponent* InTouchCollision) {
}


