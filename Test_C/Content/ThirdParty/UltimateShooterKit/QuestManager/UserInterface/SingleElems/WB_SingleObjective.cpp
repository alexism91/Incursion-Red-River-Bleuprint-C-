class UWB_SingleObjective_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleObjective.WB_SingleObjective_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleObjective.WB_SingleObjective_C:ObjectiveSlide_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleObjective.WB_SingleObjective_C:ExecuteUbergraph_WB_SingleObjective'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Percentage_TimerHandle"), FGuid(0x90915080, 0x40A5136B, 0x9C3F4C87, 0x85498ADB) }, 
        { FName("CurrentPercentage"), FGuid(0xCFB22ADB, 0x4FD6B5C8, 0x3AFEC58C, 0x74DD1D02) }, 
        { FName("TargetPercentage"), FGuid(0xBB43EC4F, 0x4D26E0A1, 0x71D26485, 0x92665B40) }, 
        { FName("QuestManager"), FGuid(0xB053CA55, 0x4FD3006C, 0xD66F5B96, 0x259BE111) }, 
        { FName("MaxTargetAmount"), FGuid(0xF9DB1D17, 0x4476FC38, 0x9686538D, 0x0679DEF2) }, 
        { FName("InSequence"), FGuid(0xA56AD1A5, 0x48B7BA9E, 0xC02394A9, 0xEAC48BE6) }, 
        { FName("QuestName"), FGuid(0x1E902027, 0x42980EFF, 0x387916AE, 0x8AE9FC10) }, 
        { FName("ObjectiveInfo"), FGuid(0xA2DE1A26, 0x45C69ED5, 0x3702719E, 0x0FD641A3) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_ObjectiveMaster ObjectiveInfo = {
        "ObjectiveTag_23_5C4A1C1646769A8EC257DE9DF30F3013": FName("None"),
        "DisplayName_2_6CA52827462D21DCF2C9D49FC3D86115": FText(""),
        "Hints_40_AD8205D346255273601DA1850851075E": {},
        "TargetsToInteract_34_5C5A587D4F903662661C72AF962545FF": {},
        "ObjectiveCustomData_26_99E0AB714A76B0FE5B81D0897D7CB303": {
            "ObjectiveType_3_B1589EAB4F718204BAAC6F9247B25686": Enum_QbjectiveType::NewEnumerator0
        }
    };
    struct FTimerHandle Percentage_TimerHandle = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* TargetAmount;
    class USizeBox* SizeBoxContainer;
    class UHorizontalBox* ProgressContainer;
    class UProgressBar* ObjectiveProgress;
    class UTextBlock* ObjectiveName;
    class UWidgetAnimation* ObjectiveSlide;
    FName QuestName;
    int InSequence;
    double MaxTargetAmount;
    class UManager_Quest_C* QuestManager;
    double TargetPercentage;
    double CurrentPercentage;

};