class UW_IRR_Gunsmith_SavePreset_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_SavePreset.W_IRR_Gunsmith_SavePreset_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_SavePreset.W_IRR_Gunsmith_SavePreset_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_SavePreset.W_IRR_Gunsmith_SavePreset_C:ExecuteUbergraph_W_IRR_Gunsmith_SavePreset'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0xF9E27F73, 0x43BF6451, 0xD0D8B993, 0x56DD79D5) }, 
        { FName("IRRTextBlock_1"), FGuid(0x5FB6D54E, 0xB8003F2A, 0x9FF2551D, 0xF933A743) }, 
        { FName("PresetName"), FGuid(0x2EBB0DBA, 0x10BB3DD2, 0x9A87757D, 0x70C4DC80) }, 
        { FName("W_IRR_Button_Small"), FGuid(0xAF52F93A, 0x4195A4F4, 0xC8B56EB5, 0x62B03209) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;
    class UEditableTextBox* PresetName;
    class UIRRTextBlock* IRRTextBlock_1;

};