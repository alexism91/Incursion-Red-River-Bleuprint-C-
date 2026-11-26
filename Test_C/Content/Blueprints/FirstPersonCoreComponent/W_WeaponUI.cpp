class UW_WeaponUI_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/FirstPersonCoreComponent/W_WeaponUI.W_WeaponUI_C:WidgetTree'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("W_ShowFireMode"), FGuid(0xD6190B0D, 0xDB6C3B32, 0xB0BCC6FB, 0x0722B6E4) }, 
        { FName("W_ShowMagCapacity"), FGuid(0x584E406B, 0x1C9B364B, 0xBCF9C691, 0xB0C3A938) }, 
        { FName("W_ShowMagnificationLevel"), FGuid(0xE8D4624E, 0x030034A7, 0x8E89E781, 0x77D6CD72) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_ShowMagnificationLevel_C* W_ShowMagnificationLevel;
    class UW_ShowMagCapacity_C* W_ShowMagCapacity;
    class UW_ShowFireMode_C* W_ShowFireMode;
};