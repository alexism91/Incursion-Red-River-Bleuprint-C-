class UW_GCPS_InputAction_C : public UIRRInputActionWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_InputAction.W_GCPS_InputAction_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_InputAction.W_GCPS_InputAction_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_InputAction.W_GCPS_InputAction_C:ExecuteUbergraph_W_GCPS_InputAction'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Action Descriptor"), FGuid(0xA9BA79BA, 0x45B8343F, 0x0DB3A0A0, 0x36C4EACF) }, 
        { FName("Key Font Preset"), FGuid(0x4961E120, 0x46A21D46, 0x57CBC3A4, 0x94E0706F) }, 
        { FName("Action Font Preset"), FGuid(0xC4393814, 0x416EDEB0, 0xAFCF5F89, 0x12654E85) }, 
        { FName("UseIcon"), FGuid(0x6E04C59E, 0x4B29E5FD, 0xF11CE683, 0x4C77806A) }, 
        { FName("ActionText"), FGuid(0x07953BCA, 0x20803CFC, 0xAAD3DC3A, 0xBAA1582F) }, 
        { FName("BackgroundButton"), FGuid(0x483EE2B4, 0xA7713754, 0x965CCD39, 0xD999C27D) }, 
        { FName("Image_55"), FGuid(0xA947D1B0, 0x58BA3B14, 0x971AC20D, 0x76505605) }, 
        { FName("KeyText"), FGuid(0xE9FC54D7, 0x29063C46, 0x84C297D1, 0xA4339021) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x4ABEA005, 0xF1B53DFB, 0x807595C0, 0xBFA55350) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Action Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/DT_GCPS_Font_Basic.DT_GCPS_Font_Basic'",
        "RowName": FName("Header")
    };
    struct FDataTableRowHandle Key Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/DT_GCPS_Font_Basic.DT_GCPS_Font_Basic'",
        "RowName": FName("Header")
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