class UW_LootItem_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_LootItem.W_LootItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_LootItem.W_LootItem_C:ExecuteUbergraph_W_LootItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("New Main Container UID"), FGuid(0x39C91B64, 0x4C546171, 0x69D229A6, 0xE11BFE25) }, 
        { FName("New Inventory Component"), FGuid(0x8329094F, 0x47DF9A25, 0xB8A575B9, 0x2A84A841) }, 
        { FName("ItemContainer"), FGuid(0xC56DE963, 0x4D70AAC5, 0x27BAEBB8, 0xCE9F7E50) }, 
        { FName("SectionHeaders"), FGuid(0x9F991A49, 0x4250A603, 0x817D4CA4, 0xEAD9A5FE) }, 
        { FName("SectionContainers"), FGuid(0x600B8C42, 0x488F3EA7, 0x3DD82292, 0x97C07117) }, 
        { FName("InventorySections"), FGuid(0x9FB4F80E, 0x49C004BE, 0xF55E5C92, 0xC0DB26A8) }, 
        { FName("ContainerElements"), FGuid(0x46FAEF66, 0x43A9ED13, 0x66589A86, 0x6CEE059B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGuid New Main Container UID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventorySection_C* LootSection;
    class UW_IRR_ScrollBox_C* Content;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;
    TSubclassOf<UUserWidget> ItemContainer;
    class UInventoryComponent* New Inventory Component;

};