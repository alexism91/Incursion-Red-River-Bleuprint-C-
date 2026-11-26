class UW_UtilityBar_C : public UIRRUtilityBar
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_UtilityBar.W_UtilityBar_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_UtilityBar.W_UtilityBar_C:ExecuteUbergraph_W_UtilityBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("InputActions"), FGuid(0x047E405B, 0x495BE402, 0xA1DD76A8, 0x655BAFAA) }, 
        { FName("ItemWidgetClass"), FGuid(0xE2B13050, 0x4BF272DE, 0xC0A50FB6, 0x640F5510) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UWidgetBlueprintGeneratedClass* ItemWidgetClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InputAction_Base.W_InputAction_Base_C'";
    TArray<class UObject*> InputActions = {
        nullptr
    };
    TArray<struct FDataTableRowHandle> Items = {
        {
            "DataTable": "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_UI_InputActions.DT_UI_InputActions'",
            "RowName": FName("Stash")
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* ItemBox;

};