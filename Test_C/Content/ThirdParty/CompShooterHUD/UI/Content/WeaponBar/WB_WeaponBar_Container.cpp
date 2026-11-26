class UWB_WeaponBar_Container_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/WB_WeaponBar_Container.WB_WeaponBar_Container_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/WB_WeaponBar_Container.WB_WeaponBar_Container_C:ExecuteUbergraph_WB_WeaponBar_Container'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MaxAmmo"), FGuid(0x28EE9FB3, 0x40B59733, 0xBEF38CBE, 0x1FC2FF5A) }, 
        { FName("Ammo"), FGuid(0xD72F7743, 0x4FEEC4A2, 0xA1F70799, 0xA2DDF08F) }, 
        { FName("WB_WeaponBar_Base"), FGuid(0x3F63B905, 0x493C50D8, 0x1C9ADF8E, 0x1DC78664) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Content;
    class UWB_WeaponBar_Base_C* WB_WeaponBar_Base;
    int Ammo;
    int MaxAmmo;

};