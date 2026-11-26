class UWB_EmailInfo_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailInfo.WB_EmailInfo_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailInfo.WB_EmailInfo_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailInfo.WB_EmailInfo_C:ExecuteUbergraph_WB_EmailInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mission"), FGuid(0x90EB27EA, 0x44193939, 0x3E55F3BE, 0x65DEA22A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_Mission Mission = {
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
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleEmailReward_C* WB_SingleEmailReward_86;
    class UWB_SingleEmailReward_C* WB_SingleEmailReward;
    class UWB_FrameBuilder_C* WB_FrameBuilder_166;
    class UWB_FrameBuilder_C* WB_FrameBuilder;
    class UTextBlock* TrackText;
    class UBorder* TrackProgress;
    class UHorizontalBox* RewardContainer;
    class UVerticalBox* RewardBox;
    class UTextBlock* QuestName;
    class UTextBlock* QuestGiver;
    class UTextBlock* QuestDescription;
    class UVerticalBox* ObjectiveContainer;
    class UVerticalBox* ObjectiveBox;
    class UBorder* HoverBG;
    class USizeBox* BottomLine;
    class UHorizontalBox* BottomInfo;
    class UWB_SingleButton_C* Accept;

};