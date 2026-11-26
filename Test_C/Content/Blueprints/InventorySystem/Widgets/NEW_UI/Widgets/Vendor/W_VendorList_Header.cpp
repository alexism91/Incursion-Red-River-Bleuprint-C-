class UW_VendorList_Header_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Header.W_VendorList_Header_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Header.W_VendorList_Header_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Header.W_VendorList_Header_C:ExecuteUbergraph_W_VendorList_Header'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnSortCategoryChanged"), FGuid(0xB0F6DD15, 0x4CFD9620, 0x29EE43B1, 0x0EA3BD0F) }, 
        { FName("ActiveSortCategory"), FGuid(0xC86AEA1F, 0x4FA55BDE, 0xA909EAA1, 0xFE256C7F) }, 
        { FName("SortArrowArray"), FGuid(0x58F3E2EF, 0x4AC2AF3C, 0xA4BAEDAC, 0x97F96F63) }, 
        { FName("OnTextChanged"), FGuid(0xD445DB77, 0x4DC6EF62, 0x148E17B7, 0x650018BD) }, 
        { FName("FactionButton"), FGuid(0x50560B40, 0x24EA3FE0, 0x80B03D44, 0x8EC5D90F) }, 
        { FName("ListingButton"), FGuid(0x2A0819C2, 0xBE723B93, 0xB894B922, 0x59994FF3) }, 
        { FName("PriceButton"), FGuid(0x7A8E863C, 0x68D432BE, 0x9263A9B0, 0x978D6336) }, 
        { FName("StockButton"), FGuid(0xE66453DB, 0xE34930F4, 0xAD3D847D, 0x7F207697) }, 
        { FName("W_IRR_Line"), FGuid(0xB598B792, 0xDC9F3665, 0x815CBF9D, 0xEF500475) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnTextChanged = ;
     OnSortCategoryChanged = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Laptop_HeaderCategory_C* StockButton;
    class UW_IRR_Laptop_HeaderCategory_C* PriceButton;
    class UW_IRR_Laptop_HeaderCategory_C* ListingButton;
    class UW_IRR_Laptop_HeaderCategory_C* FactionButton;
    TMap<EIRRVendorSortCategories, class UW_VendorSortArrow_C*>* SortArrowArray;
    EIRRVendorSortCategories ActiveSortCategory;

};