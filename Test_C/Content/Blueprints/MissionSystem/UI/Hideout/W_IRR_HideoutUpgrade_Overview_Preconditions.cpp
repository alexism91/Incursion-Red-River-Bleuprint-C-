class UW_IRR_HideoutUpgrade_Overview_Preconditions_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Preconditions.W_IRR_HideoutUpgrade_Overview_Preconditions_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Preconditions.W_IRR_HideoutUpgrade_Overview_Preconditions_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Preconditions.W_IRR_HideoutUpgrade_Overview_Preconditions_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Preconditions'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ConditionResult"), FGuid(0xFD716E6D, 0x4525FAF8, 0xE611F4AF, 0xA3D95D43) }, 
        { FName("TrueFont"), FGuid(0xCAE82664, 0x4FD3EAC2, 0x3E769C90, 0x4DD2710B) }, 
        { FName("FalseFont"), FGuid(0xF0D0D452, 0x438EA931, 0x0D0CA387, 0x524A9D5C) }, 
        { FName("Condition"), FGuid(0x5B8AA9F5, 0x4D884911, 0x57D9328A, 0xB7F317CF) }, 
        { FName("Unit"), FGuid(0x3737CB6F, 0x427E498E, 0x5197DA91, 0x327DD821) }, 
        { FName("BackgroundBorder"), FGuid(0xA3FE799E, 0x4C0096DC, 0x249B9086, 0x45572520) }, 
        { FName("BoolProgressSwitcher"), FGuid(0xCC5D06D3, 0x420F262F, 0xEB362599, 0xACBB2E54) }, 
        { FName("Image"), FGuid(0xD1EAD636, 0x48250275, 0xEAB87295, 0x9FEE39F0) }, 
        { FName("Image_253"), FGuid(0x01914AF9, 0x402E4A03, 0x9B04899B, 0x888BF1DD) }, 
        { FName("IRRTextBlock"), FGuid(0x8FFF9C1B, 0x4DADBEF6, 0xF0E60B9C, 0xDBECA3AF) }, 
        { FName("W_IRR_TabButton_Big"), FGuid(0xD3B6548B, 0x4341B4B8, 0x33CF1887, 0x068374EB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle FalseFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailExtra")
    };
    struct FDataTableRowHandle TrueFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SmallTitle")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_TabButton_Big_C* W_IRR_TabButton_Big;
    class UIRRTextBlock* IRRTextBlock;
    class UImage* Image_253;
    class UImage* Image;
    class UWidgetSwitcher* BoolProgressSwitcher;
    class UBorder* BackgroundBorder;
    class UIRRHideoutUnitComponent* Unit;
    class UIRRHideoutCondition* Condition;
    bool ConditionResult;

};