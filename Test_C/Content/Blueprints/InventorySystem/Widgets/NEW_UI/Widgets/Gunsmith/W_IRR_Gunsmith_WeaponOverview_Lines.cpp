class UW_IRR_Gunsmith_WeaponOverview_Lines_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_WeaponOverview_Lines.W_IRR_Gunsmith_WeaponOverview_Lines_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GunsmithOverviewRef"), FGuid(0xD3381CC8, 0x4A34FE60, 0x92BA6F80, 0x3B9F1BFF) }
    };
    bool bHasScriptImplementedTick = false;
    class UW_IRR_Gunsmith_WeaponOverview_C* GunsmithOverviewRef;

};