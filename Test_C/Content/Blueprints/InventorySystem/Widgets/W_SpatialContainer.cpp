class UW_SpatialContainer_C : public USpatialContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SpatialContainer.W_SpatialContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SpatialContainer.W_SpatialContainer_C:ExecuteUbergraph_W_SpatialContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ExtraPadding"), FGuid(0x84BED1CB, 0x46BAEECD, 0x3EEDBCA6, 0xB559D3DB) }, 
        { FName("Shrink?"), FGuid(0x39E5DC26, 0x4E5B66E9, 0xD3DE989D, 0xA9ADC47B) }, 
        { FName("OnDragToolTip"), FGuid(0xFB479620, 0x49A3315C, 0xE1DD54B7, 0x7B3994E7) }, 
        { FName("Border_0"), FGuid(0x89E73B39, 0x4CDC3588, 0x9119EA27, 0x95F06F2A) }, 
        { FName("ItemContainer"), FGuid(0x98051274, 0x2B0430B7, 0xB2B1E53A, 0x9DF52FCB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* ItemContainer;
    class UBorder* Border_0;
    class UObject* OnDragToolTip;
    bool Shrink?;
    double ExtraPadding;

};