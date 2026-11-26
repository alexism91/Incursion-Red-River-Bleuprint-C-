class UW_MissionInfo_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionInfo.W_MissionInfo_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionInfo.W_MissionInfo_C:ExecuteUbergraph_W_MissionInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Show Reward"), FGuid(0x2B3C866B, 0x44A71B6A, 0x33FD93BD, 0xA6D08070) }, 
        { FName("Show Objectives Extended"), FGuid(0x43C1A41C, 0x4AA2302C, 0x756C5DAA, 0x1CF922F3) }, 
        { FName("Show Objectives"), FGuid(0xC47054F1, 0x49214B7D, 0x02F7938E, 0x1D7743ED) }, 
        { FName("Show Description"), FGuid(0xCA8878A7, 0x41A2D06B, 0x5C078AB3, 0x15009CE5) }, 
        { FName("Show Title"), FGuid(0xDB1BEAA0, 0x4F3E53F9, 0xDC0B5995, 0xC440F9F6) }, 
        { FName("Briefing?"), FGuid(0x72D9E89D, 0x459E47E0, 0xE354428A, 0x5E9DF482) }, 
        { FName("Mission Data"), FGuid(0x825E16F7, 0x498E155D, 0x0BD4AFBD, 0x65E1A744) }, 
        { FName("BriefingSwitcher"), FGuid(0x070295D3, 0x4AD565DB, 0xB2F9389B, 0x8BBEBACE) }, 
        { FName("DescriptionContainer"), FGuid(0xC1F2BA43, 0x69233ABC, 0xA8F5EB17, 0x3BEA2F0E) }, 
        { FName("ImageBox"), FGuid(0x5C1F6801, 0x4E0A687A, 0xE0F9F692, 0x1BC4C75A) }, 
        { FName("MissionTitle"), FGuid(0x14F53A4B, 0x52253479, 0x85474160, 0x28C8E06A) }, 
        { FName("ObjectiveContainer"), FGuid(0xA48B6523, 0xE24E3E1A, 0xACD2EBD7, 0x16AA6639) }, 
        { FName("RewardContainer"), FGuid(0x35F599C6, 0xA86D321E, 0x868E1FAE, 0xEBB0A623) }, 
        { FName("RewardSpacer"), FGuid(0xB6B6C3AE, 0x8AC43875, 0x9F3C5C57, 0xD611FC9F) }, 
        { FName("TitleContainer"), FGuid(0xEBD2F82A, 0xF10E333A, 0x93CBFA08, 0xEAA37833) }, 
        { FName("W_InventorySection"), FGuid(0xC4DAD096, 0xF90F3D68, 0x9573C2C2, 0x0DDE766D) }, 
        { FName("W_IRR_ErrorMessage"), FGuid(0xE0D4361F, 0x43386BBC, 0x795AA4A7, 0xD2FACAB0) }, 
        { FName("W_IRR_MissionBriefingImage"), FGuid(0xBCF1E39B, 0x43605764, 0x96003CB5, 0xBA149413) }, 
        { FName("W_IRR_MissionBriefingText"), FGuid(0xFE007986, 0x4AD9BBEA, 0xC761B781, 0xACD60143) }, 
        { FName("W_IRR_MissionDeBriefingText"), FGuid(0x8211F8CB, 0x45616204, 0xE65920B4, 0xD1EAF213) }, 
        { FName("W_MissionObjectiveContainer"), FGuid(0xBC543CEC, 0xB377311A, 0x9BE57A69, 0x39136D98) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Briefing? = true;
    bool Show Title = true;
    bool Show Description = true;
    bool Show Objectives = true;
    bool Show Objectives Extended = true;
    bool Show Reward = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_MissionSequenceContainer_C* W_MissionObjectiveContainer;
    class UW_IRR_MissionBriefingText_C* W_IRR_MissionDeBriefingText;
    class UW_IRR_MissionBriefingText_C* W_IRR_MissionBriefingText;
    class UW_IRR_MissionBriefingImage_C* W_IRR_MissionBriefingImage;
    class UW_IRR_ErrorMessage_C* W_IRR_ErrorMessage;
    class UW_InventorySection_C* W_InventorySection;
    class UVerticalBox* TitleContainer;
    class USpacer* RewardSpacer;
    class UW_RewardBox_C* RewardContainer;
    class UVerticalBox* ObjectiveContainer;
    class UIRRTextBlock* MissionTitle;
    class UHorizontalBox* ImageBox;
    class UVerticalBox* DescriptionContainer;
    class UWidgetSwitcher* BriefingSwitcher;
    class UIRRMissionData* Mission Data;

};