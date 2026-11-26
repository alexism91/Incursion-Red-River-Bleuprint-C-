class UW_IRR_GunsmithImport_C : public UIRRGunsmithPresetImportWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_GunsmithImport.W_IRR_GunsmithImport_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_GunsmithImport.W_IRR_GunsmithImport_C:ExecuteUbergraph_W_IRR_GunsmithImport'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("In Text"), FGuid(0x06A70E7C, 0x403B4023, 0xF8C2F196, 0xE6272F84) }, 
        { FName("IRRTextBlock_1"), FGuid(0x4411E192, 0x49A3D0D5, 0xFF4263AB, 0x4D51E75E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock_1;
    FText In Text;

};