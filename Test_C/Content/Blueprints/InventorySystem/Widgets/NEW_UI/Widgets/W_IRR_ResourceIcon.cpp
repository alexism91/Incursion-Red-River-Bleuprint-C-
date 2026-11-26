class UW_IRR_ResourceIcon_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_ResourceIcon.W_IRR_ResourceIcon_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_ResourceIcon.W_IRR_ResourceIcon_C:ExecuteUbergraph_W_IRR_ResourceIcon'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Icon Size"), FGuid(0x211A349E, 0x4C93419A, 0x57F30C87, 0x615790C8) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x93D308D5, 0x4BD3CFCC, 0x0D4B7A91, 0xD37ABF71) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Icon Size = 32;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;

};