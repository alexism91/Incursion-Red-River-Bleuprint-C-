#include "UPSFunctionLIbrary.h"
#include "Templates/SubclassOf.h"

UUPSFunctionLIbrary::UUPSFunctionLIbrary() {
}

AUPSPatrolPoint* UUPSFunctionLIbrary::K2_CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation, FRotator WorldRotation, AUPSPatrolPoint* PreviousPoint, FGameplayTag LinkTagFromPreviousPoint, TSubclassOf<AUPSPatrolPoint> PointClass) {
    return NULL;
}

void UUPSFunctionLIbrary::JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex) {
}

float UUPSFunctionLIbrary::GetMontageSectionLength(UAnimMontage* Montage, FName SectionName) {
    return 0.0f;
}

float UUPSFunctionLIbrary::GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index) {
    return 0.0f;
}

UUPSEnemyAction* UUPSFunctionLIbrary::GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector) {
    return NULL;
}

UUPSEnemyAction* UUPSFunctionLIbrary::GetDynamicEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector) {
    return NULL;
}

UUPSPatrolPointScript* UUPSFunctionLIbrary::CreatePatrolScriptIntance(FPatrolPointScript Script) {
    return NULL;
}


