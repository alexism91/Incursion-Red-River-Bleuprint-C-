class UW_InputAction_Base_C : public UIRRInputActionWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InputAction_Base.W_InputAction_Base_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InputAction_Base.W_InputAction_Base_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InputAction_Base.W_InputAction_Base_C:ExecuteUbergraph_W_InputAction_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Action Descriptor"), FGuid(0xE9AF42A0, 0x43A6F994, 0xD1E6FD84, 0x12216C7C) }, 
        { FName("Key Font Preset"), FGuid(0x485CDB9A, 0x42C7DB03, 0xBCA53AAF, 0x6F5EB631) }, 
        { FName("Action Font Preset"), FGuid(0x73D9D30F, 0x47284E79, 0xA3398D88, 0xDB028F76) }, 
        { FName("UseIcon"), FGuid(0x9851DB49, 0x4E17B4B7, 0x26441C8F, 0x3F438396) }, 
        { FName("ActionText"), FGuid(0x07953BCA, 0x20803CFC, 0xAAD3DC3A, 0xBAA1582F) }, 
        { FName("BackgroundButton"), FGuid(0x483EE2B4, 0xA7713754, 0x965CCD39, 0xD999C27D) }, 
        { FName("Image_55"), FGuid(0xA947D1B0, 0x58BA3B14, 0x971AC20D, 0x76505605) }, 
        { FName("KeyText"), FGuid(0xE9FC54D7, 0x29063C46, 0x84C297D1, 0xA4339021) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x4ABEA005, 0xF1B53DFB, 0x807595C0, 0xBFA55350) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Action Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SmallButton")
    };
    struct FDataTableRowHandle Key Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SmallButton")
    };
    struct FIRRInputActionDescriptor Action Descriptor = {
        "Name": FText(""),
        "Icon": nullptr,
        "KeyboardKey": {
            "KeyName": FName("None")
        },
        "GamepadKey": {
            "KeyName": FName("None")
        },
        "SecondaryKeys": {},
        "bConsumeInput": false,
        "bBlockInput": false,
        "ExecutorClass": nullptr
    };
    struct FDataTableRowHandle InputActionHandle = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_UI_InputActions.DT_UI_InputActions'",
        "RowName": FName("LeftNav")
    };
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UIRRTextBlock* KeyText;
    class UImage* Image_55;
    class UW_IRR_BaseButton_C* BackgroundButton;
    class UIRRTextBlock* ActionText;
    bool UseIcon;

};