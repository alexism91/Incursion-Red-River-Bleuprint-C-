class UW_IRR_Laptop_HeaderCategory_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_Laptop_HeaderCategory.W_IRR_Laptop_HeaderCategory_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_Laptop_HeaderCategory.W_IRR_Laptop_HeaderCategory_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_Laptop_HeaderCategory.W_IRR_Laptop_HeaderCategory_C:ExecuteUbergraph_W_IRR_Laptop_HeaderCategory'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnHeaderCategoryClicked"), FGuid(0xA71E47D9, 0x40189B53, 0x7BB25889, 0x48480000) }, 
        { FName("Section Name"), FGuid(0xE8DB15A2, 0x47A620E8, 0xF32935A1, 0x4B7F94BD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText Section Name = FText("Category");
     OnHeaderCategoryClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_InventorySection_C* W_InventorySection_3;
    class UW_IRR_BaseButton_C* BackgroundButton;
    class UW_VendorSortArrow_C* Arrow;

};