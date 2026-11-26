class UW_SecureContainer_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SecureContainer.W_SecureContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SecureContainer.W_SecureContainer_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SecureContainer.W_SecureContainer_C:ExecuteUbergraph_W_SecureContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SectionHeaders"), FGuid(0xEA348468, 0x41423B0D, 0x1056399B, 0x81E2302A) }, 
        { FName("SectionContainers"), FGuid(0x59213F14, 0x4052B37B, 0x6BEC1AB7, 0x3D3EE963) }, 
        { FName("InventorySections"), FGuid(0xC9B566DA, 0x4CACA4BE, 0x6C3C638A, 0x98120E7F) }, 
        { FName("ContainerElements"), FGuid(0x6CB9F96E, 0x43FC71BB, 0xC017A28C, 0x179AB817) }, 
        { FName("LootSection"), FGuid(0x78430E91, 0xBAD8345A, 0xB48D6E2B, 0x1FD41AD0) }, 
        { FName("Stash"), FGuid(0xCCE07F64, 0xCA5B3FFC, 0x8B128B03, 0x450B5F75) }, 
        { FName("Tooltip"), FGuid(0x3E4B4ABC, 0x45F026C5, 0xE5A678B3, 0x3E485E14) }, 
        { FName("W_IRR_Background_1"), FGuid(0x01F673C8, 0x2CEA30B4, 0x9A41AC43, 0xE06A4C16) }, 
        { FName("W_IRR_Button_Medium"), FGuid(0xC9E199DF, 0x44029052, 0x0B6DB0BA, 0x39B0E571) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Medium_C* W_IRR_Button_Medium;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UIRRTextBlock* Tooltip;
    class UW_SpatialContainer_C* Stash;
    class UW_InventorySection_C* LootSection;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* InventorySections;
    TArray<class UHorizontalBox*>* SectionContainers;
    TArray<class UW_InventorySection_C*>* SectionHeaders;

};