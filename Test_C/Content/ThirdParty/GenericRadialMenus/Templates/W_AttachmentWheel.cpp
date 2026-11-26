class UW_AttachmentWheel_C : public UUMG_SimpleInputWidget_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:ShowBuild_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:ShowCategory_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:ShowFirst_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/W_AttachmentWheel.W_AttachmentWheel_C:ExecuteUbergraph_W_AttachmentWheel'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Ability Tag"), FGuid(0x87EFE3BA, 0x48513C35, 0x19CC6BA4, 0xBCA2B14B) }, 
        { FName("MousePosition"), FGuid(0x13A7739C, 0x4F46EC24, 0xE3E34E8C, 0xF9B2F9FE) }, 
        { FName("IsOpen?"), FGuid(0x3BC53CBF, 0x4347893F, 0x79AFB698, 0x3142D44F) }, 
        { FName("SelectedAction"), FGuid(0x73297390, 0x422F9FCC, 0x70F999A4, 0x61F52A81) }, 
        { FName("IconStyle"), FGuid(0x407E219D, 0x4E41D412, 0x1CAAA4A8, 0x6D164101) }, 
        { FName("GoBackSound"), FGuid(0x3F2AF9F7, 0x4439AF75, 0x2F4117A4, 0xA3E5C8A2) }, 
        { FName("CategorySelectSound"), FGuid(0x2AC6CA3E, 0x4B885AD9, 0xFD1BD39A, 0xF08D2C37) }, 
        { FName("CategoryTable"), FGuid(0x66BE107E, 0x4CEACF32, 0x2C2D1F9E, 0xBAD318F4) }, 
        { FName("SelectedBuildIndex"), FGuid(0x3E6533A4, 0x46EBD386, 0x8AFACC9B, 0xE462F0AD) }, 
        { FName("BuildSelection"), FGuid(0x61EB0816, 0x4AEE8869, 0x5D949692, 0x5520A7EB) }, 
        { FName("PickingItem"), FGuid(0xCBA52CB1, 0x495169E6, 0x0182C9B9, 0x49B598E3) }, 
        { FName("CategoryData"), FGuid(0x22E933AF, 0x41D954DD, 0x4FBEF5B7, 0xC57E9766) }, 
        { FName("SelectedCategory"), FGuid(0xA845C552, 0x434C382F, 0x992CCC91, 0xE1DD4E08) }, 
        { FName("SelectedItem"), FGuid(0x7B1E1F46, 0x40715D15, 0x44806F91, 0xA33E54E6) }, 
        { FName("Controller"), FGuid(0x0BE897E4, 0x430D6297, 0xB374A6B7, 0xDC81A033) }, 
        { FName("ShowFirst"), FGuid(0x0AAC078F, 0x53F730AB, 0xA5F8E8D4, 0x1B5E9C84) }, 
        { FName("ShowCategory"), FGuid(0xDFBD0650, 0xF55232F5, 0xB8AC8F24, 0x3EFBC435) }, 
        { FName("ShowBuild"), FGuid(0xB6D1ADD6, 0xCA993B26, 0x87900480, 0x6B5504C1) }, 
        { FName("CategoryRing"), FGuid(0x522D3601, 0xC42F3BE2, 0xB48A7A2E, 0xC38E1662) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FPTCategory CategoryData = {
        "DisplayName_2_4246A1A94D73F501F4D982B0AB0C6F68": FText("No Selection", Immutable),
        "Icon_5_5197BFE64595A4157EC339A7F30D0321": nullptr,
        "ItemTable_10_353CBFF74AA618E065F08DA87A93F166": nullptr
    };
    struct FPTItemDefinition BuildSelection = {
        "DisplayName_2_8A62226D4F71C8B6ED04A3A1A8B8DD09": FText(""),
        "Icon_5_EF08212B456051543DD59DAE15B77BC0": nullptr
    };
    class UDataTable* CategoryTable = "DataTable'Test_C/Content/ThirdParty/GenericRadialMenus/Example/BuildMenuSample/Categories.Categories'";
    class USoundWave* CategorySelectSound = "SoundWave'Engine/Content/VREditor/Sounds/UI/Camera_Shutter.Camera_Shutter'";
    class USoundWave* GoBackSound = "SoundWave'Engine/Content/VREditor/Sounds/UI/Dockable_Window_Close.Dockable_Window_Close'";
    struct FFBasicIconSettings IconStyle = {
        "AnimationStyle_2_C5857E2F4AC7D5363326C8B5363D9ADD": EIconAnimationStyles::NewEnumerator1,
        "HighlightColor_7_FCF133C849CA59F3A456E984F1122433": FLinearColor(0,625, 0,625, 0,625, 0,8),
        "UnhighlightColor_9_20CEE6F940EC3C0A462D609528F7D138": FLinearColor(0,1, 0,1, 0,1, 0,8),
        "ColorTransitionSpeed_12_2636B2604C9B6A366DD018A588954C28": 0.3
    };
    int32 SelectedAction = -1;
    struct FVector2D MousePosition = FVector2D(0, 0);
    struct FGameplayTag Ability Tag = {
        "TagName": FName("Character.Abilities.Active.AttachmentMenuOpen")
    };
    bool bHasScriptImplementedTick = true;
    class UUMG_RadialMenu_C* CategoryRing;
    class UWidgetAnimation* ShowBuild;
    class UWidgetAnimation* ShowCategory;
    class UWidgetAnimation* ShowFirst;
    class ABP_RadialInputPlayerController_C* Controller;
    FName SelectedItem;
    FName SelectedCategory;
    bool PickingItem;
    int SelectedBuildIndex;
    bool IsOpen?;

};