class UWB_KeybindsSettings_C : public UIRRBaseSettingPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_KeybindsSettings.WB_KeybindsSettings_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_KeybindsSettings.WB_KeybindsSettings_C:ExecuteUbergraph_WB_KeybindsSettings'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("InputActions"), FGuid(0xB1AB20A0, 0x4A4BB97E, 0xE67A6E87, 0xA7F8C078) }, 
        { FName("W_InventorySection"), FGuid(0x8C349E65, 0x8335300D, 0xA4D87AB2, 0x2955B952) }, 
        { FName("W_InventorySection_1"), FGuid(0x706265CF, 0x2A5B3AEF, 0x9203E75F, 0x2358DD90) }, 
        { FName("W_InventorySection_2"), FGuid(0x026F3F80, 0x79E2342A, 0x88D94509, 0xA6F14C41) }, 
        { FName("W_InventorySection_3"), FGuid(0x0A403BC2, 0x171D3425, 0xAC5342FE, 0x017D58BB) }, 
        { FName("W_InventorySection_4"), FGuid(0x86AB61FC, 0x244E300F, 0x818527CF, 0x42B169E6) }, 
        { FName("WB_Inventory"), FGuid(0xADB4BA46, 0x2D603C60, 0xAF399581, 0x2B214D41) }, 
        { FName("WB_SettingInfo"), FGuid(0xA693C60F, 0x8BB631A9, 0x9C083EC5, 0x133687E5) }, 
        { FName("WB_SingleSettingBar"), FGuid(0xC87117DF, 0xC9F3365B, 0x88971DE0, 0xD99CA642) }, 
        { FName("WB_SingleSettingBar_1"), FGuid(0xD9B49336, 0xB0D93F90, 0xB66DBBF3, 0xD1A2B240) }, 
        { FName("WB_SingleSettingBar_2"), FGuid(0xF66B3309, 0x9FD23951, 0x83A9AAA9, 0x49493435) }, 
        { FName("WB_SingleSettingBar_3"), FGuid(0xF2FA85DA, 0xB16130D3, 0x9372A9E8, 0x1D63FA80) }, 
        { FName("WB_SingleSettingBar_4"), FGuid(0x6EAEE5C6, 0xCE073A52, 0x93CC389A, 0x51984432) }, 
        { FName("WB_SingleSettingBar_5"), FGuid(0xB0F2D70C, 0xFBD13E48, 0xB97F4DAE, 0x8AB46CBC) }, 
        { FName("WB_SingleSettingBar_6"), FGuid(0xC3B09096, 0x807A308D, 0x8A6156EE, 0x3BB692C7) }, 
        { FName("WB_SingleSettingBar_7"), FGuid(0xD0CA50CC, 0x7D0B3BEA, 0x8D03D79B, 0xC15EC06C) }, 
        { FName("WB_SingleSettingBar_8"), FGuid(0x9FC7D44A, 0x147C3A04, 0x9E4CFA3A, 0xAD6EDAF4) }, 
        { FName("WB_SingleSettingBar_9"), FGuid(0x7D888804, 0xE1433066, 0x94049318, 0x9A1A39E2) }, 
        { FName("WB_SingleSettingBar_10"), FGuid(0x89B42549, 0xEB423D84, 0x858E9609, 0xA3E0FE0C) }, 
        { FName("WB_SingleSettingBar_11"), FGuid(0x58822D95, 0x22D13800, 0xA2C48701, 0xCAE97888) }, 
        { FName("WB_SingleSettingBar_12"), FGuid(0xE581B3FC, 0x0BEE3339, 0x8D6E93A8, 0x90EB6FD1) }, 
        { FName("WB_SingleSettingBar_13"), FGuid(0x2BDAEB8E, 0x44153787, 0x8C9BDC27, 0xFC536873) }, 
        { FName("WB_SingleSettingBar_14"), FGuid(0x4A9F5454, 0xDA2C3FD1, 0x84DEBFD0, 0xE240E887) }, 
        { FName("WB_SingleSettingBar_15"), FGuid(0x1C0DF3F2, 0xC5F63DEE, 0xB9E2CE11, 0xC6AF27E9) }, 
        { FName("WB_SingleSettingBar_16"), FGuid(0xE0A7F754, 0x911832E7, 0x9FC4FDFC, 0xEC33C2F0) }, 
        { FName("WB_SingleSettingBar_17"), FGuid(0x237EED2D, 0x72A03FAB, 0x88E80983, 0xF1B110E8) }, 
        { FName("WB_SingleSettingBar_18"), FGuid(0x11C079C6, 0x40FE91F5, 0xE4050EB9, 0x12BFC6A5) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipHolster.IA_EquipHolster'"
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_18;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_17;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_16;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_15;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_14;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_13;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_12;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_11;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_10;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_9;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_8;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_7;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_6;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_5;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_4;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_3;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_2;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_1;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar;
    class UWB_SettingInfo_C* WB_SettingInfo;
    class UWB_SingleSettingBar_C* WB_Inventory;
    class UW_InventorySection_C* W_InventorySection_4;
    class UW_InventorySection_C* W_InventorySection_3;
    class UW_InventorySection_C* W_InventorySection_2;
    class UW_InventorySection_C* W_InventorySection_1;
    class UW_InventorySection_C* W_InventorySection;

};