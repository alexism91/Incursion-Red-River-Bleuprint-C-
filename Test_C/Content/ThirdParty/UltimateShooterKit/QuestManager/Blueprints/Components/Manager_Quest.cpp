class UManager_Quest_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/Components/Manager_Quest.Manager_Quest_C:ExecuteUbergraph_Manager_Quest'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle QuestList = {
        "DataTable": "DataTable'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/Data/DT_QuestList.DT_QuestList'",
        "RowName": FName("USK_001")
    };
    double ScreenMarkerRadiusPercentage = 0.6000000238418579;
    double ScreenMarkerMargin = 200;
    struct FStruct_QuestMaster CurrentQuest = {
        "Type_60_16D569D3404FB74C776327A83D5030E6": Enum_QuestType::NewEnumerator0,
        "UniqueName_59_0187024B451DEEE8C06697B570C8DE65": FName("None"),
        "DisplayName_5_9E3EDE3341197D8A768D0A9FE8C2F325": FText(""),
        "Description_7_0DC5601C400FD92BE75A468294986F08": FText(""),
        "Essentials_83_7D99065F4699AA9B725325B2BD50ECE0": {
            "InteractionType_15_4F030B5C42A7C42A2C0DFE93BF8A5D17": Enum_QuestInteractionType::NewEnumerator0,
            "Repeatable_33_B259D40841887275896A3485A8B0F345": false,
            "QuestsNeedsToBeCompleted_24_2672B6F84D62E5F2BED311A8F3847915": {},
            "ConditionTags_26_C386AC644F36D8DFFC9EFFA24A5A62AA": {},
            "QuestGiverDisplayName_30_D677BE4447CF51B5A083FA8927E9579F": FText(""),
            "TargetName_11_8510BC704A70CEB24AB6C9813D2235D0": FName("None"),
            "TargetMarkerInfo_17_920C5F2C43A368B73F7B139847A343D0": {
                "DisplayOnScreen_40_774587234CB5E64AA89025A8E8C5A022": true,
                "DİsplayOnCompass_44_987AF086434C38D2A2C65AABB129CACB": false,
                "DisplayMarker_11_AF76AF2F495208D9A3B093B51EAE7897": true,
                "KeepOnScreenEdge_49_80DA92B34B8B5F91B36856AE01A1B7E9": true,
                "KeepOnCompassEdge_48_A0E0359F4CBDC4430132FA90B36B46D4": false,
                "TakeLocationFromMarkerTarget_57_B1BC1C814784AECB91CE9497C554722F": true,
                "MarkerIcon_52_EB8355B34A9973EBF1F03AB7FEC0BCCC": {
                    "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
                    "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": nullptr,
                    "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 1)
                },
                "DisplayBetweenDistance_42_B769215147482EF4563981A2F8CEA47C": FVector2D(0, 0),
                "NearestLocation_21_B62E0327454CF4A7F84E43978D846C82": FVector(0, 0, 0),
                "Offset_31_A14E68154780FB766F7556A37F1C96E9": FVector(0, 0, 0),
                "MarkerTarget_5_F726BDFA43BCA98F29680583A8C1D47F": nullptr
            }
        },
        "QuestLogWidget_74_E3A24C404949192A92900B9ED551A80E": {
            "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
            "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": nullptr,
            "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 1)
        },
        "QuestCompletedWidget_71_1F2F748443CB18B47AF067A77CCA33D1": {
            "TopText_10_5FD9D8A44AB3B22F7D4CA8BFA62245CA": FText("Q U E S T  F I N I S H E D"),
            "BottomText_11_79699A7A44403BE0A9BA12A740D768A9": FText(""),
            "BackgroundColor_12_BD16D9014B7FBA728DBBE7944E5F9456": FLinearColor(0, 0, 0, 0,5),
            "LineColor_6_19F097CA444FBC4D7C49F884AA54BB89": FLinearColor(0,557292, 0,557292, 0,557292, 0,5),
            "DisplayTime_9_2856E31644C81060E8EB50B311399A60": 3
        },
        "QuestFailedWidget_73_2F8AC4494D592BA908A25581CC8B58D7": {
            "TopText_10_5FD9D8A44AB3B22F7D4CA8BFA62245CA": FText("Q U E S T  F I N I S H E D"),
            "BottomText_11_79699A7A44403BE0A9BA12A740D768A9": FText(""),
            "BackgroundColor_12_BD16D9014B7FBA728DBBE7944E5F9456": FLinearColor(0, 0, 0, 0,5),
            "LineColor_6_19F097CA444FBC4D7C49F884AA54BB89": FLinearColor(0,557292, 0,557292, 0,557292, 0,5),
            "DisplayTime_9_2856E31644C81060E8EB50B311399A60": 3
        },
        "Sequences_32_428362594EA183BC1B9D879AD2C9242B": {},
        "Rewards_87_94FCC7344D7B7E5606B1E3AE2C9921E4": {},
        "QuestsToAddOnCompleted_68_46CDE0004463AC0068BD8989E5CAE792": {}
    };
     OnQuestCompleted = ;
     OnQuestStarted = ;
    bool DisplayCompass = true;
    bool AddNumericDirections = true;
    TArray<struct FStruct_DirectionInfo> DirectionsOnCompass = {
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("N"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 0
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("NE"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 45
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("E"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 90
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("SE"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 135
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("S"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 180
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("SW"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 225
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("W"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 270
        },
        {
            "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("NW"),
            "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 315
        }
    };
    int32 NumericDirectionMultiplier = 15;
    FString SaveSlotName = "QuestManager";
    double UnitsToMeters = 150;
     OnQuestFailed = ;
     On_Rewards_Received = ;
     OnQuestManagerSaved = ;
    TArray<struct FStruct_MarkerInfo> Landmarks = {
        {
            "DisplayOnScreen_40_774587234CB5E64AA89025A8E8C5A022": false,
            "DİsplayOnCompass_44_987AF086434C38D2A2C65AABB129CACB": true,
            "DisplayMarker_11_AF76AF2F495208D9A3B093B51EAE7897": true,
            "KeepOnScreenEdge_49_80DA92B34B8B5F91B36856AE01A1B7E9": true,
            "KeepOnCompassEdge_48_A0E0359F4CBDC4430132FA90B36B46D4": false,
            "TakeLocationFromMarkerTarget_57_B1BC1C814784AECB91CE9497C554722F": true,
            "MarkerIcon_52_EB8355B34A9973EBF1F03AB7FEC0BCCC": {
                "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
                "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": "Texture2D'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/Textures/T_Castle.T_Castle'",
                "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 0,5)
            },
            "DisplayBetweenDistance_42_B769215147482EF4563981A2F8CEA47C": FVector2D(50, 80),
            "NearestLocation_21_B62E0327454CF4A7F84E43978D846C82": FVector(5500, -6000, 0),
            "Offset_31_A14E68154780FB766F7556A37F1C96E9": FVector(0, 0, 0),
            "MarkerTarget_5_F726BDFA43BCA98F29680583A8C1D47F": nullptr
        },
        {
            "DisplayOnScreen_40_774587234CB5E64AA89025A8E8C5A022": false,
            "DİsplayOnCompass_44_987AF086434C38D2A2C65AABB129CACB": true,
            "DisplayMarker_11_AF76AF2F495208D9A3B093B51EAE7897": true,
            "KeepOnScreenEdge_49_80DA92B34B8B5F91B36856AE01A1B7E9": true,
            "KeepOnCompassEdge_48_A0E0359F4CBDC4430132FA90B36B46D4": false,
            "TakeLocationFromMarkerTarget_57_B1BC1C814784AECB91CE9497C554722F": true,
            "MarkerIcon_52_EB8355B34A9973EBF1F03AB7FEC0BCCC": {
                "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
                "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": "Texture2D'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/Textures/T_Ship.T_Ship'",
                "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 0,5)
            },
            "DisplayBetweenDistance_42_B769215147482EF4563981A2F8CEA47C": FVector2D(30, 70),
            "NearestLocation_21_B62E0327454CF4A7F84E43978D846C82": FVector(7280, 7280, 0),
            "Offset_31_A14E68154780FB766F7556A37F1C96E9": FVector(0, 0, 0),
            "MarkerTarget_5_F726BDFA43BCA98F29680583A8C1D47F": nullptr
        }
    };
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    class APlayerState* OwnerPlayerState;
    class APawn* OwnerPawn;
    class APlayerController* OwnerController;
    class ABP_QuestManager_C* QuestManager;
    bool IsInActiveQuest;
    TArray<struct FStruct_ObjectiveMaster> CurrentObjectives;
    int CurrentSequence;
    TArray<struct FStruct_Marker*>* ScreenMarkers;
    TArray<struct FStruct_QuestMaster> ActiveQuests;
    TArray<struct FStruct_QuestMaster> CompletedQuests;
    TArray<struct FStruct_QuestMaster> PendingQuests;
    TArray<struct FStruct_ActiveQuestGiver> ActiveQuestGivers;
    TArray<FName> ConditionTags;
    class UWB_CompassAndMarkers_C* CompassReference;
    class UWB_QuestLog_C* QuestLog;
    class UWB_InQuest_C* InQuestWidget;
    class USG_MissionComponent_C* SaveGameReference;
    class UManager_QuestTarget_C* ClosestInteractionTarget;
    TArray<class UManager_QuestTarget_C*>* CurrentInteractionTargets;
    FName LastOverlappedBox;
    class UWB_QuestCompleted_C* EndQuestWidget;
    TArray<struct FStruct_Marker*>* CompassMarkers;
    TArray<struct FStruct_DirectionInfo> NumericDirections;

};