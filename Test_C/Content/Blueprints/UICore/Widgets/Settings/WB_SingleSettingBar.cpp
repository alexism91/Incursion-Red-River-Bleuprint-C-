class UWB_SingleSettingBar_C : public UIRRBaseSettingBarWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:SwitchContentAnimLeft_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:SwitchContentAnimRight_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:ToggleAnim_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C:ExecuteUbergraph_WB_SingleSettingBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ClickSound"), FGuid(0xD9FD0A29, 0x4BC692B5, 0xAF917BAF, 0x5DE261FF) }, 
        { FName("FocusSound"), FGuid(0x1FB0FB79, 0x4C50BCF7, 0x437B4D99, 0x83C3E03A) }, 
        { FName("OnFocused"), FGuid(0x7732565B, 0x4112BEC8, 0xA9FA19A3, 0x60E4C149) }, 
        { FName("OnSliderValueChanged"), FGuid(0x1AF8842C, 0x4C22E840, 0xE7563483, 0x7B0B607A) }, 
        { FName("SelectedKeyInput"), FGuid(0x4CAAB042, 0x48C73F20, 0x579FE793, 0x2F7807E8) }, 
        { FName("KeyInputButtons"), FGuid(0x462EE6F0, 0x42610B1A, 0xDDCBEE9A, 0x1A4A64AE) }, 
        { FName("FocusedInputKey"), FGuid(0x07611DD3, 0x47E08922, 0x5E9C7A87, 0x7411AE6C) }, 
        { FName("OnColorChanged"), FGuid(0x375EA55F, 0x42C24A3D, 0x26A1FEBB, 0x2DD9C898) }, 
        { FName("ReceiveNavigation"), FGuid(0x9596C06B, 0x40F1D722, 0x5EB1D29E, 0x59EC185B) }, 
        { FName("OnSwitchButtonSelected"), FGuid(0x7ACE0944, 0x443830CF, 0x32E25B90, 0x4657F545) }, 
        { FName("NavigationSetup"), FGuid(0x699C0D37, 0x4AB58740, 0x09A40FB0, 0xA1F20A02) }, 
        { FName("IsSelected"), FGuid(0x1DEF4D8A, 0x4F5603B5, 0xFA93E697, 0x48E86E54) }, 
        { FName("ColorPickerDefaultColor"), FGuid(0x6C4E805B, 0x4FEB08B6, 0xBD28848B, 0xC6BE4CAB) }, 
        { FName("KeybindingBorderColor"), FGuid(0x52310E76, 0x48CF43CA, 0xA49146AC, 0x4096A992) }, 
        { FName("TitleBorderColor"), FGuid(0x1EBAC371, 0x4B5E74A0, 0x6CE5E586, 0xDD8CF9C3) }, 
        { FName("TitleBorderSize"), FGuid(0xBA04E856, 0x49027E37, 0x111AB386, 0xDEE77B81) }, 
        { FName("DescriptionColor"), FGuid(0x56197C37, 0x482C29E0, 0xBE8D5F84, 0x13908680) }, 
        { FName("TitleColor"), FGuid(0x535611CC, 0x4D600F37, 0xB68B0D8B, 0x9B720177) }, 
        { FName("DescriptionFont"), FGuid(0xEF45D6EA, 0x4059D6DD, 0x70570EA8, 0xB5E60845) }, 
        { FName("TitleFont"), FGuid(0x3E98E07F, 0x42EF066C, 0xD24E38B0, 0x54EE43BD) }, 
        { FName("DescriptionText"), FGuid(0xD324A7A1, 0x4B15851E, 0xFB3D658F, 0xF5F67F40) }, 
        { FName("Title"), FGuid(0xC6501D41, 0x488F1C9D, 0x0B6E6283, 0x4A9FA7C1) }, 
        { FName("Alignment"), FGuid(0x2B4BD618, 0x46C23266, 0x838A1098, 0x0AE3265A) }, 
        { FName("SpacerLength"), FGuid(0x8076EB15, 0x4F9F70CD, 0x114E3991, 0x10DC67F8) }, 
        { FName("SliderColor"), FGuid(0xE6EA6015, 0x4683C779, 0x30E0E9A0, 0xEB269CEE) }, 
        { FName("FractionalDigits"), FGuid(0x892785C8, 0x46ED6253, 0x64AE679D, 0xF4647E93) }, 
        { FName("Keybindings"), FGuid(0x575B135D, 0x4E7B03F9, 0xBC7730A6, 0x2C92B420) }, 
        { FName("WaitingForInputText"), FGuid(0xB3193A9D, 0x4B39869E, 0xEEB5188F, 0x1647C578) }, 
        { FName("DefaultValue"), FGuid(0xC5E9053A, 0x4A04AB5E, 0xE84E9FAF, 0xD260804C) }, 
        { FName("MaxSliderRange"), FGuid(0xACF32444, 0x4752950D, 0x256B92AA, 0xFC5B0348) }, 
        { FName("MinSliderRange"), FGuid(0xB5700513, 0x451259E6, 0xA61DEFBF, 0x6D6AC255) }, 
        { FName("SwitcherButtons"), FGuid(0x0269AC37, 0x482FEC8C, 0x27BFCFB9, 0xFC5D26C4) }, 
        { FName("HoverTextColor"), FGuid(0x3AD7B104, 0x433EBD21, 0xC7427087, 0xE364F4B5) }, 
        { FName("DefaultTextColor"), FGuid(0x3425E873, 0x45DA25CD, 0xF70CE288, 0x2D15CB7C) }, 
        { FName("TimeRemaining_TimerHandle"), FGuid(0x624637D1, 0x44B22317, 0x9BE08E9C, 0xB504ED3A) }, 
        { FName("TimeRemainingToApply"), FGuid(0x4F5E9E3C, 0x476C3A5D, 0x69DE0D8C, 0x75E0CFA9) }, 
        { FName("OnSelectionChanged"), FGuid(0x02F69128, 0x40055DE8, 0x95E87FB0, 0x24CCFB20) }, 
        { FName("CurrentSelectionIndex"), FGuid(0x7DB76F5D, 0x41E739C2, 0x9C3ED586, 0xCE726C32) }, 
        { FName("SelectionArray"), FGuid(0x116A2F7D, 0x4DAB5FD0, 0x734470A6, 0x92595717) }, 
        { FName("SettingBar"), FGuid(0xA03A2637, 0x4C561AC4, 0x1FDF3880, 0x86BDF962) }, 
        { FName("LabelShow?"), FGuid(0x5F5AC408, 0x403ABADB, 0x5A6A779C, 0xCC2D6784) }, 
        { FName("LabelContainerWidth"), FGuid(0x80A96D72, 0x4CBB1281, 0x6BD481B6, 0x733B4458) }, 
        { FName("SecondsToApply"), FGuid(0xD1166C42, 0x46EDC6C3, 0x394C2A83, 0xF02136CD) }, 
        { FName("NavigationDelay"), FGuid(0x6F542628, 0x47F711AD, 0x2C82F185, 0x3494FB97) }, 
        { FName("BarType"), FGuid(0xC22691B0, 0x4A828B1E, 0x36140D93, 0x8C9EB69D) }, 
        { FName("SwitchInProgress"), FGuid(0xB7E76C87, 0x4F683107, 0x7ED5F1BA, 0x195BA270) }, 
        { FName("ArrowHoverColor"), FGuid(0x4F327D03, 0x47E78432, 0x81B23C91, 0x5C19247F) }, 
        { FName("ArrowColor"), FGuid(0xE22CF844, 0x48A4042D, 0x697505A9, 0x6D487C72) }, 
        { FName("ToggleAnim"), FGuid(0x452B18A0, 0x754E3B4E, 0xAC6AD6A5, 0x2BC787F7) }, 
        { FName("SwitchContentAnimRight"), FGuid(0x58994283, 0x497F39A4, 0x97F0DE21, 0x3526D91F) }, 
        { FName("SwitchContentAnimLeft"), FGuid(0x92CC94A4, 0x8251355D, 0x9D59E492, 0x2D2BE51A) }, 
        { FName("BackgroundBorder"), FGuid(0xA897929D, 0x2C8D3105, 0x87717076, 0x32B1B167) }, 
        { FName("ColorPickerContainer"), FGuid(0x9DDFB9D2, 0x4EE634C7, 0x82F3D618, 0x49E30FF5) }, 
        { FName("Container"), FGuid(0x8EFC0844, 0xD197381A, 0xAC543478, 0x9F61D1B1) }, 
        { FName("KeybindingContainer"), FGuid(0x1C385840, 0x315B37C9, 0xA371F6CC, 0xB3E0B045) }, 
        { FName("LabelText"), FGuid(0x5C655FE6, 0x539D35AD, 0x935ECD41, 0x7644D232) }, 
        { FName("LableBox"), FGuid(0x0BD2E9E3, 0xB5703EA0, 0x8920E520, 0x1E51BA54) }, 
        { FName("SelectedText"), FGuid(0x7EE3F726, 0x68BD37FD, 0x8B45286A, 0xCD062290) }, 
        { FName("SelectorContainer"), FGuid(0x2FB6E699, 0x2D8B3339, 0xB4FED2D2, 0x8797CE59) }, 
        { FName("SliderContainer"), FGuid(0x2B0BA0A0, 0xA16D3D79, 0x895562CF, 0xA48B3178) }, 
        { FName("SliderProgress"), FGuid(0x4FDAFEBB, 0x9F3E398B, 0xBE1B49C2, 0xB1E9F91A) }, 
        { FName("SliderWidget"), FGuid(0x360B7188, 0x96973842, 0x9F3F9906, 0xEA1D4B9F) }, 
        { FName("SwitcherContainer"), FGuid(0xF40FB263, 0x97B7360D, 0xAEC4E3D3, 0xD6589426) }, 
        { FName("SwitcherLeftButton"), FGuid(0x479B2376, 0x47673B9B, 0xAFA5DEA0, 0x3F507ECD) }, 
        { FName("SwitcherRightButton"), FGuid(0x0D7F8AE8, 0xC91838F1, 0xBA8B1CB2, 0x517AF026) }, 
        { FName("TypeSwitcher"), FGuid(0x4AF2E16E, 0x9A9B3B63, 0xBC0E2172, 0x46DCF759) }, 
        { FName("ValueTxt"), FGuid(0xEF1CF9B8, 0x7771342C, 0x8BB9B180, 0x0DC90157) }, 
        { FName("W_IRR_Setting_Switcher"), FGuid(0xB45E80B2, 0x18943C9B, 0x86D515D0, 0x6FC01882) }, 
        { FName("WB_ColorPicker"), FGuid(0x3400AC0A, 0x65DE3C24, 0xABC24EA7, 0xD7B321AD) }, 
        { FName("WB_KeybindingGenerator"), FGuid(0xFCAD11D7, 0x92953C3F, 0xA611B186, 0xE72934BD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor ArrowColor = FLinearColor(0,515625, 0,515625, 0,515625, 1);
    struct FLinearColor ArrowHoverColor = FLinearColor(1, 1, 1, 1);
    enum Enum_SettingBarType BarType = Enum_SettingBarType::NewEnumerator2;
    double NavigationDelay = 0.10000000149011612;
    double SecondsToApply = 0.1;
    bool LabelShow? = true;
    struct FStruct_SettingBar SettingBar = {
        "SettingBarName_28_CD110B154C807614C44A5C98F4941A7C": FName("None"),
        "LabelSettings_17_C0FB3CF442EE50582D14F7910343E95C": {
            "Text_3_4CDF99D140A67A062FBAA99D135648EC": FText("Default"),
            "TextPadding_6_B6DF0DD4463B0F143734E08A446FB3A8": {
                "Left": 20,
                "Top": 20,
                "Right": 20,
                "Bottom": 20
            },
            "TextColor_9_0BF01D694F1643350058CFA4EC428B03": FLinearColor(0,645833, 0,645833, 0,645833, 1),
            "TextHoverColor_11_3899000E462149E66E471AA2955881EA": FLinearColor(1, 1, 1, 1),
            "BoxColor_13_EFDC93184FC55161A56746BB32E80479": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "BoxHoverColor_15_1A2793134154384754D072A05A26C9A2": FLinearColor(0,328125, 0,328125, 0,328125, 1),
            "Font_18_FDC4E3534AB8FAD3EFFA4AB2E486374A": {
                "FontObject": "Font'Test_C/Content/ThirdParty/CompShooterHUD/Fonts/CONSOLA_Font.CONSOLA_Font'",
                "FontMaterial": nullptr,
                "OutlineSettings": {
                    "OutlineSize": 0,
                    "bMiteredCorners": false,
                    "bSeparateFillAlpha": false,
                    "bApplyOutlineToDropShadows": false,
                    "OutlineMaterial": nullptr,
                    "OutlineColor": FLinearColor(0, 0, 0, 1)
                },
                "TypefaceFontName": FName("Default"),
                "Size": 16,
                "LetterSpacing": 0,
                "SkewAmount": 0,
                "bForceMonospaced": false,
                "bMaterialIsStencil": false,
                "MonospacedWidth": 1
            }
        },
        "BackgroundColor_4_252B27624660A59527D95A9664E9827B": FLinearColor(0,020833, 0,020833, 0,020833, 0,5),
        "BorderSetup_7_2F0809E544A66292684609810721AB88": {
            "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(1, 1, 1, 1),
            "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                "Left": 3,
                "Top": 3,
                "Right": 3,
                "Bottom": 3
            }
        },
        "HoverBorderColor_10_2E59BE1C4C6F3B380C9A0BBA4A813E84": FLinearColor(1, 1, 1, 1),
        "TopShadowColor_24_5CF6DEDB4BB5E36BF91735A07F939E9E": FLinearColor(0, 0, 0, 0,3),
        "BottomShadowColor_26_C6255FB1449340BE01851AABD05F2DFF": FLinearColor(0, 0, 0, 0,3)
    };
     OnSelectionChanged = ;
    struct FTimerHandle TimeRemaining_TimerHandle = {
        "Handle": 0
    };
    struct FLinearColor DefaultTextColor = FLinearColor(1, 0, 1, 1);
    struct FLinearColor HoverTextColor = FLinearColor(1, 0, 1, 1);
    TArray<struct FStruct_SwitchButtonSettings> SwitcherButtons = {
        {
            "IsEnabled?_36_DECE149D4B6608431665819D0EEFE3E4": true,
            "Selected?_12_8E48857549B745F32A31BD9A0F7F2CC7": true,
            "ButtonName_34_E3F2B917464FAACB92003EAAC275B991": FName("None"),
            "LabelText_9_BBA5648848F65E26AFE3869BF7497603": FText("ON"),
            "TextColor_25_0BCF1C864A9B73B545C1DFA3D27CC8AC": FLinearColor(0,244792, 0,244792, 0,244792, 1),
            "HoveredTextColor_26_4D8F878F4F2EE35965DB08AABE7B9B87": FLinearColor(1, 1, 1, 1),
            "SelectedTextColor_27_51EBA417414F5CB026BEB99C0E615A83": FLinearColor(0,010417, 0,010417, 0,010417, 1),
            "BackgroundColor_28_126582BE4E04933DE9290B9927217368": FLinearColor(0, 0, 0, 0,4),
            "HoveredBackgroundColor_29_8FF94E854A3599DF95B466973D29A404": FLinearColor(0,015625, 0,015625, 0,015625, 1),
            "SelectedBackgroundColor_30_54E3839443AA3AFAE3EEE783F48E633A": FLinearColor(0,817708, 0,817708, 0,817708, 1)
        },
        {
            "IsEnabled?_36_DECE149D4B6608431665819D0EEFE3E4": true,
            "Selected?_12_8E48857549B745F32A31BD9A0F7F2CC7": false,
            "ButtonName_34_E3F2B917464FAACB92003EAAC275B991": FName("None"),
            "LabelText_9_BBA5648848F65E26AFE3869BF7497603": FText("OFF"),
            "TextColor_25_0BCF1C864A9B73B545C1DFA3D27CC8AC": FLinearColor(0,244792, 0,244792, 0,244792, 1),
            "HoveredTextColor_26_4D8F878F4F2EE35965DB08AABE7B9B87": FLinearColor(1, 1, 1, 1),
            "SelectedTextColor_27_51EBA417414F5CB026BEB99C0E615A83": FLinearColor(0,010417, 0,010417, 0,010417, 1),
            "BackgroundColor_28_126582BE4E04933DE9290B9927217368": FLinearColor(0, 0, 0, 0,4),
            "HoveredBackgroundColor_29_8FF94E854A3599DF95B466973D29A404": FLinearColor(0,015625, 0,015625, 0,015625, 1),
            "SelectedBackgroundColor_30_54E3839443AA3AFAE3EEE783F48E633A": FLinearColor(0,817708, 0,817708, 0,817708, 1)
        }
    };
    double MaxSliderRange = 1;
    double DefaultValue = 0.5;
    FText WaitingForInputText = FText("...", CultureInvariant);
    TArray<struct FStruct_InputKeyInfo> Keybindings = {
        {
            "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
            "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
            "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
            "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
            "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
        },
        {
            "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
            "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
            "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
            "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
            "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
        }
    };
    struct FLinearColor SliderColor = FLinearColor(0,817708, 0,817708, 0,817708, 1);
    double SpacerLength = 1;
    FText Title = FText("Title", CultureInvariant);
    FText DescriptionText = FText("Description", CultureInvariant);
    struct FSlateFontInfo TitleFont = {
        "FontObject": "Font'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Fonts/Roboto/Roboto.Roboto'",
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": false,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("Medium"),
        "Size": 15,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    struct FSlateFontInfo DescriptionFont = {
        "FontObject": "Font'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Fonts/Roboto/Roboto.Roboto'",
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": false,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("Medium"),
        "Size": 10,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    struct FLinearColor TitleColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor DescriptionColor = FLinearColor(0,609375, 0,609375, 0,609375, 1);
    double TitleBorderSize = 3;
    struct FLinearColor TitleBorderColor = FLinearColor(0,333333, 0,333333, 0,333333, 1);
    struct FLinearColor KeybindingBorderColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor ColorPickerDefaultColor = FLinearColor(1, 1, 1, 1);
    struct FStruct_NavigationKeyAction NavigationSetup = {
        "Up_19_A298BCD64B586E2F72B60C8B325F0A95": Enum_NavigationAction::NewEnumerator2,
        "Down_20_88744096491734A35EB809AA2992D210": Enum_NavigationAction::NewEnumerator2,
        "Left_21_B9299E9C4AF26B63AFD5C4BDEDF7DC25": Enum_NavigationAction::NewEnumerator2,
        "Right_22_4B287C72473B1032B81D63B7A3064693": Enum_NavigationAction::NewEnumerator2,
        "CustomPossibleTargetButtonNames_46_9EBD521040E9B3B3D7436B9FEE34B196": {}
    };
     OnSwitchButtonSelected = ;
    bool ReceiveNavigation = true;
     OnColorChanged = ;
     OnSliderValueChanged = ;
     OnFocused = ;
    class UAkAudioEvent* FocusSound = "AkAudioEvent'Test_C/Content/Soundbanks/Events/Default_Work_Unit/UI/GUI_Hover.GUI_Hover'";
    class UAkAudioEvent* ClickSound = "AkAudioEvent'Test_C/Content/Soundbanks/Events/Default_Work_Unit/UI/GUI_Confirm.GUI_Confirm'";
    struct FMargin Padding = {
        "Top": 5
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_KeybindingGenerator_C* WB_KeybindingGenerator;
    class UWB_ColorPicker_C* WB_ColorPicker;
    class UW_IRR_Setting_Switcher_C* W_IRR_Setting_Switcher;
    class UIRRTextBlock* ValueTxt;
    class UWidgetSwitcher* TypeSwitcher;
    class UW_IRR_ArrowButton_C* SwitcherRightButton;
    class UW_IRR_ArrowButton_C* SwitcherLeftButton;
    class UOverlay* SwitcherContainer;
    class USlider* SliderWidget;
    class UProgressBar* SliderProgress;
    class USizeBox* SliderContainer;
    class UHorizontalBox* SelectorContainer;
    class UIRRTextBlock* SelectedText;
    class USizeBox* LableBox;
    class UIRRTextBlock* LabelText;
    class UVerticalBox* KeybindingContainer;
    class UOverlay* Container;
    class UVerticalBox* ColorPickerContainer;
    class UBorder* BackgroundBorder;
    class UWidgetAnimation* SwitchContentAnimLeft;
    class UWidgetAnimation* SwitchContentAnimRight;
    class UWidgetAnimation* ToggleAnim;
    bool SwitchInProgress;
    double LabelContainerWidth;
    TArray<FName> SelectionArray;
    int CurrentSelectionIndex;
    double TimeRemainingToApply;
    double MinSliderRange;
    int FractionalDigits;
    byte Alignment;
    bool IsSelected;
    int FocusedInputKey;
    TArray<class UWB_KeyBindingButton_C*>* KeyInputButtons;
    class UWB_KeyBindingButton_C* SelectedKeyInput;

};