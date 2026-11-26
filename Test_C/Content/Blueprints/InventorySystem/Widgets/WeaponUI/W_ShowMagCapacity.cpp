class UW_ShowMagCapacity_C : public UShowMagCapacityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowMagCapacity.W_ShowMagCapacity_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowMagCapacity.W_ShowMagCapacity_C:ExecuteUbergraph_W_ShowMagCapacity'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MaxCapacity"), FGuid(0xB34A5626, 0x4AAA949A, 0xBD159D81, 0x2EA5EB48) }, 
        { FName("CurrentCapacity"), FGuid(0xB4E57FF3, 0x4937D3B0, 0xAD33E9AA, 0x744F5C91) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MaxCapacity = 1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Collapsed;
    class UProgressBar* ProgressBar_39;
    class UIRRTextBlock* Caliber;
    double CurrentCapacity;

};