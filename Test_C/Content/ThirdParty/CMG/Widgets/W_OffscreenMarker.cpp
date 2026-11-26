class UW_OffscreenMarker_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_OffscreenMarker.W_OffscreenMarker_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_OffscreenMarker.W_OffscreenMarker_C:ConstructHighlight_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_OffscreenMarker.W_OffscreenMarker_C:OnScreenHighlight_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_OffscreenMarker.W_OffscreenMarker_C:ExecuteUbergraph_W_OffscreenMarker'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MarkerInfo"), FGuid(0xEDF6F83D, 0x4D11418D, 0x14A2D995, 0x57D4C45F) }, 
        { FName("RespawnTimerRef"), FGuid(0xE6114F6C, 0x49D86133, 0xB873F0B5, 0x2AFFCD8D) }, 
        { FName("TargetInfo"), FGuid(0x20CAA826, 0x4C634E17, 0xE3786582, 0x245764D3) }, 
        { FName("OnScreen?"), FGuid(0x61C6E301, 0x4F50A9EF, 0xEA33B58C, 0xDE25AE43) }, 
        { FName("Angle"), FGuid(0x147384C2, 0x452DAF45, 0xE80C01AA, 0x3E06E3B8) }, 
        { FName("PrevScreenLocation"), FGuid(0x0D59BC2B, 0x4BA34F0B, 0x2C9C1492, 0x4CF0755A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D PrevScreenLocation = FVector2D(0, 0);
    struct FS_PermanentTargetInfo TargetInfo = {
        "TargetName_9_28B9BAA54ED519581DD3D38295496345": FText(""),
        "TargetType_29_EA59151345C0520AF6E5C5B1FD169603": E_TargetType::NewEnumerator0,
        "SelfReference_13_300FBCDE4129A81D1E2F34ADB865C9B1": nullptr,
        "InteractionSettings_28_7B6125754B231AB3FCB1FFA288C691B2": {
            "InteractionText_2_41B011174B73D78C895D92BE9A4E48D5": FText(""),
            "InteractionTime_5_06E9357A47683B0B56619C84075C8315": 0,
            "InteractionMontage_11_E700E656460E72D029BCD7B34D5C5517": nullptr,
            "MoveTo?_13_2D4863A8456D59A592E7799009B8097C": false
        }
    };
    struct FTimerHandle RespawnTimerRef = {
        "Handle": 0
    };
    struct FS_MarkerCustomization MarkerInfo = {
        "MarkerType_36_BDDCFCBA471F68EE4580389AFC04177F": E_MarkerType::NewEnumerator3,
        "OverrideMarkerIcon_33_97CB54A744045323E7D0939BEC133702": nullptr,
        "ShowDistance_8_A16F52734F3DEFDEF9E7019FEB49DCFD": 0,
        "HideDistance_30_1AF2EED7453FAB927DCCCA8E3052D742": 0,
        "EdgeOffset_27_35D612D343C44A3DD49AE5B78B9C75B3": 0,
        "HideOnEdge?_19_929D2A244E4882F0F9BE2E938C59D377": false,
        "Hint_22_5C1F2DDB44D40636829912876FB30F05": FText("")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UImage* Progress;
    class UVerticalBox* MarkerContainer;
    class UOverlay* Marker;
    class UImage* Image_84;
    class UImage* Icon;
    class UTextBlock* HintText;
    class UBorder* HintBorder;
    class UImage* HighlightIcon;
    class UImage* HealthIcon;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Background;
    class UWidgetAnimation* ConstructHighlight;
    class UWidgetAnimation* OnScreenHighlight;
    double Angle;
    bool OnScreen?;

};