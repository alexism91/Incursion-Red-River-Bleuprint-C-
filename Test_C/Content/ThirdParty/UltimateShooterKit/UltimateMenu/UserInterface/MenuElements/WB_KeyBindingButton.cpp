class UWB_KeyBindingButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_KeyBindingButton.WB_KeyBindingButton_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_KeyBindingButton.WB_KeyBindingButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_KeyBindingButton.WB_KeyBindingButton_C:ExecuteUbergraph_WB_KeyBindingButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LeftMouseButton"), FGuid(0x733E6ABB, 0x49A66C22, 0x7A9E1D95, 0xA6D43CC5) }, 
        { FName("Mapping Context"), FGuid(0x3C753176, 0x48864AB7, 0xEA9B11AF, 0x8590F515) }, 
        { FName("OnHovered"), FGuid(0xDA02E4D4, 0x4FF49AA5, 0x1DEB2CBE, 0xBCFB91B3) }, 
        { FName("OnClicked"), FGuid(0x3085ACD7, 0x413CF495, 0x48262BBA, 0x3FE497D3) }, 
        { FName("EmptyKey"), FGuid(0x53BEEFC5, 0x4751CA51, 0xD30DF0AB, 0x7BAB41B5) }, 
        { FName("OnKeyListenerEnd"), FGuid(0x8D660A4A, 0x4A00FF12, 0xAB0C54A1, 0xF60512D1) }, 
        { FName("ReceivedKey"), FGuid(0x2B25917F, 0x490A9189, 0x5B5264A6, 0x4B6035B8) }, 
        { FName("IsFocused"), FGuid(0x2ABB863F, 0x4819888E, 0x5F8AFE8A, 0xC4B21183) }, 
        { FName("KeyInfo"), FGuid(0x161862B5, 0x40A135B8, 0x3312529B, 0x7EC1AE71) }, 
        { FName("CurrentKey"), FGuid(0x85614BC6, 0x4F16F4EE, 0x20039281, 0xA351F8C6) }, 
        { FName("KeyBindingButton"), FGuid(0x4B7617B9, 0x3E373C60, 0x8ECFB1DE, 0xABE32AB6) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FKey CurrentKey = {
        "KeyName": FName("None")
    };
    struct FStruct_InputKeyInfo KeyInfo = {
        "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
        "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
        "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
        "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
        "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
    };
    struct FKey ReceivedKey = {
        "KeyName": FName("None")
    };
     OnKeyListenerEnd = ;
    struct FKey EmptyKey = {
        "KeyName": FName("None")
    };
     OnClicked = ;
     OnHovered = ;
    class UInputMappingContext* Mapping Context = "InputMappingContext'Test_C/Content/Blueprints/InputSystem/IM_PlayerEnhancedInputMapping.IM_PlayerEnhancedInputMapping'";
    struct FKey LeftMouseButton = {
        "KeyName": FName("LeftMouseButton")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseButton_C* KeyBindingButton;
    bool IsFocused;

};