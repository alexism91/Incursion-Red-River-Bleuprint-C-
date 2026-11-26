class UWB_Single_Equipment_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_Single_Equipment.WB_Single_Equipment_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_Single_Equipment.WB_Single_Equipment_C:ExecuteUbergraph_WB_Single_Equipment'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Call_On_Drag_End"), FGuid(0x1F7B237C, 0x4085FB10, 0x9F36EA99, 0xE6BB2F38) }, 
        { FName("IsEmpty"), FGuid(0x08E70145, 0x475308B4, 0xDFC0BBA3, 0xF711C537) }, 
        { FName("Equipment"), FGuid(0xD4E6521E, 0x448559F5, 0xD6B38B82, 0x7B502402) }, 
        { FName("EquipmentType"), FGuid(0xDFE8B73A, 0x4C1DC912, 0x390BD1B3, 0x65B450FA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     Call_On_Drag_End = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UButton* Unequip;
    class UBorder* SelectedBG;
    class UOverlay* ItemContainer;
    class UBorder* IconShadow;
    class USizeBox* IconContainer;
    class UBorder* Icon;
    class UOverlay* DragBG;
    class UOverlay* DisabledBG;
    class UBorder* AccessBorder;
    Enum_Equipment_Type EquipmentType;
    class AActor* Equipment;
    bool IsEmpty;

};