class UWB_EmailSingleSequence_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailSingleSequence.WB_EmailSingleSequence_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailSingleSequence.WB_EmailSingleSequence_C:ExecuteUbergraph_WB_EmailSingleSequence'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HintFont"), FGuid(0x3757D750, 0x48670647, 0xB97649A2, 0x03ADB175) }, 
        { FName("SequenceInfo"), FGuid(0x0612E383, 0x490C20A8, 0xBD73B2AF, 0x020C74E2) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_Sequence SequenceInfo = {
        "SequenceName_35_8A7A7D4F47DD0FC8D71B65A1ADD2D90A": FText(""),
        "NotifyMessage_47_504852634F3F9CBFDFC5708F1DA364E5": {
            "NofityMessage_5_657D6799458447A64C0ADC9381470B2C": FText(""),
            "NotifyLength_8_8F1F5B89414BBCE7DB0E8885FDB48444": 0
        },
        "ObjectiveTarget_54_272A017B497B914A9AE32B975D5452E7": {
            "TargetClass_43_1728ACCC44C581979E97B297909683BD": nullptr,
            "TargetName_33_DD14EA5348B8EE478369E5875F38CDE9": FText(""),
            "TargetMarker_69_FCAE92AD4FA7E955C5DBE1B9500FBBFB": {
                "MarkerType_36_BDDCFCBA471F68EE4580389AFC04177F": E_MarkerType::NewEnumerator3,
                "OverrideMarkerIcon_33_97CB54A744045323E7D0939BEC133702": nullptr,
                "ShowDistance_8_A16F52734F3DEFDEF9E7019FEB49DCFD": 0,
                "HideDistance_30_1AF2EED7453FAB927DCCCA8E3052D742": 0,
                "EdgeOffset_27_35D612D343C44A3DD49AE5B78B9C75B3": 0,
                "HideOnEdge?_19_929D2A244E4882F0F9BE2E938C59D377": false,
                "Hint_22_5C1F2DDB44D40636829912876FB30F05": FText("")
            },
            "ObjectiveType_68_CD96EA1649BD5B392117E0864030D597": E_ObjectiveType::NewEnumerator0,
            "Amount_27_C7ED709A4297E12B16A4B79B827CBDDA": 0,
            "CounterType_67_7BDC489F4F76E12BE1D01ABE12AFD52C": E_CounterType::NewEnumerator0,
            "DestroyOnCompletion_71_6172EDA14F5A372BA72B91BD5BE07B3E": false
        },
        "TimerSettings_50_51EBCA904DB196D28C4E57A1ACC08CAD": {
            "TimerType_8_50EC7C0049DB7B00B1E70B9F72904FEC": E_TimerType::NewEnumerator0,
            "Time_4_A2884BDE44DCE3F13B7E7D84FCD311EF": 0
        },
        "ConcurrentMissionSettings_51_785326C241AAF274180E6BBE6F012D8F": {
            "ShouldFailEnemiesMission?_10_D2FCFD844CF10731106C64B9A0E975E0": false,
            "MissionToTrigger_5_0894AC93432376EEA531E1B072FAE62E": {
                "DataTable": nullptr,
                "RowName": FName("None")
            }
        },
        "FailType_52_C591BBBF43FD05B5E99F3AAE994BC0F0": E_FailSequenceType::NewEnumerator1,
        "ActorsToSpawn_53_A6C669F64B1C315D39EBA28E52D6550E": {},
        "ActorsToTrigger_23_AAA3E45244F5BE26FB48D2AD8AB1C0B3": {}
    };
    struct FSlateFontInfo HintFont = {
        "FontObject": "Font'Engine/Content/EngineFonts/Roboto.Roboto'",
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": false,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("Regular"),
        "Size": 8,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* ObjectiveName;
    class UVerticalBox* HintBox;

};