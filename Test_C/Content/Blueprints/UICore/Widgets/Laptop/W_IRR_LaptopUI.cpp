class UW_IRR_LaptopUI_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_LaptopUI.W_IRR_LaptopUI_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_LaptopUI.W_IRR_LaptopUI_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_LaptopUI.W_IRR_LaptopUI_C:ExecuteUbergraph_W_IRR_LaptopUI'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Delay"), FGuid(0x773E9F3B, 0x44338625, 0x2F342BA2, 0x96DD9C7F) }, 
        { FName("Selected"), FGuid(0x9205CDCE, 0x49933BB9, 0xFE7FC8BE, 0x4B65998E) }, 
        { FName("BackgroundSwitcher"), FGuid(0xCDE6B5D4, 0x34C1355E, 0x8E98582A, 0xBFC87019) }, 
        { FName("Content"), FGuid(0xDB34D1B1, 0x491232B1, 0xA27DA5F1, 0x1CA69A59) }, 
        { FName("Image_106"), FGuid(0xFDEE2768, 0x24DC3E01, 0x86C39A49, 0xB2B15867) }, 
        { FName("PartyContainer"), FGuid(0x18E49935, 0xCD9E373A, 0x8ABC34EC, 0x7AB626F2) }, 
        { FName("TabMenuWidget"), FGuid(0xA5AF799F, 0x96E13BE3, 0xA4D86D9E, 0x3B5A864A) }, 
        { FName("UtilityBar"), FGuid(0x68676765, 0xC8B23B4A, 0xB624D269, 0x1FC407FE) }, 
        { FName("W_IRR_Background"), FGuid(0xB9DFCFC0, 0x9AAF3845, 0xAD1F4ABA, 0x61EA73AB) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0xB952283C, 0xB8973EEF, 0xA275B911, 0xA95A7383) }, 
        { FName("W_IRR_Background_Map_Dark"), FGuid(0x7AF93521, 0xF30A39D6, 0x8ED3D268, 0x42C56D0B) }, 
        { FName("W_IRR_FANG_Header"), FGuid(0x8D598F91, 0x0AEB31A9, 0x9A9D4BDC, 0xD54D91A5) }, 
        { FName("W_IRR_Headline"), FGuid(0xDE30294A, 0x207539D9, 0xBCF0A4C7, 0x18F6D681) }, 
        { FName("W_IRR_MapSelection"), FGuid(0x7FF70ED5, 0x44AF4451, 0x23DB9D8E, 0x675B1A92) }, 
        { FName("W_IRR_PartyData"), FGuid(0x93702721, 0x3CB33A58, 0xB465D7B9, 0xF653A013) }, 
        { FName("W_MissionFactionRelation"), FGuid(0x5A09BD67, 0x4B0347C5, 0x53A75097, 0x407C7CA0) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0xF4535F0D, 0x4C6452D8, 0xC0A8BFBC, 0xFAF17635) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0xB9EB1D7B, 0x4E21248E, 0x01C67998, 0x76774BCD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_PartyData_C* W_IRR_PartyData;
    class UW_IRR_MapSelection_C* W_IRR_MapSelection;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_FANG_Header_C* W_IRR_FANG_Header;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Map_Dark;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_UtilityBar_C* UtilityBar;
    class UW_IRR_HorizontalTabList_C* TabMenuWidget;
    class UOverlay* PartyContainer;
    class UImage* Image_106;
    class UOverlay* Content;
    class UWidgetSwitcher* BackgroundSwitcher;
    class UWB_SingleButton_C* Selected;
    double Delay;

};