class AGS_UMS_GameState_C : public AGameState
{
public:
    int32 NumReplicatedProperties = 2;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/CMG/Framework/GS_UMS_GameState.GS_UMS_GameState_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/GS_UMS_GameState.GS_UMS_GameState_C:ExecuteUbergraph_GS_UMS_GameState'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     UpdateObjective = ;
    struct FS_Mission MissionInfo = {
        "MissionIdentifier_23_09FA4C1144BA449D2E25B28894B7EDE6": FName("None"),
        "Email_48_1EF60E214686034DD7C3F3A821AD083A": {
            "Subject_2_04F1A6DC42B39029339FBEAC2CCC3A0D": FText(""),
            "Content_4_C09FE08643CABC95C2BF36A747E9E267": FText(""),
            "Author_11_3F8D40714A7213985D5353AF1740D21C": FText(""),
            "Fraction_14_965DD13F45145B913AD358A1DEE381C1": E_Fraction::NewEnumerator0,
            "EmailIcon_8_94C118354FD0C7B5C83811B8F31C4C91": {
                "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
                "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": nullptr,
                "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 1)
            }
        },
        "Level_52_F48D61C24AF24162FF6389AF5AC69BE0": {
            "LevelName_56_09FA4C1144BA449D2E25B28894B7EDE6": FName("None"),
            "StreamingLevelNames_54_7DFED4DA469B8E32C902C99D110644CE": {}
        },
        "Sequences_41_8A3D24AA47AB48C88D748ABBD262B9EF": {},
        "FinalMission?_11_FD45802F4E71BB665DE97E83A8F14DE7": false,
        "MissionReward_40_D7D4CDA940E9AC3C17523AA13D265D3A": {},
        "FollowUpMission_42_ECB007D34B408BEB46256FA732E8A33F": {
            "DataTable": nullptr,
            "RowName": FName("None")
        }
    };
    struct FS_GameModeSettings GameModeSettings = {
        "StartMissionPerTeam_47_1D03692A42852C5ECCAA9DA557D6E54C": {},
        "Difficulty_52_032A87DB4A4625FDC1BB78BA9242F1A8": E_Difficulty::NewEnumerator0,
        "RespawnSettings_51_8309C97E47C6AD52910AF99D0B1F5BB5": {
            "CanRevive?_1_ADC7EA894B1BB56630197584BCF1AA0D": false,
            "ReviveTime_20_C13A2B6B4E870EB076BBD7A5D174DAB9": 0,
            "CanRespawn?_15_ACF0A98D4D63D91C272073A96CB8E257": false,
            "RespawnTime_14_71939FD242DC444C0B4C38A0EAFA158C": 0
        },
        "StartDelay_22_1F2E000642EF53F13FCD39AB36D1D1CF": 0,
        "MinimumAmountPlayersAlivePerTeam_45_36CED205476F046F80974183E346E8A9": 0
    };
    class USceneComponent* DefaultSceneRoot;
    int SuccesfullyFinishedObjectives;
    int TotalObjectivesCount;
    int CurrentObjectiveIndex;
    E_GameState Game State;

};