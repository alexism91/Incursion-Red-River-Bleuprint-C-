class UBP_IRRMissionComponent_C : public UIRRMissionComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.BP_IRRMissionComponent_C:ExecuteUbergraph_BP_IRRMissionComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnMissionEventReceived_Client = ;
    TMap<struct FGameplayTag, class UIRRFactionSetup*> FactionSetups = {
        { {
            "TagName": FName("Mission.Faction.FANG")
        }, "IRRFactionSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DA_FANG_Faction.DA_FANG_Faction'" }, 
        { {
            "TagName": FName("Mission.Faction.BLUEFOR")
        }, "IRRFactionSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/BLUEFOR/DA_BLUEFORE_Faction.DA_BLUEFORE_Faction'" }, 
        { {
            "TagName": FName("Mission.Faction.GREYFOR")
        }, "IRRFactionSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/GREYFOR/DA_GREYFOR_Faction.DA_GREYFOR_Faction'" }, 
        { {
            "TagName": FName("Mission.Faction.OPFOR")
        }, "IRRFactionSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/OPFOR/DA_OPFOR_Faction.DA_OPFOR_Faction'" }
    };
    TArray<class UIRRDefaultInboxItemSetup*> DefaultInboxData = {
        "IRRDefaultInboxItemSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/DefaultInboxItems/DA_FANG_WelcomeMessage.DA_FANG_WelcomeMessage'"
    };
    TArray<struct FIRRLoyaltyByFaction> DefaultFactionData = {
        {
            "Faction": {
                "TagName": FName("Mission.Faction.GREYFOR")
            },
            "Loyalty": 0
        },
        {
            "Faction": {
                "TagName": FName("Mission.Faction.BLUEFOR")
            },
            "Loyalty": 0
        },
        {
            "Faction": {
                "TagName": FName("Mission.Faction.OPFOR")
            },
            "Loyalty": 0
        },
        {
            "Faction": {
                "TagName": FName("Mission.Faction.FANG")
            },
            "Loyalty": 100
        }
    };
    class UIRRMissionGraph* DefaultMissionGraphOverview = "IRRMissionGraph'Test_C/Content/Blueprints/MissionSystem/Graphs/MG_MainStory.MG_MainStory'";
    TMap<struct FGameplayTag, int32> DefaultHideoutUnitLevels_LEGACY = {
        { {
            "TagName": FName("Mission.Hideout Unit.Structure")
        }, 1 }, 
        { {
            "TagName": FName("Mission.Hideout Unit.Shooting Range")
        }, 1 }
    };
    class UCurveFloat* XPScaleCurve = "CurveFloat'Test_C/Content/Blueprints/MissionSystem/Statics/FC_LevelCurve.FC_LevelCurve'";
    TMap<struct FGameplayTag, float> XPEvents = {
        { {
            "TagName": FName("Mission.Messages.Revived")
        }, 20 }, 
        { {
            "TagName": FName("Mission.Messages.Extracted")
        }, 10 }, 
        { {
            "TagName": FName("Mission.Messages.Killed")
        }, 5 }
    };
    TMap<FString, class UBP_Achievement_RaidData_C*> AchievementEvents = {
        { "Shattered Cannon", "BP_Achievement_Kills_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_Kills_C_4'" }, 
        { "Tourist Trapper", "BP_Achievement_Kills_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_Kills_C_0'" }, 
        { "Enforcer", "BP_Achievement_Kills_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_Kills_C_1'" }, 
        { "Hunter", "BP_Achievement_Kills_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_Kills_C_2'" }, 
        { "Operator", "BP_Achievement_Extract_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_Extract_C_1'" }, 
        { "Contractor", "IRRSteamAchievement'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:IRRSteamAchievement_0'" }, 
        { "Methodical", "BP_Achievement_RaidData_C'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMissionComponent.Default__BP_IRRMissionComponent_C:BP_Achievement_RaidData_C_0'" }
    };
    bool bDebugMissionSaveGame = true;
    TMap<FName, class UIRRTaskSetup*> DebugMissionSetupMap = {
        { FName("1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0001.DA_FANG_OBSERVER_0001'" }, 
        { FName("2"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0002.DA_FANG_OBSERVER_0002'" }, 
        { FName("3"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0003.DA_FANG_OBSERVER_0003'" }, 
        { FName("4"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0004.DA_FANG_OBSERVER_0004'" }, 
        { FName("5"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0005.DA_FANG_OBSERVER_0005'" }, 
        { FName("6"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0006.DA_FANG_OBSERVER_0006'" }, 
        { FName("7"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0007.DA_FANG_OBSERVER_0007'" }, 
        { FName("8"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0008.DA_FANG_OBSERVER_0008'" }, 
        { FName("9"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0009.DA_FANG_OBSERVER_0009'" }, 
        { FName("10"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0010.DA_FANG_OBSERVER_0010'" }, 
        { FName("11"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0011.DA_FANG_OBSERVER_0011'" }, 
        { FName("12"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0012.DA_FANG_OBSERVER_0012'" }, 
        { FName("13"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0013.DA_FANG_OBSERVER_0013'" }, 
        { FName("14"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0014.DA_FANG_OBSERVER_0014'" }, 
        { FName("15"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0015.DA_FANG_OBSERVER_0015'" }, 
        { FName("16"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0016.DA_FANG_OBSERVER_0016'" }, 
        { FName("17"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0017.DA_FANG_OBSERVER_0017'" }, 
        { FName("18"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0018.DA_FANG_OBSERVER_0018'" }, 
        { FName("19"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0019.DA_FANG_OBSERVER_0019'" }, 
        { FName("20"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0020.DA_FANG_OBSERVER_0020'" }, 
        { FName("21"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0021.DA_FANG_OBSERVER_0021'" }, 
        { FName("22"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0022.DA_FANG_OBSERVER_0022'" }, 
        { FName("23"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/StoryMissions/DA_FANG_OBSERVER_0023.DA_FANG_OBSERVER_0023'" }, 
        { FName("EXT_1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Extraction/DA_FANG_EXT_140_RR.DA_FANG_EXT_140_RR'" }, 
        { FName("EXT_2"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Extraction/DA_FANG_EXT_271_RR.DA_FANG_EXT_271_RR'" }, 
        { FName("EXT_3"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Extraction/DA_FANG_EXT_665_RR.DA_FANG_EXT_665_RR'" }, 
        { FName("OPR_1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Operation/DA_FANG_OPR_205_RR.DA_FANG_OPR_205_RR'" }, 
        { FName("OPR_2"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Operation/DA_FANG_OPR_453_RR.DA_FANG_OPR_453_RR'" }, 
        { FName("OPR_3"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Operation/DA_FANG_OPR_700_RR.DA_FANG_OPR_700_RR'" }, 
        { FName("OPR_4"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Operation/DA_FANG_OPR_999_RR.DA_FANG_OPR_999_RR'" }, 
        { FName("KIA_1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_101_RR.DA_KIA_101_RR'" }, 
        { FName("KIA_2"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_180_RR.DA_KIA_180_RR'" }, 
        { FName("KIA_3"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_225_RR.DA_KIA_225_RR'" }, 
        { FName("KIA_4"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_333_RR.DA_KIA_333_RR'" }, 
        { FName("KIA_5"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_454_RR.DA_KIA_454_RR'" }, 
        { FName("KIA_6"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_523_RR.DA_KIA_523_RR'" }, 
        { FName("KIA_7"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_580_RR.DA_KIA_580_RR'" }, 
        { FName("KIA_8"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_756_RR.DA_KIA_756_RR'" }, 
        { FName("KIA_9"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Elimination/DA_KIA_901_RR.DA_KIA_901_RR'" }, 
        { FName("RET_1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_266_RR.DA_FANG_RET_266_RR'" }, 
        { FName("RET_2"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_267_RR.DA_FANG_RET_267_RR'" }, 
        { FName("RET_3"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_511_RR.DA_FANG_RET_511_RR'" }, 
        { FName("RET_4"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_512_RR.DA_FANG_RET_512_RR'" }, 
        { FName("RET_5"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_622_RR.DA_FANG_RET_622_RR'" }, 
        { FName("RET_6"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_623_RR.DA_FANG_RET_623_RR'" }, 
        { FName("VIS_1"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/SideMissions/DA_FANG_OBSERVER_0002_A.DA_FANG_OBSERVER_0002_A'" }, 
        { FName("RET_7"), "IRRTaskSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/Assignments/Retrieve/DA_FANG_RET_Test.DA_FANG_RET_Test'" }
    };

};