class UW_LootContainer_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_LootContainer.W_LootContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_LootContainer.W_LootContainer_C:ExecuteUbergraph_W_LootContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SectionHeaders"), FGuid(0x45EC8B95, 0x437C453E, 0x3065EE88, 0xE29BB7A9) }, 
        { FName("SectionContainers"), FGuid(0x836EDD61, 0x46A2507A, 0x0E710CBB, 0xDA44AC39) }, 
        { FName("InventorySections"), FGuid(0xD2B8A105, 0x44A7F7C2, 0x534EA1BA, 0x4D36576C) }, 
        { FName("ContainerElements"), FGuid(0x68A50ECC, 0x427E97C3, 0xCB24C9A8, 0xD59DE778) }, 
        { FName("LootSection"), FGuid(0x78430E91, 0xBAD8345A, 0xB48D6E2B, 0x1FD41AD0) }, 
        { FName("Stash"), FGuid(0xCCE07F64, 0xCA5B3FFC, 0x8B128B03, 0x450B5F75) }, 
        { FName("W_IRR_Background_1"), FGuid(0x01F673C8, 0x2CEA30B4, 0x9A41AC43, 0xE06A4C16) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_SpatialContainer_C* Stash;
    class UW_InventorySection_C* LootSection;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;

};