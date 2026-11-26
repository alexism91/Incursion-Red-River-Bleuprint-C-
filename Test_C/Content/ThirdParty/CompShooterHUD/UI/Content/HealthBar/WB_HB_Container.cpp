class UWB_HB_Container_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/WB_HB_Container.WB_HB_Container_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/WB_HB_Container.WB_HB_Container_C:ExecuteUbergraph_WB_HB_Container'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Damage"), FGuid(0x9331D8A4, 0x402F78BE, 0x6C5CCC84, 0xD6569C38) }, 
        { FName("Health"), FGuid(0x8C52AC18, 0x4ABFF47C, 0x8B328A83, 0x3CABA64C) }, 
        { FName("MaxHealth"), FGuid(0x272A789B, 0x48BC6F51, 0xADBC6AB0, 0x65C7F1FF) }, 
        { FName("HB_Base"), FGuid(0x5569F700, 0x4FA5E074, 0x4C4FA8A2, 0x7F767ACC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Content;
    class UWB_HB_Base_C* HB_Base;
    int MaxHealth;
    int Health;
    int Damage;

};