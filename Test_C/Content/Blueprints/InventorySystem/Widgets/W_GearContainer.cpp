class UW_GearContainer_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_GearContainer.W_GearContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_GearContainer.W_GearContainer_C:ExecuteUbergraph_W_GearContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GearContainer"), FGuid(0xDADA62F0, 0x493EDE22, 0xB2FD139E, 0x532EB686) }, 
        { FName("SectionHeaders"), FGuid(0xBD665E28, 0x4F602872, 0xF3327FA2, 0x1211DE6B) }, 
        { FName("SectionContainers"), FGuid(0xC14B0658, 0x44C1B16D, 0xCFFA1297, 0x1D27AF53) }, 
        { FName("InventorySections"), FGuid(0xAC2D391F, 0x4A798880, 0x0DB36490, 0x157086F4) }, 
        { FName("ContainerElements"), FGuid(0x642A8B6B, 0x496310CC, 0x23547DB0, 0xB393B332) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox_C_0;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_InventorySection_C* LootSection;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;
    class UBaseContainerWidget* GearContainer;

};