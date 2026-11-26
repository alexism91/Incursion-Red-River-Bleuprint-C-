class UW_StaminaAndHealthBars_C : public UShowMagCapacityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_StaminaAndHealthBars.W_StaminaAndHealthBars_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_StaminaAndHealthBars.W_StaminaAndHealthBars_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_StaminaAndHealthBars.W_StaminaAndHealthBars_C:ExecuteUbergraph_W_StaminaAndHealthBars'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("StaminaBodyAttribute"), FGuid(0x3F8D5A61, 0x4FA7DAF5, 0x2FC77D97, 0x9F8ED7A1) }, 
        { FName("StaminaArmAttribute"), FGuid(0xF6147050, 0x4FA51AE8, 0x7CC2A8A1, 0xB0BF27A1) }, 
        { FName("HealthAttribute"), FGuid(0x0F236BA4, 0x4155ADB6, 0x57133DA0, 0xE1E6C0ED) }, 
        { FName("Type"), FGuid(0x9AA7EF60, 0x48A3FFF3, 0xBB5E1A9B, 0x218723E4) }, 
        { FName("Duration"), FGuid(0xDB0EBC32, 0x45EF6110, 0x80167194, 0xBD8C207B) }, 
        { FName("HealthComp"), FGuid(0x06D9EAF2, 0x4E4DAB44, 0xC5E4A781, 0x1F616379) }, 
        { FName("CharacterStaminaComp"), FGuid(0x321EB90D, 0x401ACDC2, 0xB046F480, 0x64292871) }, 
        { FName("ArmStaminaComp"), FGuid(0xD75CFB72, 0x4449F4E0, 0x5DB192A2, 0xB21CEC85) }, 
        { FName("FadeInOut"), FGuid(0x4329DB5D, 0xEF1A3336, 0x921A9C0A, 0x7FB40C53) }, 
        { FName("Image"), FGuid(0x7BDEBA4F, 0x084C344D, 0xB2C1FBC0, 0xEBD4DE53) }, 
        { FName("Image_61"), FGuid(0x73E1E522, 0xC7153078, 0xAE7F22E4, 0x6D75F297) }, 
        { FName("W_GameplayEffectsBar"), FGuid(0xEB6563C0, 0x6AAF3C1D, 0xB10FE4C7, 0x7A4B8F8E) }, 
        { FName("W_HealthBar"), FGuid(0xAB27FA6D, 0xC5513721, 0xBD5A6530, 0xCE3D7369) }, 
        { FName("W_StaminaArm"), FGuid(0xAF5B3C56, 0xC19E37EA, 0xB1B936C0, 0x675BFF5F) }, 
        { FName("W_StaminaBody"), FGuid(0x9952DDC4, 0xB1B43B84, 0x99650B4D, 0xD5D2D2A2) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Duration = 6;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Collapsed;
    class UW_GeneralStatBar_C* W_StaminaBody;
    class UW_GeneralStatBar_C* W_StaminaArm;
    class UW_GeneralStatBar_C* W_HealthBar;
    class UW_GameplayEffectsBar_C* W_GameplayEffectsBar;
    class UImage* Image_61;
    class UImage* Image;
    class UWidgetAnimation* FadeInOut;
    class UFirstPersonStamina* ArmStaminaComp;
    class UFirstPersonStamina* CharacterStaminaComp;
    class UHealthComponent* HealthComp;
    EShowHealthAndStaminaType Type;
    class USimpleGameplayAttribute* HealthAttribute;
    class USimpleGameplayAttribute* StaminaArmAttribute;
    class USimpleGameplayAttribute* StaminaBodyAttribute;

};