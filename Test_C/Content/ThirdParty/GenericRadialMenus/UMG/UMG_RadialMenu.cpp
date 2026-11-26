class UUMG_RadialMenu_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_RadialMenu.UMG_RadialMenu_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_RadialMenu.UMG_RadialMenu_C:ExecuteUbergraph_UMG_RadialMenu'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CustomInputRadius"), FGuid(0x003C0C15, 0x46170BAF, 0xF0D29B90, 0x17293218) }, 
        { FName("UnhighlightColor"), FGuid(0xC7952C6A, 0x401A007A, 0xE7E804B3, 0x6AFB5ED9) }, 
        { FName("RingMainColor"), FGuid(0x8A66A560, 0x46DABCE7, 0x3647AAAC, 0xB2D8D102) }, 
        { FName("OuterRingColor"), FGuid(0x7FB3E1A2, 0x430FFAA3, 0x33968C96, 0x57AA28B2) }, 
        { FName("InnterRingColor"), FGuid(0x3EE7FD60, 0x4F042C06, 0xA964CC88, 0xB0EB4AA2) }, 
        { FName("UseCustomColors"), FGuid(0xA916B329, 0x48A9E456, 0x44D4309C, 0xDBE7C380) }, 
        { FName("RadialTexture"), FGuid(0x135343FB, 0x4C2F1AD0, 0x9D2DE09D, 0x3E972BAB) }, 
        { FName("UseCustomTexture"), FGuid(0xCF9A9D04, 0x4CC3F874, 0x28737590, 0x9E88D3BE) }, 
        { FName("CustomInput"), FGuid(0xC7DF09B2, 0x49413BD1, 0x1D5984B7, 0xBE864325) }, 
        { FName("bUseCustomInput"), FGuid(0xBEB8ECA9, 0x416651BA, 0x4F7EA585, 0xEC720C49) }, 
        { FName("AutoRotateForUp"), FGuid(0xA4960312, 0x45FAA611, 0x768D1492, 0x2561BAC4) }, 
        { FName("AutoCenterMouse"), FGuid(0xCD090A68, 0x44403AD5, 0xD9C18785, 0xF9A6FBC7) }, 
        { FName("SelectionChangedSound"), FGuid(0xD1419B56, 0x45CB7D1B, 0x5EE878AF, 0x1D9AAB1A) }, 
        { FName("UseDeadzoneEvents"), FGuid(0xD36FD2B9, 0x4D307DD1, 0xCA7E14A7, 0xD0D8953B) }, 
        { FName("DefaultPlayerIndex"), FGuid(0x2D999CF8, 0x44B67479, 0x1462C995, 0x0EB216CB) }, 
        { FName("DefaultToMouseIfNoJoystick"), FGuid(0xEDCFCFDC, 0x48AA27B3, 0x1A987FA3, 0x8646FE54) }, 
        { FName("JoystickDeadzone"), FGuid(0xFFE775C7, 0x4C33AA87, 0x61CFCA84, 0x0BDB60F6) }, 
        { FName("CurrentInput"), FGuid(0x486EFB18, 0x4CF0D7AD, 0x7924D3A9, 0xD769AA5C) }, 
        { FName("ExitedDeadzone"), FGuid(0x18C0A51E, 0x48B0F812, 0xA023DD94, 0x2AD845FB) }, 
        { FName("EnteredDeadzone"), FGuid(0x2A6FA180, 0x4BB7E20E, 0x324C0281, 0x5630B8BA) }, 
        { FName("bInDeadzone"), FGuid(0x7F62A680, 0x48896B6C, 0x0AA110A4, 0x3EF96F94) }, 
        { FName("MouseDeadzone"), FGuid(0x0163C13B, 0x47B4A394, 0xEB101A95, 0x028694AA) }, 
        { FName("JoystickToUse"), FGuid(0x1495D368, 0x46F7A4BC, 0x2253C59C, 0x3A518D36) }, 
        { FName("InputController"), FGuid(0xEB130CC8, 0x41BB464A, 0x2F80A2A4, 0x9979F4B1) }, 
        { FName("SelectionChanged"), FGuid(0x151A32C4, 0x453890DC, 0x084B8ABC, 0x26D372EE) }, 
        { FName("ItemOffsetRadius"), FGuid(0xEB00D9A8, 0x41081C06, 0xED00DCB1, 0x8C6D5258) }, 
        { FName("AllowResizing"), FGuid(0x7B7EBD7C, 0x436A5D77, 0xF5C43697, 0x5D94C5C4) }, 
        { FName("Children"), FGuid(0xED28A019, 0x46C1E41A, 0x4619F08C, 0xD59224DF) }, 
        { FName("dynaMat"), FGuid(0x0F6906D4, 0x47932F2E, 0x1031B5B6, 0xC462C7E6) }, 
        { FName("Index"), FGuid(0x2399C2A9, 0x420B3846, 0x1A137296, 0x78359F60) }, 
        { FName("IndexRaw"), FGuid(0x7C318434, 0x4C83B7D3, 0x21E96391, 0x5F0ADBA3) }, 
        { FName("MaterialBase"), FGuid(0x7300B810, 0x41808B18, 0x5B950686, 0xBCA0F9B2) }, 
        { FName("Segments"), FGuid(0x96A93515, 0x4794EB32, 0xF7C8A5B6, 0xC4D92DAD) }, 
        { FName("RadialBackground"), FGuid(0x128C03AD, 0x8FF537FA, 0xAE02F6E1, 0x956DB727) }, 
        { FName("RadiusDebug"), FGuid(0xD4B2B393, 0x6C1638FC, 0xAFB7FE17, 0x069ABFB5) }, 
        { FName("RootOverlay"), FGuid(0xBCB97657, 0xD6F73619, 0x836F02C8, 0x30B16DA1) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 Segments = 6;
    class UMaterial* MaterialBase = "Material'Test_C/Content/ThirdParty/GenericRadialMenus/Materials/M_RadialMenu.M_RadialMenu'";
    double IndexRaw = -1;
    int32 Index = -1;
    double ItemOffsetRadius = 180;
     SelectionChanged = ;
    double MouseDeadzone = 0.10000000149011612;
     EnteredDeadzone = ;
     ExitedDeadzone = ;
    struct FVector2D CurrentInput = FVector2D(0, 0);
    double JoystickDeadzone = 0.30000001192092896;
    bool DefaultToMouseIfNoJoystick = true;
    bool UseDeadzoneEvents = true;
    class USoundWave* SelectionChangedSound = "SoundWave'Engine/Content/VREditor/Sounds/UI/Click_on_Button.Click_on_Button'";
    bool AutoCenterMouse = true;
    bool AutoRotateForUp = true;
    struct FVector2D CustomInput = FVector2D(0, 0);
    class UTexture2D* RadialTexture = "Texture2D'Test_C/Content/ThirdParty/GenericRadialMenus/Textures/T_RadialMenu.T_RadialMenu'";
    struct FLinearColor InnterRingColor = FLinearColor(0,369792, 0,369792, 0,369792, 1);
    struct FLinearColor OuterRingColor = FLinearColor(0, 0,25641, 1, 1);
    struct FLinearColor RingMainColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor UnhighlightColor = FLinearColor(0,291667, 0,291667, 0,291667, 1);
    double CustomInputRadius = 100;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* RootOverlay;
    class UImage* RadiusDebug;
    class UImage* RadialBackground;
    class UMaterialInstanceDynamic* dynaMat;
    TArray<class UUserWidget*>* Children;
    bool AllowResizing;
    class APlayerController* InputController;
    EJoystickTypes JoystickToUse;
    bool bInDeadzone;
    int DefaultPlayerIndex;
    bool bUseCustomInput;
    bool UseCustomTexture;
    bool UseCustomColors;

};