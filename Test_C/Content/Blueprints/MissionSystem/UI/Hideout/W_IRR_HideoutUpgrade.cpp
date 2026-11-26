class UW_IRR_HideoutUpgrade_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade.W_IRR_HideoutUpgrade_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade.W_IRR_HideoutUpgrade_C:ExecuteUbergraph_W_IRR_HideoutUpgrade'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Content"), FGuid(0xDB34D1B1, 0x491232B1, 0xA27DA5F1, 0x1CA69A59) }, 
        { FName("Image_106"), FGuid(0xFDEE2768, 0x24DC3E01, 0x86C39A49, 0xB2B15867) }, 
        { FName("PartyContainer"), FGuid(0x18E49935, 0xCD9E373A, 0x8ABC34EC, 0x7AB626F2) }, 
        { FName("UtilityBar"), FGuid(0x68676765, 0xC8B23B4A, 0xB624D269, 0x1FC407FE) }, 
        { FName("W_IRR_Background"), FGuid(0xB9DFCFC0, 0x9AAF3845, 0xAD1F4ABA, 0x61EA73AB) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0xBAB623F8, 0x4B4BBA25, 0xF38E6B93, 0x286BB5B1) }, 
        { FName("W_IRR_FANG_Header"), FGuid(0x8D598F91, 0x0AEB31A9, 0x9A9D4BDC, 0xD54D91A5) }, 
        { FName("W_IRR_Headline"), FGuid(0xDE30294A, 0x207539D9, 0xBCF0A4C7, 0x18F6D681) }, 
        { FName("W_IRR_HideoutUpgrade_Requirements"), FGuid(0x0E63F7CF, 0x404FD019, 0x580C718B, 0xD746D792) }, 
        { FName("W_IRR_PartyData"), FGuid(0x93702721, 0x3CB33A58, 0xB465D7B9, 0xF653A013) }, 
        { FName("W_MissionFactionRelation"), FGuid(0x0840705E, 0x4342280A, 0x76BD559A, 0x602A25B0) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0xB1BD025C, 0x4719ACC4, 0x21BF80A3, 0x4B432D10) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0x405A2685, 0x46824E11, 0xBBF1AD8A, 0x67C57CFE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_PartyData_C* W_IRR_PartyData;
    class UW_IRR_HideoutUpgrade_Overview_C* W_IRR_HideoutUpgrade_Requirements;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_FANG_Header_C* W_IRR_FANG_Header;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_UtilityBar_C* UtilityBar;
    class UOverlay* PartyContainer;
    class UImage* Image_106;
    class UOverlay* Content;

};