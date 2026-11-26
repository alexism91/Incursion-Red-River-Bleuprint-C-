class UW_Mission_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_Mission.W_Mission_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "CurrentTeam",
            "PropertyName": FName("Text"),
            "FunctionName": FName("GetText_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetText_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_Mission.W_Mission_C:ExecuteUbergraph_W_Mission'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SequenceItems"), FGuid(0xCEBE3D67, 0x41753365, 0x3A2ABE86, 0x915D7CA6) }, 
        { FName("Timer"), FGuid(0xB2AA8D19, 0x4D474EDE, 0x8884258B, 0xB851DF14) }, 
        { FName("SequenceFinished"), FGuid(0x7786732D, 0x47F2F1F1, 0x2E356A96, 0xC55695B2) }, 
        { FName("MaxProgress"), FGuid(0x51B6B507, 0x41DE2BDB, 0xDC9F689E, 0x22CE5375) }, 
        { FName("Mission Info"), FGuid(0x1E2CC2E6, 0x463CD85A, 0x8E8D8DAA, 0xCB864BBA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_Mission Mission Info = {
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
     SequenceFinished = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* TimerBox;
    class UUniformGridPanel* SideMission;
    class UVerticalBox* RewardBox;
    class UVerticalBox* MissionBox;
    class UUniformGridPanel* MessageBox;
    class UUniformGridPanel* MainMission;
    int MaxProgress;
    class UW_Timer_C* Timer;
    TArray<class UW_SequenceItem_C*>* SequenceItems;
private:
    class UTextBlock* CurrentTeam;

};