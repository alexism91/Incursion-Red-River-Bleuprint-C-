class UW_IRR_SearchBox_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_SearchBox.W_IRR_SearchBox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_SearchBox.W_IRR_SearchBox_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_SearchBox.W_IRR_SearchBox_C:ExecuteUbergraph_W_IRR_SearchBox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnSearch"), FGuid(0xBBCB8BD7, 0x497DBD5A, 0x1C2216B6, 0xABC6BFEA) }, 
        { FName("SearchBox"), FGuid(0x9F0FEC05, 0x6B173F0D, 0x9218C5B5, 0x26D601FC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnSearch = ;
    bool bIsFocusable = true;
    bool bHasScriptImplementedPaint = false;
    class UEditableTextBox* SearchBox;

};