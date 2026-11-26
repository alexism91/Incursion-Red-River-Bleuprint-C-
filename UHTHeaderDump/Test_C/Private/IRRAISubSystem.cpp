#include "IRRAISubSystem.h"

UIRRAISubSystem::UIRRAISubSystem() {
    this->AIManager = NULL;
}

void UIRRAISubSystem::GrenadeThrown(AActor* Grenade, ACharacter* Instigator, const FVector& PredictedLocation) {
}

void UIRRAISubSystem::GrenadeExploded(AActor* Grenade, ACharacter* Instigator) {
}

FIRRAIWeaponSettings UIRRAISubSystem::GetWeaponSettings() const {
    return FIRRAIWeaponSettings{};
}

FIRRAIGlobalSettings UIRRAISubSystem::GetGlobalSettings() const {
    return FIRRAIGlobalSettings{};
}

FIRRBarkSettings UIRRAISubSystem::GetBarkSettings() const {
    return FIRRBarkSettings{};
}

TArray<AIRRAIBaseController*> UIRRAISubSystem::GetAllAIControllers() const {
    return TArray<AIRRAIBaseController*>();
}

AAIManager* UIRRAISubSystem::GetAIManager() const {
    return NULL;
}


