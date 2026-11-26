class UW_VendorFilterSection_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterSection.W_VendorFilterSection_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterSection.W_VendorFilterSection_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterSection.W_VendorFilterSection_C:ExecuteUbergraph_W_VendorFilterSection'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Hierarchy List Manager"), FGuid(0x8D471B6F, 0x4F91C689, 0x0C59B381, 0x86CB0715) }, 
        { FName("Hierarchy Index"), FGuid(0x897F3ACB, 0x4FA8CDA5, 0x53A930A9, 0x4AD75D78) }, 
        { FName("MainCategoryWidgets"), FGuid(0x2FAC5B31, 0x47006956, 0x548D31AF, 0xF83C95E0) }, 
        { FName("BoxList"), FGuid(0xDEDEB111, 0x0DE13F78, 0xBEC007FA, 0xFC410215) }, 
        { FName("W_IRR_ScrollBox_C_48"), FGuid(0xFF1771DE, 0x5AE03263, 0x854A74B1, 0xA5A3A401) }, 
        { FName("W_IRR_SearchBox"), FGuid(0x8EA747EE, 0x43BB382A, 0xAAFD54AE, 0xB56D00C4) }, 
        { FName("W_TierCategory"), FGuid(0xB32AFA01, 0x2DC53B95, 0x92A434A1, 0x663F08BB) }, 
        { FName("W_TierCategory_1"), FGuid(0x11191142, 0x9F4E3ED7, 0x976EFD9C, 0xE3777476) }, 
        { FName("W_TierCategory_2"), FGuid(0x0AC84DDC, 0x105639F7, 0x8F07EB8A, 0xC02B36EE) }, 
        { FName("W_TierCategory_3"), FGuid(0x8C7BF881, 0x65A2345F, 0x862C53BE, 0x426DB410) }, 
        { FName("W_VendorHeadline_4"), FGuid(0xA342D47C, 0x37A634E9, 0xBCA14CD4, 0x7E235B44) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_LaptopHeadline_C* W_VendorHeadline_4;
    class UW_VendorTierFilter_C* W_TierCategory_3;
    class UW_VendorTierFilter_C* W_TierCategory_2;
    class UW_VendorTierFilter_C* W_TierCategory_1;
    class UW_VendorTierFilter_C* W_TierCategory;
    class UW_IRR_SearchBox_C* W_IRR_SearchBox;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox_C_48;
    class UVerticalBox* BoxList;
    TArray<class UW_VendorCategoryFilter_C*>* MainCategoryWidgets;
    int Hierarchy Index;
    class UIRRHierarchyListManager* Hierarchy List Manager;

};