class UManager_Widget_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Widget.Manager_Widget_C:ExecuteUbergraph_Manager_Widget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnInventoryToggled = ;
    TArray<class UWidgetBlueprintGeneratedClass*> CrosshairPool = {
        "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_AssaultRifle.WB_Reticle_AssaultRifle_C'",
        "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_Melee.WB_Reticle_Melee_C'",
        "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_Pistol.WB_Reticle_Pistol_C'",
        "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_SniperRifle.WB_Reticle_SniperRifle_C'"
    };
    class APawn* OwnerPawn;
    class APlayerController* OwnerController;
    class UWB_Minimal_Inventory_C* MinimalInventory;
    Enum_InventoryType InventoryType;
    bool bInventoryOpened;
    class UWB_BaseReticle_C* Reticle;
    class UWB_PlayerInfo_C* PlayerInfo;

};