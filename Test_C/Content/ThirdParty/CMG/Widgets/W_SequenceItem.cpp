class UW_SequenceItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "CurrentAmount",
            "PropertyName": FName("Text"),
            "FunctionName": FName("None"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("CurrentProgressValue"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Property
        },
        {
            "ObjectName": "ObjectiveName",
            "PropertyName": FName("Text"),
            "FunctionName": FName("Get_ObjectiveName_Text_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_ObjectiveName_Text_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "ProgressBar_126",
            "PropertyName": FName("Percent"),
            "FunctionName": FName("GetPercent_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetPercent_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "MaxAmount",
            "PropertyName": FName("Text"),
            "FunctionName": FName("Get_MaxAmount_Text_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_MaxAmount_Text_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:FadeOutStart_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:FadeOutEnd_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:Highlight_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_SequenceItem.W_SequenceItem_C:ExecuteUbergraph_W_SequenceItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Timer"), FGuid(0xBD00D4B4, 0x442C431C, 0xE3763AA5, 0xE7DC12BB) }, 
        { FName("FadeOutTime"), FGuid(0xC1C22113, 0x476D8A98, 0x3DB9258F, 0xF90F3301) }, 
        { FName("SequenceFinished"), FGuid(0xD47F8E82, 0x472074DC, 0x63A9388C, 0x9CEF304D) }, 
        { FName("MaxAmountValue"), FGuid(0xF1375C74, 0x40967F7C, 0xEFFBB781, 0x4F11315A) }, 
        { FName("CurrentProgressValue"), FGuid(0x3E2D9E49, 0x4097EB06, 0x87E7409F, 0x6D29F82A) }, 
        { FName("SequenceInfo"), FGuid(0x7D0C139B, 0x455263D8, 0x1D611783, 0x272B815D) }, 
        { FName("SequenceIndex"), FGuid(0x26B12FE0, 0x4AC8926C, 0x00879982, 0x479D42C0) }, 
        { FName("MissionName"), FGuid(0xC0F5F836, 0x4CC9DC05, 0x2A9DD5BA, 0xEF4EEB35) }
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
     SequenceFinished = ;
    double FadeOutTime = 1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* TimerBox;
    class UImage* SequenceIcon;
    class UImage* SequenceHighlight;
    class USizeBox* ProgressBarBox;
    class UProgressBar* ProgressBar_126;
    class UTextBlock* ObjectiveName;
    class UTextBlock* MaxAmount;
    class UTextBlock* CurrentAmount;
    class UHorizontalBox* AmountBox;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOutStart;
    class UWidgetAnimation* FadeOutEnd;
    class UWidgetAnimation* Highlight;
    FName MissionName;
    int SequenceIndex;
    int CurrentProgressValue;
    int MaxAmountValue;
    class UW_Timer_C* Timer;

};