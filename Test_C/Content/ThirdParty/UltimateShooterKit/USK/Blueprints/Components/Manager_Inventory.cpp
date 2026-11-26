class UManager_Inventory_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 1;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Inventory.Manager_Inventory_C:ExecuteUbergraph_Manager_Inventory'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 DefaultInventorySpace = 999;
    bool Debug = true;
     On_Item_Picked_Up = ;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    bool bReplicates = true;
    class APawn* OwnerPawn;
    TArray<class AActor*> CurrentInteractables;
    class AActor* CurrentInteractable;
    TArray<class AActor*> InventoryItems;
    class AActor* RequestedItem;
    int CurrentInventorySpace;
    int IncreasedInventorySpace;
    class AActor* LastPickedUpItem;
    TArray<class AActor*> SpawnedItems;
    TArray<TSubclassOf<AActor>> ItemsToSpawn;
    bool IsUsingItem;
    bool WeaponWasEquipped;
    class AActor* ItemOnUse;

};