#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGRLibrary.generated.h"

class AActor;
class UAGRAnimMasterComponent;
class UAGR_CombatManager;
class UAGR_EquipmentManager;
class UAGR_InventoryManager;
class UAGR_ItemComponent;
class UAGR_SoundMaster;

UCLASS(Blueprintable)
class AGRPRO_API UAGRLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGRLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGR_SoundMaster* K2_GetSound(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGR_ItemComponent* K2_GetItemComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGR_InventoryManager* K2_GetInventory(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGR_EquipmentManager* K2_GetEquipment(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGR_CombatManager* K2_GetCombatManager(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAGRAnimMasterComponent* K2_GetAnimationMaster(AActor* Actor);
    
};

