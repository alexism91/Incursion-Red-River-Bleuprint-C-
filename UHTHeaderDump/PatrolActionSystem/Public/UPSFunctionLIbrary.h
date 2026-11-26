#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EnemyActionSelector.h"
#include "PatrolPointScript.h"
#include "Templates/SubclassOf.h"
#include "UPSFunctionLIbrary.generated.h"

class ACharacter;
class AUPSPatrolPoint;
class UAnimMontage;
class UObject;
class UUPSEnemyAction;
class UUPSPatrolPointScript;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSFunctionLIbrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUPSFunctionLIbrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AUPSPatrolPoint* K2_CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation, FRotator WorldRotation, AUPSPatrolPoint* PreviousPoint, FGameplayTag LinkTagFromPreviousPoint, TSubclassOf<AUPSPatrolPoint> PointClass);
    
    UFUNCTION(BlueprintCallable)
    static void JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageSectionLength(UAnimMontage* Montage, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUPSEnemyAction* GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector);
    
    UFUNCTION(BlueprintCallable)
    static UUPSEnemyAction* GetDynamicEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector);
    
    UFUNCTION(BlueprintCallable)
    static UUPSPatrolPointScript* CreatePatrolScriptIntance(FPatrolPointScript Script);
    
};

