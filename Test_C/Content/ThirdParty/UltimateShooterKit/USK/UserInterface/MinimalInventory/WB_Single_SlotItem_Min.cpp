class UWB_Single_SlotItem_Min_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_Single_SlotItem_Min.WB_Single_SlotItem_Min_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_Single_SlotItem_Min.WB_Single_SlotItem_Min_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_Single_SlotItem_Min.WB_Single_SlotItem_Min_C:ExecuteUbergraph_WB_Single_SlotItem_Min'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnDragEnd"), FGuid(0x258E2A53, 0x465AE679, 0x4AADFB9C, 0xC11ED735) }, 
        { FName("OnDragStart"), FGuid(0x2C09B030, 0x49632B50, 0xE9791E8B, 0xD6D6093B) }, 
        { FName("PreferedSlots"), FGuid(0xF78F721D, 0x49E0D0D2, 0xF163E3A6, 0xB4ED6F30) }, 
        { FName("InventoryWeapon"), FGuid(0xA8548968, 0x46FE1061, 0x5D8C3D8B, 0x23BBBCBC) }, 
        { FName("SlotIndex"), FGuid(0xAD950A5F, 0x487E7708, 0x45DDF996, 0xADCEA9F5) }, 
        { FName("IsEmpty"), FGuid(0x4898D548, 0x483F172E, 0x07B5018B, 0xB5EF0832) }, 
        { FName("OnRequestDrop"), FGuid(0x94E5D786, 0x48B0309B, 0xEE35ADB0, 0x039B07AD) }, 
        { FName("IsSelected"), FGuid(0xA970C25C, 0x4ADF2896, 0x2207F1B5, 0xCC68011D) }, 
        { FName("ItemUnhovered"), FGuid(0xA98D2DED, 0x475C3592, 0xEAA932B6, 0xDB03D657) }, 
        { FName("ItemHovered"), FGuid(0x5C8982C5, 0x4A28333F, 0xE245489E, 0xB26B7618) }, 
        { FName("ItemClicked"), FGuid(0xBA319A5A, 0x400FE4AE, 0xF7C13D93, 0xC939EAA0) }, 
        { FName("Item"), FGuid(0x7352D09E, 0x493295AD, 0x9A491F9D, 0x2BAFC892) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     ItemClicked = ;
     ItemHovered = ;
     ItemUnhovered = ;
     OnRequestDrop = ;
     OnDragStart = ;
     OnDragEnd = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* WeaponSlot;
    class UWB_FrameBuilder_C* WB_FrameBuilder;
    class USizeBox* SlotContainer;
    class UBorder* SlotBorder;
    class UBorder* SelectedBG;
    class UTextBlock* ItemName;
    class UOverlay* ItemContainer;
    class UBorder* IconShadow;
    class USizeBox* IconContainer;
    class UBorder* Icon;
    class UBorder* HoverBG;
    class UBorder* EmptySlotBorder;
    class UTextBlock* EmptySlot;
    class UTextBlock* EmptyName;
    class USizeBox* EmptyContainer;
    class UWB_DropContainer_Min_C* DropContainer;
    class UOverlay* DragBG;
    class UOverlay* DisabledBG;
    class UTextBlock* CurrentAmmo;
    class UWidgetSwitcher* ContentSwitcher;
    class UBorder* AccessBorder;
    class AActor* Item;
    bool IsSelected;
    bool IsEmpty;
    int SlotIndex;
    bool InventoryWeapon;
    TArray<int> PreferedSlots;

};