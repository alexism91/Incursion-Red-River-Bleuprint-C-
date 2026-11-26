class UW_VendorCategoryFilter_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorCategoryFilter.W_VendorCategoryFilter_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorCategoryFilter.W_VendorCategoryFilter_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorCategoryFilter.W_VendorCategoryFilter_C:ExecuteUbergraph_W_VendorCategoryFilter'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BaseColor"), FGuid(0x9D57AF5E, 0x48974DFD, 0xE3763EB1, 0x455FE511) }, 
        { FName("ChildIndex"), FGuid(0xFE480FBB, 0x4347F227, 0x4E3566AD, 0xCAA43F85) }, 
        { FName("DirectFilters"), FGuid(0xA89A3820, 0x45F20E16, 0x4E81DFA0, 0xA89E17A5) }, 
        { FName("Valid"), FGuid(0xB3C3BAD0, 0x47FEA3D8, 0x607FE5BC, 0x06257410) }, 
        { FName("OnValidCategory"), FGuid(0xA55F6ACD, 0x48786F6A, 0x028C9787, 0x5370CB83) }, 
        { FName("IsFolded"), FGuid(0x8973670E, 0x40BBD2FD, 0x59337797, 0xA0964B8E) }, 
        { FName("IsSelected"), FGuid(0x856447B5, 0x41E95ECF, 0x36DABBAB, 0xB1AAD11F) }, 
        { FName("CategoryTag"), FGuid(0xE9EF47E8, 0x4AA21A35, 0x05CCCE86, 0xB4E1E2BC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag CategoryTag = {
        "TagName": FName("None")
    };
    bool IsFolded = true;
     OnValidCategory = ;
    class UMaterialInstanceConstant* BaseColor = "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_Readability.MI_IRR_Basic_Readability'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseButton_C* W_IRR_BaseButton;
    class USpacer* TreeIndexSpacer;
    class USizeBox* SizeBox_0;
    class UScaleBox* IconScaleBox;
    class UImage* Icon;
    class UW_IRR_BaseButton_C* FoldButton;
    class UIRRTextBlock* CategoryText;
    class UVerticalBox* CategoryList;
    class UBorder* Border_65;
    class UBorder* BackgroundBorder;
    bool IsSelected;
    bool Valid;
    TArray<class UW_VendorCategoryFilter_C*>* DirectFilters;
    int ChildIndex;

};