class UW_ShowFireMode_C : public UShowMagCapacityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowFireMode.W_ShowFireMode_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_ShowFireMode.W_ShowFireMode_C:ExecuteUbergraph_W_ShowFireMode'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FireModeElements"), FGuid(0xB00D1187, 0x409D45C3, 0x542252AE, 0x048815F7) }, 
        { FName("FireModesBox"), FGuid(0x424BECBA, 0xB3C4330D, 0xBE6C21E0, 0x688518B3) }, 
        { FName("W_FireModeElement"), FGuid(0xD600FF20, 0x117233EC, 0xB853077E, 0x88951DB0) }, 
        { FName("W_FireModeElement_1"), FGuid(0xDC543FCC, 0x94B83BEB, 0x91C30E7E, 0x2D92E267) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Collapsed;
    class UW_FireModeElement_C* W_FireModeElement_1;
    class UW_FireModeElement_C* W_FireModeElement;
    class UVerticalBox* FireModesBox;
    TMap<struct FGameplayTag, class UW_FireModeElement_C*>* FireModeElements;

};