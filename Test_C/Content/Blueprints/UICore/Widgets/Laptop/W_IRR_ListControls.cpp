class UW_IRR_ListControls_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_ListControls.W_IRR_ListControls_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_ListControls.W_IRR_ListControls_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_ListControls.W_IRR_ListControls_C:ExecuteUbergraph_W_IRR_ListControls'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SiteIndex"), FGuid(0xE13F1715, 0x460578F8, 0x36227E8C, 0xB1BC1117) }, 
        { FName("SiteCount"), FGuid(0xF7387EB0, 0x445CD6AB, 0x58E08287, 0xFF0F890C) }, 
        { FName("CallStart"), FGuid(0xB21BB604, 0x40983E1C, 0x50767B84, 0x95D022BE) }, 
        { FName("CallEnd"), FGuid(0xBE021ECC, 0x4ABACF51, 0x68F30CA1, 0x71FE67B9) }, 
        { FName("CallNextSite"), FGuid(0x682E644E, 0x4B05C5EB, 0xDBB3ED89, 0x7E918EA5) }, 
        { FName("OnSiteIndexUpdated"), FGuid(0x7C973460, 0x4FB1DD7C, 0xFBB03DB1, 0x7E6CCC8F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnSiteIndexUpdated = ;
     CallNextSite = ;
     CallEnd = ;
     CallStart = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* TotalSightCountText;
    class UIRRTextBlock* SightIndexText_1;
    class UIRRTextBlock* SightIndexText;
    class UW_IRR_ArrowButton_C* RightButton;
    class UW_IRR_ArrowButton_C* LeftButton;
    class UW_IRR_ArrowButton_C* DoubleRightButton;
    class UW_IRR_ArrowButton_C* DoubleLeftButton;
    int SiteCount;
    int SiteIndex;

};