#include "FirstPersonCoreFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UFirstPersonCoreFunctionLibrary::UFirstPersonCoreFunctionLibrary() {
}

void UFirstPersonCoreFunctionLibrary::StopHandGunCurve(AActor* Owner, int32 Handle, float BlendOutTime) {
}

void UFirstPersonCoreFunctionLibrary::StopAllHandGunCurves(AActor* Owner, float BlendOutTime) {
}

int32 UFirstPersonCoreFunctionLibrary::PlayHandGunCurve(AActor* Owner, UFirstPersonHandGunCurveAnim* Clip, float Intensity, float PlayRate) {
    return 0;
}

UFirstPersonHandGunCurvePlayer* UFirstPersonCoreFunctionLibrary::GetHandGunCurvePlayer(AActor* Owner) {
    return NULL;
}

void UFirstPersonCoreFunctionLibrary::GetHandGunCurveOverlay(AActor* Owner, FVector& OutLocation, FRotator& OutRotation) {
}

UFirstPersonStamina* UFirstPersonCoreFunctionLibrary::GetFirstPersonStamina(AActor* Owner, FGameplayTag StaminaIdentifier) {
    return NULL;
}

UFirstPersonCoreSubObject* UFirstPersonCoreFunctionLibrary::GetFirstPersonCoreSubObject(AActor* Owner, TSubclassOf<UFirstPersonCoreSubObject> SubObjectClass) {
    return NULL;
}

UFirstPersonCoreComponent* UFirstPersonCoreFunctionLibrary::GetFirstPersonCoreComponent(AActor* Owner) {
    return NULL;
}


