class UW_VicinityContainer_C : public UIRRVicinityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_VicinityContainer.W_VicinityContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_VicinityContainer.W_VicinityContainer_C:ExecuteUbergraph_W_VicinityContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SectionHeaders"), FGuid(0xB6F04ABF, 0x4C7DF257, 0x222E3582, 0x6D7A3A9C) }, 
        { FName("SectionContainers"), FGuid(0x1D117E65, 0x485B194B, 0x51007782, 0x6099AC04) }, 
        { FName("InventorySections"), FGuid(0x109F070F, 0x457E344B, 0x350119BD, 0xEAA3AC56) }, 
        { FName("ContainerElements"), FGuid(0x0FAD19C5, 0x4D524B59, 0x6E3C6C81, 0x65AAA8C9) }, 
        { FName("LootSection"), FGuid(0x78430E91, 0xBAD8345A, 0xB48D6E2B, 0x1FD41AD0) }, 
        { FName("W_IRR_Background_1"), FGuid(0x01F673C8, 0x2CEA30B4, 0x9A41AC43, 0xE06A4C16) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UWidgetBlueprintGeneratedClass* ContainerElementClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SpatialContainer.W_SpatialContainer_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_InventorySection_C* LootSection;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;

};