class UW_IRR_RaidSummary_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummary.W_IRR_RaidSummary_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummary.W_IRR_RaidSummary_C:FadeInOut_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummary.W_IRR_RaidSummary_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummary.W_IRR_RaidSummary_C:ExecuteUbergraph_W_IRR_RaidSummary'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Level Summary"), FGuid(0x310CF690, 0x42441C9F, 0xC3B6A789, 0x09922DA9) }, 
        { FName("FadeInOut"), FGuid(0x6E5381B1, 0x3F503E10, 0x8989BAF5, 0x479263CF) }, 
        { FName("Bone"), FGuid(0xAAB304AA, 0x69AA36FF, 0xB48095AE, 0x5FF33DDD) }, 
        { FName("CompletedOperations"), FGuid(0xBFA3F03A, 0x46FFDF79, 0x8BA5C5A3, 0x02AAA92F) }, 
        { FName("CompletedTasks"), FGuid(0x756E8527, 0x127D3935, 0x92BFC630, 0x2980C866) }, 
        { FName("Content"), FGuid(0x661EB2E6, 0x4E1C3BE3, 0x9BAAA375, 0xC673453B) }, 
        { FName("DeadDataContainer"), FGuid(0x9EFCCBFF, 0x00F93707, 0x8BDBF787, 0x2582880B) }, 
        { FName("DeathDataContainer"), FGuid(0x60986424, 0x73763DDC, 0xB5B11539, 0x3243E398) }, 
        { FName("Eliminator"), FGuid(0xA1E375CC, 0xE7D136E3, 0xBE9154DF, 0x389BDF6C) }, 
        { FName("FactionProgressBox"), FGuid(0x9933862E, 0x24E1337B, 0x8CB947FE, 0x0CB61F54) }, 
        { FName("Image"), FGuid(0x67AD6197, 0x18713B6F, 0xAF87B2C7, 0xCF1DBD8C) }, 
        { FName("Image_1"), FGuid(0x8A10ECF0, 0x5AF83906, 0x8232F771, 0x2A1BF7F9) }, 
        { FName("Image_2"), FGuid(0x18E652E7, 0x58E532B2, 0xA3D83FFB, 0xE5F6864A) }, 
        { FName("Image_62"), FGuid(0x11457D1D, 0xFBDF3D80, 0x87C863D3, 0xBEC95C3C) }, 
        { FName("Image_106"), FGuid(0xEDFC85E3, 0x80193491, 0x82D87F76, 0xE08AAF94) }, 
        { FName("Image_151"), FGuid(0x4C23C660, 0x676A397A, 0xAFA3BE3F, 0x5E50BA10) }, 
        { FName("Kills"), FGuid(0xB6E1792B, 0x228A3EE4, 0x89CAD8BE, 0xA7D9AADA) }, 
        { FName("LootValue"), FGuid(0x065745E4, 0x296839AE, 0xB3BA651B, 0xD862F98D) }, 
        { FName("OperationSuccess"), FGuid(0x7EB9A44E, 0x8D99344A, 0x92CC069F, 0x1163C0E5) }, 
        { FName("RaidTime"), FGuid(0x2806185D, 0x5B773DF4, 0x970D4348, 0x632ABC52) }, 
        { FName("Ready"), FGuid(0x31A5DD17, 0xE1753568, 0xA26F7B88, 0x53653E41) }, 
        { FName("SuccessSwitcher"), FGuid(0xA5378583, 0xFCBD3777, 0x8BD39E3D, 0x62310DB4) }, 
        { FName("W_IRR_Background"), FGuid(0xC089F540, 0xCFA537F5, 0x8B2836D4, 0x2273E542) }, 
        { FName("W_IRR_Background_1"), FGuid(0x65940929, 0x97323382, 0xBABA05D8, 0x685718F5) }, 
        { FName("W_IRR_Background_2"), FGuid(0xA0B4F113, 0x5C973CEA, 0x96181CB5, 0x19F01380) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x35C39E09, 0x75143928, 0x9A35D494, 0x779D4D8A) }, 
        { FName("W_IRR_Background_GridAndBlur_1"), FGuid(0xF89BD326, 0xC7B135FA, 0xB4FCFFA4, 0xA2E37902) }, 
        { FName("W_IRR_Background_GridAndBlur_2"), FGuid(0xDF9CBE15, 0x3BBD3E86, 0xA4688FA3, 0x7FDC18E2) }, 
        { FName("W_IRR_Background_Map_Dark"), FGuid(0x89FE2F03, 0x608E3515, 0xB4CFD342, 0xEB45F676) }, 
        { FName("W_IRR_Background_Map_Dark_1"), FGuid(0xB883906D, 0x02B832AD, 0x95A90D39, 0x9D54438A) }, 
        { FName("W_IRR_RaidSummaryItem"), FGuid(0x4E75A944, 0x10573AEA, 0xAE562E1E, 0xC8F48DC3) }, 
        { FName("W_IRR_RaidSummaryItem_1"), FGuid(0xD01BF4BF, 0x6955373F, 0xAA60C7C1, 0xE4A30365) }, 
        { FName("W_IRR_RaidSummaryItem_2"), FGuid(0x7C78DDA2, 0x1C1C313C, 0xB80CE07E, 0xC2414269) }, 
        { FName("W_IRR_RaidSummaryItem_3"), FGuid(0xFD39A979, 0x37A132AB, 0xA3590A04, 0x8E91541D) }, 
        { FName("W_IRR_RaidSummaryItem_4"), FGuid(0x78D4AC82, 0x2D603874, 0xAD40B6CC, 0x4A839C0B) }, 
        { FName("W_IRR_RaidSummaryItem_5"), FGuid(0xBA9A3461, 0xB80531B6, 0xAA320568, 0x9A8AEA0F) }, 
        { FName("W_IRR_RaidSummaryItem_6"), FGuid(0xE3BF6326, 0xADA934AC, 0xB656EF11, 0x531ACBBF) }, 
        { FName("Weapon"), FGuid(0x302AAA60, 0x7433346A, 0x95E31201, 0x45771717) }, 
        { FName("WeaponBox"), FGuid(0x6749E9B6, 0xA4A63E04, 0x92D57C4F, 0xE05DE8BA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* WeaponBox;
    class UIRRTextBlock* Weapon;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_6;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_5;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_4;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_3;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_2;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem_1;
    class UW_IRR_RaidSummaryItem_C* W_IRR_RaidSummaryItem;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Map_Dark_1;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Map_Dark;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur_2;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur_1;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background_2;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_IRR_Background_C* W_IRR_Background;
    class UWidgetSwitcher* SuccessSwitcher;
    class UW_IRR_BaseButton_C* Ready;
    class UIRRTextBlock* RaidTime;
    class UIRRTextBlock* OperationSuccess;
    class UIRRTextBlock* LootValue;
    class UW_IRR_CurrencyText_C* Kills;
    class UImage* Image_151;
    class UImage* Image_106;
    class UImage* Image_62;
    class UImage* Image_2;
    class UImage* Image_1;
    class UImage* Image;
    class UVerticalBox* FactionProgressBox;
    class UIRRTextBlock* Eliminator;
    class UOverlay* DeathDataContainer;
    class UVerticalBox* DeadDataContainer;
    class UOverlay* Content;
    class UW_IRR_CurrencyText_C* CompletedTasks;
    class UW_IRR_CurrencyText_C* CompletedOperations;
    class UIRRTextBlock* Bone;
    class UWidgetAnimation* FadeInOut;
    class UW_IRR_RaidSummaryLevel_C* Level Summary;

};