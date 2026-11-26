class UW_InventoryAdditionalStorageHeader_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryAdditionalStorageHeader.W_InventoryAdditionalStorageHeader_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryAdditionalStorageHeader.W_InventoryAdditionalStorageHeader_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryAdditionalStorageHeader.W_InventoryAdditionalStorageHeader_C:ExecuteUbergraph_W_InventoryAdditionalStorageHeader'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FactionRepMap"), FGuid(0x2D06B06D, 0x4FC824CF, 0x1180048B, 0x031ED738) }, 
        { FName("Main Container UID"), FGuid(0x261A5464, 0x4BCFF885, 0x1996D6B9, 0x8BFDD57E) }, 
        { FName("ContainerElement"), FGuid(0xC0A007AB, 0x4548C837, 0xA5C4DE9F, 0x52A85911) }, 
        { FName("InventoryComponent"), FGuid(0x62EF0447, 0x4E212BB3, 0x1530AFA6, 0xD787FBC2) }, 
        { FName("Storage Container"), FGuid(0xB00A8C75, 0x402C5755, 0x79AF6FB1, 0xFBD75395) }, 
        { FName("ShowTier"), FGuid(0x1CB7A637, 0x4AC04EA3, 0xD884AFB1, 0xA7A18B41) }, 
        { FName("AllowFolding"), FGuid(0xF1DEC05D, 0x4A36B515, 0xC70CAB90, 0xBBF02D87) }, 
        { FName("Folded"), FGuid(0x95447C19, 0x4FEBCE1C, 0x60CFCBA8, 0x3BEA0628) }, 
        { FName("OnFoldPressed"), FGuid(0x39103697, 0x4AB33372, 0xDA3A29BA, 0xD873985D) }, 
        { FName("SectionName"), FGuid(0x6E62EDD9, 0x4DE25223, 0x738191BB, 0x2FB80AAC) }, 
        { FName("OverrideSectionName"), FGuid(0x1CB93B7D, 0x4B54EAF9, 0xDF15E087, 0xCE5B02B0) }, 
        { FName("SectionNameText"), FGuid(0x916C1D0A, 0x8B6B3B3E, 0xB419390E, 0x59728BDE) }, 
        { FName("TierText"), FGuid(0x688B63CB, 0x7A3A3762, 0x8456F924, 0x0BF7A732) }, 
        { FName("W_UpgradeAdditionalStorageButton"), FGuid(0x8739FF1E, 0xA1733290, 0xA0E5F7FF, 0x77F5D146) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool OverrideSectionName = true;
    FName SectionName = FName("SectionName");
     OnFoldPressed = ;
    bool AllowFolding = true;
    bool ShowTier = true;
    struct FContainerElement ContainerElement = {
        "ContainerSettings": nullptr,
        "ContainerSlots": {},
        "ContainerTier": -1
    };
    struct FGuid Main Container UID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    TMap<float, int32> FactionRepMap = {
        { 75, 4 }, 
        { 50, 3 }, 
        { 25, 2 }, 
        { 0, 1 }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UpgradeAdditionalStorageButton_C* W_UpgradeAdditionalStorageButton;
    class UIRRTextBlock* TierText;
    class UIRRTextBlock* SectionNameText;
    bool Folded;
    class UInventoryStorageContainerSettings* Storage Container;
    class UInventoryComponent* InventoryComponent;

};