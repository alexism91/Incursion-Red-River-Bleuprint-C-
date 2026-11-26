class UW_MissionList_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionList_Item.W_MissionList_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionList_Item.W_MissionList_Item_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionList_Item.W_MissionList_Item_C:NewAnimation_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionList_Item.W_MissionList_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionList_Item.W_MissionList_Item_C:ExecuteUbergraph_W_MissionList_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Selected?"), FGuid(0x081B3867, 0x4614990A, 0x5DF76FA1, 0xB4888170) }, 
        { FName("ShowBackground"), FGuid(0x7647553E, 0x46242E59, 0x5B63E4AE, 0x4D2B8522) }, 
        { FName("OnHovered"), FGuid(0xD3A73A54, 0x43010C0C, 0xA1B5F283, 0x5F4AE90E) }, 
        { FName("ShowStateInfo"), FGuid(0xB4586FB4, 0x470A5D8E, 0x259EC98A, 0xA79A165D) }, 
        { FName("ShowMapInfo"), FGuid(0x7C816AC0, 0x4C570D40, 0xD8125784, 0x4D9DCE0E) }, 
        { FName("ShowFactionInfo"), FGuid(0x4941189A, 0x41AB7B9E, 0x7C08C095, 0x36F078D9) }, 
        { FName("ShowMissionInfoDescription"), FGuid(0x6BB97FFB, 0x44BC416E, 0x6F26D2A8, 0x4C7D55DA) }, 
        { FName("ShowMissionInfo"), FGuid(0x0AABD6E9, 0x4872CCC2, 0xBE496A9F, 0x89E449B0) }, 
        { FName("OnSelected"), FGuid(0x826CD8A3, 0x4F73AB0A, 0xA0B8EF87, 0x92B95B5B) }, 
        { FName("BaseColor"), FGuid(0xA164D502, 0x48AA3671, 0xBB661D8F, 0x0A1A0907) }, 
        { FName("Track?"), FGuid(0x365660F4, 0x45814528, 0xA0726D97, 0xC2CE1064) }, 
        { FName("Mission Data"), FGuid(0x324CA6F7, 0x459AB272, 0xBA9FEC92, 0x236B3DCF) }, 
        { FName("ItemRef"), FGuid(0x1121C32B, 0x478BEE58, 0xD2172287, 0x53021EE4) }, 
        { FName("Target"), FGuid(0x599A2BF1, 0x4A6D04A4, 0xA449AE8D, 0x404BAFEC) }, 
        { FName("NewAnimation"), FGuid(0x81C54EA8, 0x464C7EFE, 0xA71CEFBE, 0xDC701824) }, 
        { FName("FadeIn"), FGuid(0xB6A90505, 0x4A4F2AE6, 0x579DAD82, 0x03C98AD1) }, 
        { FName("AgentIcon"), FGuid(0x4ED43134, 0xDC663EA3, 0x94571851, 0xC4AF5A4D) }, 
        { FName("BackgroundContext"), FGuid(0x71575196, 0x744939F2, 0x94403109, 0x125B4223) }, 
        { FName("BackgroundFaction"), FGuid(0xA0C7A254, 0x0BFC38F7, 0x87AF9818, 0xA74B4D77) }, 
        { FName("BackgroundInfo"), FGuid(0xB31C5DE5, 0x3B8034B0, 0xA9426998, 0x553FC0E4) }, 
        { FName("BackgroundMapInfo"), FGuid(0x3821B443, 0x4E46AB68, 0xA7002E86, 0xDC65CA88) }, 
        { FName("BorderContext"), FGuid(0x84D8E7FD, 0x48539427, 0xD24D99A3, 0x46449426) }, 
        { FName("BorderFaction"), FGuid(0xCD867B8A, 0x4077BDBB, 0xE7C03497, 0x58669011) }, 
        { FName("BorderInfo"), FGuid(0x0F7B770B, 0xC162354D, 0x97726DE7, 0xF07FC225) }, 
        { FName("BorderMapInfo"), FGuid(0x25A97772, 0x4F2CA6F7, 0xA32018A4, 0xEAD4798B) }, 
        { FName("Button"), FGuid(0x5B31C312, 0xA9973099, 0xA7455ECA, 0x6751DCF3) }, 
        { FName("CompletedBackground"), FGuid(0x41D542C7, 0x1ED933A5, 0xA1F3B095, 0xBDD3E4A7) }, 
        { FName("FactionInfo"), FGuid(0x4C863AFB, 0x55673D21, 0x94EF71C6, 0xE6CD9AF4) }, 
        { FName("FactionInfoSpacer"), FGuid(0xC61E2166, 0x4A294DBA, 0x86CC869F, 0x6CC0A39F) }, 
        { FName("Image_135"), FGuid(0xB522FDD9, 0x4D0B9E70, 0x1E67A58A, 0x73D3D416) }, 
        { FName("Image_208"), FGuid(0x67B5D625, 0x42A61B4A, 0xB5C98A9B, 0x5D022D44) }, 
        { FName("ItemSizeBox"), FGuid(0x5267E660, 0x15213D4E, 0x95601A32, 0x79DEDF76) }, 
        { FName("MapInfo"), FGuid(0xFD873E6B, 0x41527967, 0xB7840BB3, 0x455E279A) }, 
        { FName("MapInfoSpacer"), FGuid(0x3FB34A46, 0xA25E3A25, 0x8E8E97B2, 0x029501B6) }, 
        { FName("MissionFaction"), FGuid(0x2CF2CC44, 0x61383D26, 0xB90E132B, 0xCF09F961) }, 
        { FName("MissionFactionText"), FGuid(0x7421B380, 0x403D9357, 0x02F17D84, 0x25925336) }, 
        { FName("MissionInfo"), FGuid(0xD7ACD685, 0xCFB73DA3, 0xBE6BE0AD, 0x1B34C86A) }, 
        { FName("MissionMap"), FGuid(0xFFDA941B, 0x460FCF91, 0xCF226A80, 0x2E7F57FE) }, 
        { FName("MissionTitle"), FGuid(0x36E8EDC9, 0x4BFB3126, 0xADA0C9F5, 0x5932D1F6) }, 
        { FName("NotTracked"), FGuid(0x58C077B9, 0x4268665C, 0xB897F398, 0x2ACDF288) }, 
        { FName("Progression"), FGuid(0x32E24DCE, 0x5E883917, 0x8C80496F, 0xCA247F13) }, 
        { FName("StateInfo"), FGuid(0x71402EB2, 0xD77939C4, 0x93303FD4, 0xE4D9BD52) }, 
        { FName("StateInfoSpacer"), FGuid(0x1DA49585, 0xCFBB3765, 0x9EA0B0CA, 0x24188387) }, 
        { FName("W_IRR_Background"), FGuid(0x8C1A282A, 0xCA8F3156, 0xB101449D, 0x30711310) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x095BC031, 0x414A23DF, 0xAEBD549F, 0x17262364) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Track? = true;
     OnSelected = ;
    bool ShowMissionInfo = true;
    bool ShowMissionInfoDescription = true;
    bool ShowStateInfo = true;
     OnHovered = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UW_IRR_Background_C* W_IRR_Background;
    class USpacer* StateInfoSpacer;
    class USizeBox* StateInfo;
    class UIRRTextBlock* Progression;
    class UWB_Base_Icon_Notification_C* NotTracked;
    class UIRRTextBlock* MissionTitle;
    class UIRRTextBlock* MissionMap;
    class USizeBox* MissionInfo;
    class UIRRTextBlock* MissionFactionText;
    class UIRRTextBlock* MissionFaction;
    class USpacer* MapInfoSpacer;
    class USizeBox* MapInfo;
    class USizeBox* ItemSizeBox;
    class UImage* Image_208;
    class UImage* Image_135;
    class USpacer* FactionInfoSpacer;
    class USizeBox* FactionInfo;
    class UBorder* CompletedBackground;
    class UW_IRR_BaseButton_C* Button;
    class UBorder* BorderMapInfo;
    class UBorder* BorderInfo;
    class UBorder* BorderFaction;
    class UBorder* BorderContext;
    class UBorder* BackgroundMapInfo;
    class UBorder* BackgroundInfo;
    class UBorder* BackgroundFaction;
    class UBorder* BackgroundContext;
    class UW_AgentIcon_C* AgentIcon;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* NewAnimation;
    class UWidgetSwitcher* Target;
    class UW_InventoryItem_C* ItemRef;
    class UIRRMissionData* Mission Data;
    class UMaterialInstance* BaseColor;
    bool ShowFactionInfo;
    bool ShowMapInfo;
    bool ShowBackground;
    bool Selected?;

};