class UW_IRR_MissionBriefingText_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MissionBriefingText.W_IRR_MissionBriefingText_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MissionBriefingText.W_IRR_MissionBriefingText_C:ExecuteUbergraph_W_IRR_MissionBriefingText'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ShowHeader?"), FGuid(0x71D1023B, 0x45E3D882, 0x4498A795, 0x37931739) }, 
        { FName("Briefing?"), FGuid(0x20957324, 0x4C09B2BA, 0x6916FD9C, 0x7A1835B9) }, 
        { FName("Briefing"), FGuid(0xA72FF191, 0x421DA891, 0x293EBD86, 0xEAF22227) }, 
        { FName("TextStyleSet"), FGuid(0x5D6EAF9F, 0x4B6BAC05, 0x3A854DB2, 0x6C35F4E7) }, 
        { FName("BriefingSwitcher"), FGuid(0x90FF9C19, 0x4A466B6C, 0xC09AE4BE, 0xC052F196) }, 
        { FName("IRRNotesTextBlock_94"), FGuid(0x89398BF6, 0x499C0CCE, 0xD6D3C697, 0xD0E1F0F6) }, 
        { FName("Message"), FGuid(0x17936E24, 0x49971A61, 0x5351A385, 0xABA05136) }, 
        { FName("TextBox"), FGuid(0x9D5A60A9, 0x43950FC5, 0x883138BB, 0x33A9D4A3) }, 
        { FName("W_IRR_Line"), FGuid(0x81E9274A, 0x478A8EB7, 0x503A758F, 0xE3B2A0BE) }, 
        { FName("W_IRR_MissionBriefingControl"), FGuid(0xB65E92A3, 0x444C23DB, 0x7C21F6BB, 0x81571C2E) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x5E49B237, 0x4C7D1087, 0xB823ECA8, 0x7155CB24) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UDataTable* TextStyleSet = "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_IRR_Description_RichText.DT_IRR_Description_RichText'";
    struct FIRRMissionBriefing Briefing = {
        "Text": {},
        "BriefingAudioEvent": nullptr,
        "Priority": 0,
        "bCanSkip": true,
        "bInterruptedByDanger": true,
        "Subtitles": {}
    };
    bool Briefing? = true;
    bool ShowHeader? = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UW_IRR_MissionBriefingControl_C* W_IRR_MissionBriefingControl;
    class UW_IRR_Line_C* W_IRR_Line;
    class UVerticalBox* TextBox;
    class UIRRTextBlock* Message;
    class UIRRNotesTextBlock* IRRNotesTextBlock_94;
    class UWidgetSwitcher* BriefingSwitcher;

};