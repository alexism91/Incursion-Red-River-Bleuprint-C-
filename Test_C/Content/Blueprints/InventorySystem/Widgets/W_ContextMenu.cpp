class UW_ContextMenu_C : public UContextMenuWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextMenu.W_ContextMenu_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextMenu.W_ContextMenu_C:ExecuteUbergraph_W_ContextMenu'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MouseEntered"), FGuid(0x2CDD5F9A, 0x42B53D34, 0x4EED8BA9, 0x1C0B8BEE) }, 
        { FName("BP_IRRScaledSizedBox_C_0"), FGuid(0x650556E3, 0xF4B133E3, 0xA3B4CF2F, 0xFF979066) }, 
        { FName("W_IRR_Background"), FGuid(0x00C3066D, 0xA1DB3DC5, 0xAAC3A9C5, 0xAE016C5D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UWidgetBlueprintGeneratedClass* ContextButtonClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Button.W_ContextItem_Button_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background;
    class UBP_IRRScaledSizedBox_C* BP_IRRScaledSizedBox_C_0;
    bool MouseEntered;

};