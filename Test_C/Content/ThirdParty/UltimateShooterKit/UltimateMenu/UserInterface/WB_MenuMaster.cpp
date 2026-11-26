class UWB_MenuMaster_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "BackgroundBlur_0",
            "PropertyName": FName("Visibility"),
            "FunctionName": FName("GetVisibility_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetVisibility_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:ContentIN_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:ContentOut_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:ContentFadeOut_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:ContentFadeIN_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:Empty_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/WB_MenuMaster.WB_MenuMaster_C:ExecuteUbergraph_WB_MenuMaster'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NotificationTimer"), FGuid(0x6F13B92F, 0x47AE3207, 0x3200AEB9, 0x149088C1) }, 
        { FName("NotificationPool"), FGuid(0xBDF6668E, 0x48FBB445, 0x33E3F5BB, 0x41BE248F) }, 
        { FName("Animation Playback Speed"), FGuid(0xF64D9D4B, 0x48DCAEBB, 0xA06D9485, 0x08510320) }, 
        { FName("InventoryCanvasToggled"), FGuid(0xC3CA610E, 0x415D05F3, 0x2B9D8FBE, 0x65F1065D) }, 
        { FName("ContextCanvas"), FGuid(0x36719E75, 0x4E8A2BD3, 0x12D7E9BB, 0x1D3B4B6A) }, 
        { FName("WindowCanvas"), FGuid(0xB2AAA2EA, 0x45985B64, 0x739B09B9, 0xE846B547) }, 
        { FName("InspectorCanvas"), FGuid(0x454DE8DA, 0x4B3AD5CB, 0xDEA1AB95, 0xA43BE8C4) }, 
        { FName("SavedGames"), FGuid(0x4DFE7CB3, 0x46615603, 0xD31789AC, 0xB0D99BC0) }, 
        { FName("SelectedPlayerName"), FGuid(0xCF8ADF43, 0x462376EA, 0x356FD6B2, 0x51BBEE67) }, 
        { FName("InputDisabled"), FGuid(0x59642BD0, 0x442A290A, 0x27D1E7B7, 0x858D40C9) }, 
        { FName("CheckCursor"), FGuid(0x36AAC099, 0x4945567F, 0x6EB75590, 0xD70FC017) }, 
        { FName("LastKeyIsGamepadKey"), FGuid(0x3F0A1435, 0x4B33DEAF, 0x42A8AFB8, 0x322DB92F) }, 
        { FName("IsCursorVisible"), FGuid(0xA6A7B148, 0x4EE83394, 0x49CA44A9, 0x01969093) }, 
        { FName("IsFocusedToColorPicker"), FGuid(0xB150E6A5, 0x42A9EF6C, 0x5C8A19A1, 0xDDE80F7B) }, 
        { FName("IsFocusedToEntryBox"), FGuid(0xB70C4A48, 0x42BD701F, 0x5D4A7FAE, 0x99127590) }, 
        { FName("WaitingForInput"), FGuid(0xA98275E7, 0x40C444E1, 0x1C64C3BA, 0x03FC3DC8) }, 
        { FName("FocusedToSubTab"), FGuid(0x1552C162, 0x4C616D67, 0xE365FC84, 0x97ABF4EB) }, 
        { FName("IsWaitingToFocusTab"), FGuid(0xC5EDD584, 0x47B189BB, 0xA76828B8, 0xB503607E) }, 
        { FName("CanNavigate"), FGuid(0xCEFB6BC9, 0x44C311DF, 0x30068197, 0xCCCC7A57) }, 
        { FName("NavigatingByKeys"), FGuid(0x46E869E0, 0x491D04BA, 0x82D1458F, 0xD338E55C) }, 
        { FName("IsPreviousContent"), FGuid(0x939B5F51, 0x41E13998, 0x64D5F3B5, 0x8DD68D16) }, 
        { FName("OnNavigableClicked"), FGuid(0xD0F3CA65, 0x4F88A959, 0xF5EA1FAD, 0x822D4086) }, 
        { FName("OnNavigableUnHovered"), FGuid(0x5278A519, 0x48F4F622, 0x0C05DFBE, 0x5211F592) }, 
        { FName("OnNavigableHovered"), FGuid(0xA4FD473B, 0x44DE8D30, 0x988B0A87, 0x696E50FE) }, 
        { FName("CurrentTilt"), FGuid(0xBA158694, 0x43ED2309, 0x92AD3681, 0x3744B957) }, 
        { FName("MouseDeltaTimer"), FGuid(0x19C59C66, 0x4AE3D987, 0x4ABB289A, 0xF1E76CF1) }, 
        { FName("LastCursorPosition"), FGuid(0x47284B84, 0x48461905, 0x4A2047AD, 0x345AC90B) }, 
        { FName("LastFocusedKeyInput"), FGuid(0xC28102DA, 0x4B995B18, 0x8F5726BC, 0x6FEE32E5) }, 
        { FName("LastFocusedSwitcherIndex"), FGuid(0xD7255648, 0x4A662CAA, 0x7EF9048C, 0x6E3D0936) }, 
        { FName("FocusedKeyListener"), FGuid(0x6DB16A52, 0x409D22DD, 0x036479A5, 0xB59001BE) }, 
        { FName("RequestPopup"), FGuid(0xEEDD37A2, 0x43B7D1A3, 0xA8E785BF, 0x928A59A4) }, 
        { FName("LastContent"), FGuid(0x431A7D0E, 0x428A50ED, 0x496E60BD, 0xACDE7339) }, 
        { FName("KeybindingSettingBars"), FGuid(0x73BB57D8, 0x4915B2F0, 0xF6946FA7, 0x2F29F0BA) }, 
        { FName("CurrentNavigables"), FGuid(0xDB4610ED, 0x4FE60224, 0x3685048C, 0xF09F8E49) }, 
        { FName("FocusableStepMap"), FGuid(0x5DE888CC, 0x427EE60D, 0x92D4B084, 0xEBE1B9E3) }, 
        { FName("ContentStepMap"), FGuid(0xD8BF9C1B, 0x4A48ABD1, 0xEAFDB49D, 0x97D3ACA1) }, 
        { FName("CurrentMenuType"), FGuid(0xE3781287, 0x430867C4, 0x0D9917BD, 0x40C84F69) }, 
        { FName("ContentAnimationType"), FGuid(0xD0A87C18, 0x4095F044, 0xFFFC7BAD, 0x7B30A56E) }, 
        { FName("TargetContentClass"), FGuid(0x9F7CF9E9, 0x4E726CFC, 0x55EA2896, 0x265786CC) }, 
        { FName("FocusedTabConstructor"), FGuid(0x0630456C, 0x45017156, 0xEA37C695, 0x9C25C8DC) }, 
        { FName("FocusedNavigable"), FGuid(0x8A66D688, 0x49F7AC0E, 0xBDBF84BF, 0x61BEA7B4) }, 
        { FName("LastFocusedNavigable"), FGuid(0x89EFC524, 0x46636061, 0x7D74299D, 0x195C5250) }, 
        { FName("EmptyContent"), FGuid(0x0AB09173, 0x40B589A6, 0xA617F785, 0xA7A44096) }, 
        { FName("CurrentContent"), FGuid(0x8BAA6653, 0x4CE480E1, 0x354BFB98, 0x04470D54) }, 
        { FName("PooledWidgets"), FGuid(0x696E437E, 0x43D6B56C, 0xB69B86A0, 0x46849D03) }, 
        { FName("DeleteKeys"), FGuid(0x29942854, 0x423E7A73, 0xD9CF119D, 0xB94D105D) }, 
        { FName("SelectKeys"), FGuid(0x003739FD, 0x4D5051E3, 0xF2F091B3, 0xA4FBB9BD) }, 
        { FName("RightKeys"), FGuid(0xE782A81D, 0x4D7C3C6C, 0x64179D8F, 0x5764B2A1) }, 
        { FName("LeftKeys"), FGuid(0x9362E026, 0x43A0E86C, 0x7C77489E, 0x3BDE8C4E) }, 
        { FName("DownKeys"), FGuid(0x3B3E4DA4, 0x4596A68F, 0x0B2F23B3, 0x1EABCFDC) }, 
        { FName("UpKeys"), FGuid(0x18D02ADA, 0x46633F86, 0xB6453484, 0xBA0837F5) }, 
        { FName("BackKeys"), FGuid(0x7381C7F0, 0x450FC9BB, 0x060541A1, 0xC503F03E) }, 
        { FName("CyclePrevKeys"), FGuid(0x485C09DA, 0x4A241EBA, 0x35EE3795, 0x7FF9F149) }, 
        { FName("CycleNextKeys"), FGuid(0xA33BCEFE, 0x44621735, 0x5B07EC8C, 0xEEF1DFFF) }, 
        { FName("ContentToggleDelay"), FGuid(0x6E5509C0, 0x43C9C6F0, 0x17E9BB89, 0xFAF57FB7) }, 
        { FName("NavigationDelay"), FGuid(0x0DAE8FB2, 0x4C929C0B, 0x22394AA4, 0xC062D69B) }, 
        { FName("AspectRatioWindowSize"), FGuid(0xCE378660, 0x4948D0B0, 0x8094B688, 0x41EE6421) }, 
        { FName("EnableTilt"), FGuid(0x41F83844, 0x459ED673, 0x7CD7FAAA, 0x3041F246) }, 
        { FName("WidgetPool"), FGuid(0x44C12554, 0x4D89FFCB, 0xEA89AA8E, 0xF754DFB1) }, 
        { FName("ContentSwitcher"), FGuid(0x2016986A, 0x4EAE685A, 0xD4E52F85, 0x3258D070) }, 
        { FName("BlockingOverlay"), FGuid(0x160CE690, 0x412ACE90, 0xE695C884, 0xFEAB1DA0) }, 
        { FName("Empty"), FGuid(0x77998C36, 0x21713708, 0xB59579A4, 0xFA6C2295) }, 
        { FName("ContentFadeIN"), FGuid(0xD9488DB3, 0xB46E32C4, 0xAD572452, 0x12A8C159) }, 
        { FName("ContentFadeOut"), FGuid(0xA06E5B32, 0x743D36E2, 0xA459DF8D, 0x57E5AC8B) }, 
        { FName("ContentOut"), FGuid(0x87C01EE4, 0x8C9D3B40, 0xBF77C066, 0xA50BADD8) }, 
        { FName("ContentIN"), FGuid(0x57B39D38, 0xC2953FDF, 0x9099ADE6, 0x5C7D873C) }, 
        { FName("BackgroundBlur_0"), FGuid(0x0F6AE152, 0x588F31C6, 0x8C3326E8, 0x93EAA723) }, 
        { FName("MainContentPanel"), FGuid(0x518F3337, 0x9F7735A6, 0x8F6E09AE, 0x2CAE6B59) }, 
        { FName("MainNotificationPanel"), FGuid(0x9A9C7B30, 0xB1DF39FE, 0xBD464470, 0x1CC4995A) }, 
        { FName("W_ContextCanvas"), FGuid(0xBD207213, 0x4077E804, 0x6978B69D, 0x1CFE4EDB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool EnableTilt = true;
    struct FVector2D AspectRatioWindowSize = FVector2D(2560, 1440);
    double NavigationDelay = 0.10000000149011612;
    double ContentToggleDelay = 0.02500000037252903;
    TArray<struct FKey> CycleNextKeys = {
        {
            "KeyName": FName("Gamepad_RightShoulder")
        }
    };
    TArray<struct FKey> CyclePrevKeys = {
        {
            "KeyName": FName("Gamepad_LeftShoulder")
        }
    };
    TArray<struct FKey> BackKeys = {
        {
            "KeyName": FName("Escape")
        },
        {
            "KeyName": FName("Gamepad_Special_Left")
        },
        {
            "KeyName": FName("Gamepad_FaceButton_Left")
        }
    };
    TArray<struct FKey> UpKeys = {
        {
            "KeyName": FName("Gamepad_LeftStick_Up")
        },
        {
            "KeyName": FName("Gamepad_DPad_Up")
        }
    };
    TArray<struct FKey> DownKeys = {
        {
            "KeyName": FName("Gamepad_LeftStick_Down")
        },
        {
            "KeyName": FName("Gamepad_DPad_Down")
        }
    };
    TArray<struct FKey> LeftKeys = {
        {
            "KeyName": FName("Gamepad_LeftStick_Left")
        },
        {
            "KeyName": FName("Gamepad_DPad_Left")
        }
    };
    TArray<struct FKey> RightKeys = {
        {
            "KeyName": FName("Gamepad_LeftStick_Right")
        },
        {
            "KeyName": FName("Gamepad_DPad_Right")
        }
    };
    TArray<struct FKey> SelectKeys = {
        {
            "KeyName": FName("Enter")
        },
        {
            "KeyName": FName("SpaceBar")
        },
        {
            "KeyName": FName("Gamepad_FaceButton_Bottom")
        }
    };
    TArray<struct FKey> DeleteKeys = {
        {
            "KeyName": FName("Delete")
        },
        {
            "KeyName": FName("Gamepad_FaceButton_Top")
        }
    };
    enum Enum_WidgetAnimType ContentAnimationType = Enum_WidgetAnimType::Enum_MAX;
    struct FVector2D LastCursorPosition = FVector2D(0, 0);
    struct FTimerHandle MouseDeltaTimer = {
        "Handle": 0
    };
    struct FVector2D CurrentTilt = FVector2D(0, 0);
     OnNavigableHovered = ;
     OnNavigableUnHovered = ;
     OnNavigableClicked = ;
    bool CanNavigate = true;
    bool IsCursorVisible = true;
    double Animation Playback Speed = 1;
    struct FTimerHandle NotificationTimer = {
        "Handle": 0
    };
    bool bIsFocusable = true;
    bool bHasScriptImplementedPaint = false;
    class UW_ContextCanvas_C* W_ContextCanvas;
    class UVerticalBox* MainNotificationPanel;
    class UOverlay* MainContentPanel;
    class UWidgetAnimation* ContentIN;
    class UWidgetAnimation* ContentOut;
    class UWidgetAnimation* ContentFadeOut;
    class UWidgetAnimation* ContentFadeIN;
    class UWidgetAnimation* Empty;
    class UBorder* BlockingOverlay;
    class UWidgetSwitcher* ContentSwitcher;
    TArray<class UUserWidget*>* WidgetPool;
    TArray<TSubclassOf<UUserWidget>> PooledWidgets;
    class UUserWidget* CurrentContent;
    class UOverlay* EmptyContent;
    class UWidget* LastFocusedNavigable;
    class UWidget* FocusedNavigable;
    class UUserWidget* FocusedTabConstructor;
    TSubclassOf<UUserWidget> TargetContentClass;
    Enum_MenuHandlerType CurrentMenuType;
    TMap<TSubclassOf<UUserWidget>, TSubclassOf<UUserWidget>> ContentStepMap;
    TMap<TSubclassOf<UUserWidget>, class UWidget*>* FocusableStepMap;
    TArray<class UWidget*>* CurrentNavigables;
    TArray<class UWB_SingleSettingBar_C*>* KeybindingSettingBars;
    class UUserWidget* LastContent;
    class UWB_RequestContainer_C* RequestPopup;
    class UWB_KeyBindingButton_C* FocusedKeyListener;
    int LastFocusedSwitcherIndex;
    int LastFocusedKeyInput;
    bool IsPreviousContent;
    bool NavigatingByKeys;
    bool IsWaitingToFocusTab;
    bool FocusedToSubTab;
    bool WaitingForInput;
    bool IsFocusedToEntryBox;
    bool IsFocusedToColorPicker;
    bool LastKeyIsGamepadKey;
    bool CheckCursor;
    bool InputDisabled;
    FName SelectedPlayerName;
    TArray<FString> SavedGames;
    class UObject* InspectorCanvas;
    class UW_InspectCanvas_C* WindowCanvas;
    class UW_ContextCanvas_C* ContextCanvas;
    bool InventoryCanvasToggled;
    TMap<class UUserWidget*, double>* NotificationPool;
private:
    class UBackgroundBlur* BackgroundBlur_0;

};