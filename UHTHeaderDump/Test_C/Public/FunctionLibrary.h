#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EQUA_ModifierType.h"
#include "EQUA_PlayerSlots.h"
#include "EQUA_StatType.h"
#include "QUA_EquipAnimation.h"
#include "QUA_StatItem.h"
#include "QUA_WeaponDurability.h"
#include "_WeightedName.h"
#include "FunctionLibrary.generated.h"

class UAnimMontage;
class UEnum;
class UStaticMesh;

UCLASS(Blueprintable)
class TEST_C_API UFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator VectorToRotator(FVector Vector);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTags(FGameplayTagContainer& CurrentTags, FGameplayTagContainer TagsToAdd, FGameplayTagContainer TagsToRemove);
    
    UFUNCTION(BlueprintCallable)
    static FName SelectRandomNameWithWeight(TArray<F_WeightedName> WeightedNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ModifyStat(FQUA_StatItem NewStatItem, TArray<FQUA_StatItem>& CurrentStats);
    
    UFUNCTION(BlueprintCallable)
    static void InspectEnum(UEnum* EnumClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatValueByType(EQUA_StatType StatType, TArray<FQUA_StatItem> stats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageSectionLength(UAnimMontage* Montage, FName Section);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimMontage* GetEquipMontage(EQUA_PlayerSlots Slot, bool Equip, TMap<EQUA_PlayerSlots, FQUA_EquipAnimation> EquipAnims);
    
    UFUNCTION(BlueprintCallable)
    static void CopyStaticMeshSockets(UStaticMesh* Source, UStaticMesh* Dest);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FQUA_StatItem> CalculateStats(TArray<FQUA_StatItem> StatItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D CalculateSpreadVector(float Spread);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FQUA_StatItem> CalculateDurabilityFactor(TArray<FQUA_StatItem> StatItems, FVector2D Durability, FQUA_WeaponDurability DurabilityInfluence);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyModifier(EQUA_ModifierType ModifierType, float& OriginalValue, float ModifierValue);
    
    UFUNCTION(BlueprintCallable)
    static void AddStaticMeshSockets(UStaticMesh* Mesh, TArray<FName> Sockets);
    
};

