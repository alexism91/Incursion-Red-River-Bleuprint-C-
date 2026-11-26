#include "FunctionLibrary.h"

UFunctionLibrary::UFunctionLibrary() {
}

FRotator UFunctionLibrary::VectorToRotator(FVector Vector) {
    return FRotator{};
}

void UFunctionLibrary::UpdateTags(FGameplayTagContainer& CurrentTags, FGameplayTagContainer TagsToAdd, FGameplayTagContainer TagsToRemove) {
}

FName UFunctionLibrary::SelectRandomNameWithWeight(TArray<F_WeightedName> WeightedNames) {
    return NAME_None;
}

void UFunctionLibrary::ModifyStat(FQUA_StatItem NewStatItem, TArray<FQUA_StatItem>& CurrentStats) {
}

void UFunctionLibrary::InspectEnum(UEnum* EnumClass) {
}

float UFunctionLibrary::GetStatValueByType(EQUA_StatType StatType, TArray<FQUA_StatItem> stats) {
    return 0.0f;
}

float UFunctionLibrary::GetMontageSectionLength(UAnimMontage* Montage, FName Section) {
    return 0.0f;
}

UAnimMontage* UFunctionLibrary::GetEquipMontage(EQUA_PlayerSlots Slot, bool Equip, TMap<EQUA_PlayerSlots, FQUA_EquipAnimation> EquipAnims) {
    return NULL;
}

void UFunctionLibrary::CopyStaticMeshSockets(UStaticMesh* Source, UStaticMesh* Dest) {
}

TArray<FQUA_StatItem> UFunctionLibrary::CalculateStats(TArray<FQUA_StatItem> StatItems) {
    return TArray<FQUA_StatItem>();
}

FVector2D UFunctionLibrary::CalculateSpreadVector(float Spread) {
    return FVector2D{};
}

TArray<FQUA_StatItem> UFunctionLibrary::CalculateDurabilityFactor(TArray<FQUA_StatItem> StatItems, FVector2D Durability, FQUA_WeaponDurability DurabilityInfluence) {
    return TArray<FQUA_StatItem>();
}

void UFunctionLibrary::ApplyModifier(EQUA_ModifierType ModifierType, float& OriginalValue, float ModifierValue) {
}

void UFunctionLibrary::AddStaticMeshSockets(UStaticMesh* Mesh, TArray<FName> Sockets) {
}


