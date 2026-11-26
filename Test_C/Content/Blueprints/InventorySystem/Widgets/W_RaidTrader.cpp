class UW_RaidTrader_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_RaidTrader.W_RaidTrader_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_RaidTrader.W_RaidTrader_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_RaidTrader.W_RaidTrader_C:ExecuteUbergraph_W_RaidTrader'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SectionHeaders"), FGuid(0x6886C921, 0x4C54889F, 0x02C7F383, 0xF2A5FB5F) }, 
        { FName("SectionContainers"), FGuid(0x9BAC5B06, 0x448294B3, 0x5CA58CA6, 0xD34A2594) }, 
        { FName("InventorySections"), FGuid(0xF618D380, 0x4DCDE820, 0x857417BF, 0x898D947A) }, 
        { FName("ContainerElements"), FGuid(0x648274DE, 0x4DDA3C2F, 0x583D8BA5, 0xA0769250) }, 
        { FName("Stash"), FGuid(0xD09A6D11, 0x4EFB4AC2, 0x1B64A296, 0x9DA4F3EB) }, 
        { FName("StashFilterTab"), FGuid(0x63C643A7, 0x4D27805C, 0x628F58B5, 0xED82DBE0) }, 
        { FName("W_IRR_Background"), FGuid(0x5FC488C5, 0x4462E15E, 0x79904C83, 0x1CAB9560) }, 
        { FName("W_IRR_Background_1"), FGuid(0x59F7281C, 0x42D24AE1, 0xBCEEC089, 0xAE2AE230) }, 
        { FName("W_IRR_Line"), FGuid(0x46379C38, 0x45B95E76, 0xDC0C73BD, 0xB69C9F39) }, 
        { FName("W_IRR_SearchBox_100"), FGuid(0x2917B43A, 0x46517509, 0x1318B6BA, 0x1B2AF87C) }, 
        { FName("W_RaidTradeWidget"), FGuid(0x196ABCF9, 0x468E4877, 0x5473D1BB, 0x23018D83) }, 
        { FName("W_StashSection"), FGuid(0xC37BFB54, 0x4CFD3ACC, 0xD38F0BA3, 0xDDDB2951) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_InventorySection_C* W_StashSection;
    class UW_RaidTradeWidget_C* W_RaidTradeWidget;
    class UW_IRR_SearchBox_C* W_IRR_SearchBox_100;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_IRR_HorizontalTabList_C* StashFilterTab;
    class UW_SpatialContainer_C* Stash;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;

};