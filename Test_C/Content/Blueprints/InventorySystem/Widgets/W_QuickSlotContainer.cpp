class UW_QuickSlotContainer_C : public UW_EquipToContainer_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_QuickSlotContainer.W_QuickSlotContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_QuickSlotContainer.W_QuickSlotContainer_C:ExecuteUbergraph_W_QuickSlotContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("QuickSlotIndex"), FGuid(0x484DEBD8, 0x4073082D, 0x659FB6A5, 0x11F3E587) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush EquipToBackgroundBrush = {
        "Tiling": ESlateBrushTileType::NoTile,
        "ImageSize": FVector2D(73, 73),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Border/T_IRR_Item_Background_A.T_IRR_Item_Background_A'"
    };
    bool bUseHeadline = false;
    struct FVector2D EquipToSlotSize = FVector2D(79, 79);
    int QuickSlotIndex;

};