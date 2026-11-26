class UW_GCPS_ResourceItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_ResourceItem.W_GCPS_ResourceItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_ResourceItem.W_GCPS_ResourceItem_C:ExecuteUbergraph_W_GCPS_ResourceItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ResourceType"), FGuid(0x9EA6CC80, 0x42A3EE9A, 0xB2F3F685, 0xEF317DC0) }, 
        { FName("Resource Tag"), FGuid(0x26019785, 0x456E4235, 0xB3027899, 0xF5B5CFFA) }, 
        { FName("CDATA"), FGuid(0xE9924993, 0x4A94152F, 0x79546796, 0x808CDB6A) }, 
        { FName("Amount"), FGuid(0x5F708015, 0x4D62C4A1, 0xA54CB99D, 0xFE594251) }, 
        { FName("Max"), FGuid(0x214A4E24, 0x462D7414, 0xEFEF19B8, 0x5A4C8FDE) }, 
        { FName("ResourceTypeText"), FGuid(0xF7A61029, 0x4E752D1D, 0x8C62D480, 0x43382DD4) }, 
        { FName("W_IRR_ResourceIcon"), FGuid(0xF6E454D8, 0x47E270FB, 0xAAFE2D87, 0xA03CB5D0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Resource Tag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ResourceIcon_C* W_IRR_ResourceIcon;
    class UIRRTextBlock* ResourceTypeText;
    class UIRRTextBlock* Max;
    class UIRRTextBlock* Amount;
    FText CDATA;
    class UIRRResourceType* ResourceType;

};