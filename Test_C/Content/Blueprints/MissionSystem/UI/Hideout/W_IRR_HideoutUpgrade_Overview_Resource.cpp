class UW_IRR_HideoutUpgrade_Overview_Resource_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Resource.W_IRR_HideoutUpgrade_Overview_Resource_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Resource.W_IRR_HideoutUpgrade_Overview_Resource_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Resource'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("EnoughResources?"), FGuid(0xCF0B7706, 0x4E6B83BD, 0xE6CC5C8A, 0xAE13F61F) }, 
        { FName("Required Amount"), FGuid(0x9E3CE5A5, 0x42B14F09, 0xC027239A, 0x8E6F04A8) }, 
        { FName("Resource Tag"), FGuid(0x862F8B3A, 0x42B38652, 0x049BFBA8, 0xDB6F0D1C) }, 
        { FName("Border_1"), FGuid(0x0191D654, 0x416FBF63, 0x9C49A7B5, 0x4F70A0C0) }, 
        { FName("IRRTextBlock"), FGuid(0xABFE0F1B, 0x48DC78BE, 0x598BC3BC, 0xF4434F2B) }, 
        { FName("W_EstimateBar"), FGuid(0xB5E1F549, 0x4F5A614E, 0x250C4693, 0xB9B212B9) }, 
        { FName("W_IRR_HideoutUpgrade_MinMaxText"), FGuid(0xF9B9AEF1, 0x453A2F8E, 0xE966E793, 0xCEAF09EA) }, 
        { FName("W_IRR_ResourceIcon"), FGuid(0xFDBADCF2, 0x42A40DF3, 0x37F99990, 0x9D5C3EBA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Resource Tag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ResourceIcon_C* W_IRR_ResourceIcon;
    class UW_IRR_HideoutUpgrade_MinMaxText_C* W_IRR_HideoutUpgrade_MinMaxText;
    class UW_GeneralStatBar_C* W_EstimateBar;
    class UIRRTextBlock* IRRTextBlock;
    class UBorder* Border_1;
    int Required Amount;
    bool EnoughResources?;

};