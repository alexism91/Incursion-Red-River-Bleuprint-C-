class UWB_SwitchButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_SwitchButton.WB_SwitchButton_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_SwitchButton.WB_SwitchButton_C:ShadowAnim_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_SwitchButton.WB_SwitchButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_SwitchButton.WB_SwitchButton_C:ExecuteUbergraph_WB_SwitchButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnUnHovered"), FGuid(0xB1FE1DD3, 0x4896F2C8, 0xEC4968B2, 0x0C8AAFDC) }, 
        { FName("OnHovered"), FGuid(0x6EFEFB22, 0x45E170F7, 0xA1932A84, 0xF3508C53) }, 
        { FName("OnClicked"), FGuid(0x13BD788A, 0x4FA14190, 0x32AFF4AC, 0x2F1B857F) }, 
        { FName("IsFocused"), FGuid(0x347B1A18, 0x4780B0C5, 0xF7567794, 0x1FAC51F0) }, 
        { FName("IsSelected"), FGuid(0x12E60ED8, 0x4353303A, 0x4F658D92, 0x7FEE176E) }, 
        { FName("ButtonSettings"), FGuid(0x164A6A92, 0x4C7DD48F, 0x2FE331B1, 0xC873EA07) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_SwitchButtonSettings ButtonSettings = {
        "IsEnabled?_36_DECE149D4B6608431665819D0EEFE3E4": true,
        "Selected?_12_8E48857549B745F32A31BD9A0F7F2CC7": false,
        "ButtonName_34_E3F2B917464FAACB92003EAAC275B991": FName("None"),
        "LabelText_9_BBA5648848F65E26AFE3869BF7497603": FText("ON"),
        "TextColor_25_0BCF1C864A9B73B545C1DFA3D27CC8AC": FLinearColor(0,244792, 0,244792, 0,244792, 1),
        "HoveredTextColor_26_4D8F878F4F2EE35965DB08AABE7B9B87": FLinearColor(1, 1, 1, 1),
        "SelectedTextColor_27_51EBA417414F5CB026BEB99C0E615A83": FLinearColor(0,010417, 0,010417, 0,010417, 1),
        "BackgroundColor_28_126582BE4E04933DE9290B9927217368": FLinearColor(0, 0, 0, 0,4),
        "HoveredBackgroundColor_29_8FF94E854A3599DF95B466973D29A404": FLinearColor(0,011765, 0,011765, 0,011765, 1),
        "SelectedBackgroundColor_30_54E3839443AA3AFAE3EEE783F48E633A": FLinearColor(0,817708, 0,817708, 0,817708, 1)
    };
     OnClicked = ;
     OnHovered = ;
     OnUnHovered = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UButton* SwitcherButton;
    class UOverlay* Shadows;
    class UBorder* RightShadow;
    class UBorder* LeftShadow;
    class UTextBlock* Label;
    class UOverlay* HorizontalShadow;
    class UBorder* BottomShadow;
    class UBorder* Blocker;
    class UBorder* Background;
    class UWidgetAnimation* ShadowAnim;
    bool IsSelected;
    bool IsFocused;

};