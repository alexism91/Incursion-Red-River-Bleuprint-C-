class UWB_SlotList_Min_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_SlotList_Min.WB_SlotList_Min_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_SlotList_Min.WB_SlotList_Min_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_SlotList_Min.WB_SlotList_Min_C:ExecuteUbergraph_WB_SlotList_Min'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FilterArray"), FGuid(0x1A3207B1, 0x49F5C964, 0x8D99EFB1, 0x31F14C4E) }, 
        { FName("IsDragging"), FGuid(0xC88CD3CE, 0x43A4B620, 0xB08A599D, 0x8BEF84EB) }, 
        { FName("InventoryWidgets"), FGuid(0x5AC2CB88, 0x4342950E, 0x5E34ABA8, 0xD2D0EF64) }, 
        { FName("WeaponListVisible"), FGuid(0x21838F17, 0x4C6F5ED6, 0x6439C497, 0xA488D6EF) }, 
        { FName("WeaponSlots"), FGuid(0x8B7B2F9B, 0x4CB36418, 0x561470B4, 0xCB5C2A66) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* WeaponListSizer;
    class UVerticalBox* WeaponList;
    class UWB_FilterButton_C* WeaponFilter;
    class UWB_Single_SlotItem_Min_C* WB_Single_Weapon_Min_4;
    class UWB_Single_SlotItem_Min_C* WB_Single_Weapon_Min_3;
    class UWB_Single_SlotItem_Min_C* WB_Single_Weapon_Min_2;
    class UWB_Single_SlotItem_Min_C* WB_Single_Weapon_Min_1;
    class UWB_Single_SlotItem_Min_C* WB_Single_Weapon_Min;
    class UOverlay* ToggleListContainer;
    class USizeBox* ScrollerSizer;
    class UBorder* ListToggleIcon;
    class UButton* ItemListToggle;
    class UVerticalBox* InventoryList;
    class UHorizontalBox* InventoryContainer;
    class UOverlay* Inventory;
    class UHorizontalBox* Filters;
    class UWB_FilterButton_C* ExplosiveFilter;
    class UWB_Single_SlotItem_Min_C* Example5;
    class UWB_Single_SlotItem_Min_C* Example4;
    class UWB_Single_SlotItem_Min_C* Example3;
    class UWB_Single_SlotItem_Min_C* Example2;
    class UWB_Single_SlotItem_Min_C* Example1;
    class UWB_Single_Equipment_C* EquipmentSlot3;
    class UWB_Single_Equipment_C* EquipmentSlot2;
    class UWB_Single_Equipment_C* EquipmentSlot1;
    class UVerticalBox* EquipmentList;
    class UWB_FilterButton_C* EquipmentFilter;
    class UWB_FilterButton_C* AttachmentFilter;
    TArray<class UWB_Single_SlotItem_Min_C*>* WeaponSlots;
    bool WeaponListVisible;
    TArray<class UWB_Single_SlotItem_Min_C*>* InventoryWidgets;
    bool IsDragging;
    TArray<class UWB_FilterButton_C*>* FilterArray;

};