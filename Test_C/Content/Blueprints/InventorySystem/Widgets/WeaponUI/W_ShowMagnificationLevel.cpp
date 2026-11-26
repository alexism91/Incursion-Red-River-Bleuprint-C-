class UW_ShowMagnificationLevel_C : public UShowMagCapacityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowMagnificationLevel.W_ShowMagnificationLevel_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowMagnificationLevel.W_ShowMagnificationLevel_C:ExecuteUbergraph_W_ShowMagnificationLevel'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Sight Mode Key"), FGuid(0x809F151C, 0x40606CE9, 0x8747F7B5, 0x59F0C506) }, 
        { FName("Magnification Level"), FGuid(0x69D699E1, 0x4DB00659, 0x1552D082, 0xADEF1FEB) }, 
        { FName("Sight Component"), FGuid(0xDF1DF546, 0x4647DE12, 0x8070EE82, 0xAB76C185) }, 
        { FName("MagnificationLevel"), FGuid(0x16224FD1, 0xDDCE3304, 0xAC64B304, 0xC78B9B6F) }, 
        { FName("Mode"), FGuid(0xEE308EFA, 0x714D36D1, 0x896CBAF9, 0x53D96F97) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Collapsed;
    class UIRRTextBlock* Mode;
    class UIRRTextBlock* MagnificationLevel;
    class USightComponent* Sight Component;
    double Magnification Level;
    FName Sight Mode Key;

};