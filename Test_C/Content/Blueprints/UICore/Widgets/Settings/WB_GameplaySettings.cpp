class UWB_GameplaySettings_C : public UIRRBaseSettingPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GameplaySettings.WB_GameplaySettings_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GameplaySettings.WB_GameplaySettings_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GameplaySettings.WB_GameplaySettings_C:ExecuteUbergraph_WB_GameplaySettings'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DefaultGameplaySettings"), FGuid(0x9F81A22C, 0x42072F80, 0xD1DE0EB7, 0x669B71FE) }, 
        { FName("CrosshairColorValue"), FGuid(0x032D45B0, 0x4677FB66, 0x2E6699A9, 0x2A9AFAF5) }, 
        { FName("AimedMouseSensitivity_Slider"), FGuid(0x81B92B17, 0x570336B9, 0xBBFE5C7F, 0xF132A9F3) }, 
        { FName("CameraSmoothing"), FGuid(0xDC58E2A3, 0xE4EE31CC, 0x9DED5ECC, 0xD9CEEF4F) }, 
        { FName("FreeLookMouseSensitivity_Slider"), FGuid(0xD3892E6E, 0xEFB037F2, 0xBFFB0C52, 0x1C0270DF) }, 
        { FName("HeadMovement"), FGuid(0xA37D8103, 0x4686F4C6, 0xD08D2C8A, 0xCC1C8712) }, 
        { FName("InvertMouse_X"), FGuid(0xD2F46482, 0xAB3D3A5E, 0xA1FE7FFF, 0x1BFA5D01) }, 
        { FName("InvertMouse_Y"), FGuid(0xFD888397, 0x09F73346, 0xBE74EEF3, 0xF87C0A4A) }, 
        { FName("Language"), FGuid(0x68EF7922, 0x44B66831, 0x0A85FDBC, 0x32B5B43A) }, 
        { FName("MouseSensitivity_Slider"), FGuid(0x6B6CEC7C, 0x8A4C3B3B, 0x9C739F08, 0xD999108F) }, 
        { FName("PlayerOutfit"), FGuid(0xF78F4772, 0x426FBFF4, 0xC1616BB1, 0xA1DFD0B4) }, 
        { FName("ToggleAim"), FGuid(0x0041168A, 0x91783DE9, 0x8D59D4A7, 0xEB6BA03A) }, 
        { FName("ToggleAutoReady"), FGuid(0x7B851483, 0x446CC5DC, 0x9A54C3A0, 0x426C7B03) }, 
        { FName("ToggleCompass"), FGuid(0xC5728C4E, 0xB62A3987, 0x856F7B83, 0xA9AF455F) }, 
        { FName("ToggleCrouch"), FGuid(0x9A05A8FD, 0x013C35A5, 0x8765660C, 0xF508E61D) }, 
        { FName("ToggleGCPS_Beeping"), FGuid(0xC18BE0C1, 0x4B6A2156, 0xDC693A9E, 0x0ABEDEA6) }, 
        { FName("ToggleHolster"), FGuid(0x0109AA79, 0x2CBE3557, 0x96EC3B85, 0x48759CDC) }, 
        { FName("ToggleLean"), FGuid(0x83F89EEA, 0x6AE53FF1, 0x870B697D, 0xF8FA6962) }, 
        { FName("ToggleMalfunction"), FGuid(0xE1D9A546, 0xEE953CF9, 0xBCA6137B, 0xDEB6F292) }, 
        { FName("ToggleNameplate"), FGuid(0x8923DD1D, 0xD9E83AFD, 0x9935417C, 0x5220E915) }, 
        { FName("ToggleRun"), FGuid(0x1A721D8D, 0x20A033AA, 0xBA3E1EFC, 0x07193103) }, 
        { FName("ToggleSneak"), FGuid(0x8BA0AB75, 0xD1A93E3D, 0x9B8301F2, 0x53DAEE64) }, 
        { FName("ToggleStaminaAndHealth"), FGuid(0x047934A8, 0x00863466, 0xA61FFF23, 0x5285E854) }, 
        { FName("ViewmodelFOV"), FGuid(0xABE78063, 0x49566452, 0x27953291, 0x3744A35D) }, 
        { FName("ViewmodelOffsetX"), FGuid(0x94C22499, 0x4B286EF4, 0x5D8E3B82, 0x6E5B1A40) }, 
        { FName("ViewmodelOffsetY"), FGuid(0x0EDE91F6, 0x40C38C7C, 0xA7940993, 0xA15638EA) }, 
        { FName("ViewmodelOffsetZ"), FGuid(0xDEFF0CBB, 0x45BC2491, 0x9931C79E, 0xD2EEE63F) }, 
        { FName("W_InventorySection"), FGuid(0x6C63726F, 0xB3913F5D, 0xA6D76A3C, 0xC0B7A514) }, 
        { FName("W_InventorySection_1"), FGuid(0xEB844FFF, 0x5F8E3C3D, 0xB5EE7CF8, 0xD874C81A) }, 
        { FName("W_InventorySection_2"), FGuid(0xB93759A8, 0x84D23703, 0xACC97C8A, 0xB48D3E5A) }, 
        { FName("W_InventorySection_3"), FGuid(0x3C7CE541, 0x44722B92, 0xADE10F98, 0xDA63D497) }, 
        { FName("W_InventorySection_4"), FGuid(0x4F350EC1, 0x45A25903, 0x1A92B585, 0x3CECE078) }, 
        { FName("W_IRR_ScrollBox"), FGuid(0x836B78C7, 0x1FC13492, 0x91171F05, 0xE921D42E) }, 
        { FName("WB_SettingInfo"), FGuid(0xE68AAF0E, 0xD5743CF0, 0xA30CEC2C, 0x195A4FE4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor CrosshairColorValue = FLinearColor(0, 0, 0, 0);
    struct FQUA_ControllerSettings DefaultGameplaySettings = {
        "ToggleRun": true,
        "ToggleSneak": true,
        "ToggleCrouch": true,
        "ToggleAim": true,
        "ToggleLean": true,
        "ToggleHolster": true,
        "MouseSensitivity": 0.5,
        "CameraSmoothRate": 20,
        "InvertMouseX": false,
        "InvertMouseY": false,
        "FreeLookLimit": FVector2D(50, 40),
        "FreeLookBlendOutSpeed": 3
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SettingInfo_C* WB_SettingInfo;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox;
    class UW_InventorySection_C* W_InventorySection_4;
    class UW_InventorySection_C* W_InventorySection_3;
    class UW_InventorySection_C* W_InventorySection_2;
    class UW_InventorySection_C* W_InventorySection_1;
    class UW_InventorySection_C* W_InventorySection;
    class UWB_SingleSettingBar_C* ViewmodelOffsetZ;
    class UWB_SingleSettingBar_C* ViewmodelOffsetY;
    class UWB_SingleSettingBar_C* ViewmodelOffsetX;
    class UWB_SingleSettingBar_C* ViewmodelFOV;
    class UWB_SingleSettingBar_C* ToggleStaminaAndHealth;
    class UWB_SingleSettingBar_C* ToggleSneak;
    class UWB_SingleSettingBar_C* ToggleRun;
    class UWB_SingleSettingBar_C* ToggleNameplate;
    class UWB_SingleSettingBar_C* ToggleMalfunction;
    class UWB_SingleSettingBar_C* ToggleLean;
    class UWB_SingleSettingBar_C* ToggleHolster;
    class UWB_SingleSettingBar_C* ToggleGCPS_Beeping;
    class UWB_SingleSettingBar_C* ToggleCrouch;
    class UWB_SingleSettingBar_C* ToggleCompass;
    class UWB_SingleSettingBar_C* ToggleAutoReady;
    class UWB_SingleSettingBar_C* ToggleAim;
    class UWB_SingleSettingBar_C* PlayerOutfit;
    class UWB_SingleSettingBar_C* MouseSensitivity_Slider;
    class UWB_SingleSettingBar_C* Language;
    class UWB_SingleSettingBar_C* InvertMouse_Y;
    class UWB_SingleSettingBar_C* InvertMouse_X;
    class UWB_SingleSettingBar_C* HeadMovement;
    class UWB_SingleSettingBar_C* FreeLookMouseSensitivity_Slider;
    class UWB_SingleSettingBar_C* CameraSmoothing;
    class UWB_SingleSettingBar_C* AimedMouseSensitivity_Slider;

};