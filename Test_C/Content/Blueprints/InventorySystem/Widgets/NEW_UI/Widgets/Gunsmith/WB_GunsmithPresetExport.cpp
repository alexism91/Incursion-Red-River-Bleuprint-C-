class UWB_GunsmithPresetExport_C : public UIRRGunsmithPresetExportWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/WB_GunsmithPresetExport.WB_GunsmithPresetExport_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/WB_GunsmithPresetExport.WB_GunsmithPresetExport_C:ExecuteUbergraph_WB_GunsmithPresetExport'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("In Text"), FGuid(0x477D0CEF, 0x43386414, 0xD488B4A6, 0xE81FD8F5) }, 
        { FName("IRRTextBlock_1"), FGuid(0x01D9AF46, 0x4B106601, 0xD55F18B7, 0xDD253C18) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock_1;
    FText In Text;

};