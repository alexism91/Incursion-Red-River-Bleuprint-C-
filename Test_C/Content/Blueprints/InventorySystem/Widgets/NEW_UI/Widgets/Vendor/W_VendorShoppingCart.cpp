class UW_VendorShoppingCart_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorShoppingCart.W_VendorShoppingCart_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorShoppingCart.W_VendorShoppingCart_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorShoppingCart.W_VendorShoppingCart_C:ExecuteUbergraph_W_VendorShoppingCart'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Hierarchy List Manager"), FGuid(0x7001DE27, 0x44CEA0C6, 0x5C9E079F, 0x4D7B01C6) }, 
        { FName("ShoppingCartWidgets"), FGuid(0x0DB7E2DB, 0x4D956A38, 0xD7439680, 0x7E150B81) }, 
        { FName("ShoppingCartItems"), FGuid(0xD0A9B3F2, 0x4F427FDA, 0x7040E1B7, 0x9ECA96B7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ScrollBox_C* VendorShoppingCartList;
    class UIRRTextBlock* SectionNameText;
    class UW_IRR_CurrencyText_C* Secondary;
    class UW_IRR_Button_Laptop_Big_C* PurchaseButton;
    class UW_IRR_CurrencyText_C* Primary;
    class UIRRTextBlock* ErrorText;
    class UVerticalBox* ErrorMessageBox;
    TArray<struct FIRRVendorStockItem> ShoppingCartItems;
    TMap<struct FGuid, class UW_ShoppingCartMainItem_C*>* ShoppingCartWidgets;
    class UIRRHierarchyListManager* Hierarchy List Manager;

};