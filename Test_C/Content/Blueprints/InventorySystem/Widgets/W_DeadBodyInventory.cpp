class UW_DeadBodyInventory_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_DeadBodyInventory.W_DeadBodyInventory_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_DeadBodyInventory.W_DeadBodyInventory_C:ExecuteUbergraph_W_DeadBodyInventory'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SectionHeaders"), FGuid(0x12E7DDB7, 0x40273C24, 0x95760F9C, 0xD3D2EB49) }, 
        { FName("SectionContainers"), FGuid(0x635DA3BC, 0x4DEA3084, 0x4EF1738A, 0xD13BC1D9) }, 
        { FName("InventorySections"), FGuid(0x3C7D5941, 0x4BD557BD, 0x2C1CB492, 0x24622C51) }, 
        { FName("ContainerElements"), FGuid(0x9F1C5B2D, 0x4D9C191E, 0xE70193A2, 0x52E49757) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Weight;
    class UW_InventorySection_C* WeaponsSection;
    class UVerticalBox* WeaponsContainer;
    class UW_IRR_Line_C* W_IRR_Line_1;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_InventoryHeadline_C* W_InventoryHeadline;
    class UW_InventorySection_C* TacticalRigSection;
    class UVerticalBox* TacticalRigBox;
    class UW_EquipToContainer_C* TactcialRigSlot;
    class UHorizontalBox* TacRigContainer;
    class UW_EquipToContainer_C* SecondarySlot;
    class UW_EquipToContainer_C* PrimarySlot;
    class UW_SpatialContainer_C* Pockets;
    class UW_EquipToContainer_C* PlateSlot;
    class UW_EquipToContainer_C* MeleeSlot;
    class UW_InventorySection_C* InventorySectionHeader;
    class UW_EquipToContainer_C* HolsterSlot;
    class UW_EquipToContainer_C* HelmetSlot;
    class UW_EquipToContainer_C* BackpackSlot;
    class UW_InventorySection_C* BackpackSection;
    class UHorizontalBox* BackpackContainer;
    class UVerticalBox* BackpackBox;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;

};