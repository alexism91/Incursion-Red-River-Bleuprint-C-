class UWB_SingleEmail_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_SingleEmail.WB_SingleEmail_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_SingleEmail.WB_SingleEmail_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_SingleEmail.WB_SingleEmail_C:ExecuteUbergraph_WB_SingleEmail'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnQuestSelected"), FGuid(0x28372A29, 0x4D75D3EF, 0x0DB3AC82, 0xE4FC195C) }, 
        { FName("IsSelected"), FGuid(0xDC49016E, 0x48E67107, 0xE8AF7F83, 0x2AAF9C1A) }, 
        { FName("IsActiveQuest"), FGuid(0xF758FEC9, 0x43230F22, 0xC23E9EB4, 0x6C71CAAA) }, 
        { FName("CurrentSequence"), FGuid(0xDD6480C9, 0x450C3E27, 0xE3AEC59D, 0xA0615EE8) }, 
        { FName("QuestInfo"), FGuid(0xBBA4554D, 0x42E5D556, 0xB2F62D84, 0xF911AE46) }
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
     OnQuestSelected = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_FrameBuilder_C* WB_FrameBuilder;
    class USizeBox* IconContainer;
    class UBorder* Icon;
    class UBorder* HoverBG;
    class UTextBlock* EmailSubject;
    class UTextBlock* EmailShortDescription;
    class UButton* Dummy;
    class UBorder* BG;
    int CurrentSequence;
    bool IsActiveQuest;
    bool IsSelected;

};