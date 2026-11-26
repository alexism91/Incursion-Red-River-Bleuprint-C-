class UW_DebugSimpleAbilitySystem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_DebugSimpleAbilitySystem.W_DebugSimpleAbilitySystem_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_DebugSimpleAbilitySystem.W_DebugSimpleAbilitySystem_C:ExecuteUbergraph_W_DebugSimpleAbilitySystem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NewVar"), FGuid(0x598A721F, 0x4F574D9D, 0x517CCF9E, 0x1AA56A26) }, 
        { FName("DebugActor"), FGuid(0x4EC835B4, 0x4C61180D, 0xE601A1AE, 0xF2E7B889) }, 
        { FName("AbilitesBlocked"), FGuid(0xAE68CED4, 0xB2B03D65, 0xB266B085, 0x7EF24398) }, 
        { FName("AbilitiesBlocked"), FGuid(0x52F4CA2B, 0xAB863EDB, 0x8867744E, 0xF6D7DDBC) }, 
        { FName("ActiveAbilityBox"), FGuid(0x87610F1B, 0x00A434B2, 0xB55A6919, 0x6A2A24F0) }, 
        { FName("ActiveTagsBox"), FGuid(0xEA8B0A41, 0xC21F372B, 0xACB122FC, 0x109DFB9B) }, 
        { FName("BufferedAbilitiesBox"), FGuid(0x81C46B51, 0xF431316A, 0x8FB8285D, 0xC2131C03) }, 
        { FName("CharacterWeight"), FGuid(0x151066DF, 0xA55134B3, 0x860E9E2E, 0x5FF62D93) }, 
        { FName("GroundFriction"), FGuid(0xA733C0EE, 0x488E3E84, 0xE9EE10AE, 0x477C83DB) }, 
        { FName("MaxAccel"), FGuid(0xDA6C9023, 0x46EDA78C, 0x92601E95, 0xFD4979F7) }, 
        { FName("MaxBraking"), FGuid(0xFBB903CB, 0x4B164DCA, 0x9E6A82B8, 0x5CDE4170) }, 
        { FName("MaxFrictino"), FGuid(0x53991FB8, 0x455799CD, 0x87F0E291, 0xB526C9EC) }, 
        { FName("MaxWalkSpeed"), FGuid(0xCC60683A, 0x948233B8, 0x84D3B59D, 0x48536723) }, 
        { FName("WeaponAmmoState"), FGuid(0xBECB4C40, 0x5C30329B, 0xBBE43852, 0xEC1FFE43) }, 
        { FName("WeaponAmmunitionState"), FGuid(0xF9FBB7C7, 0xF50133EB, 0x93BEB9D4, 0x18CEA161) }, 
        { FName("WeaponAmmunitionState_1"), FGuid(0x45115A27, 0x95213676, 0xACECB212, 0x60609AD1) }, 
        { FName("WeaponAmmunitionState_2"), FGuid(0xA8B33DA0, 0x53E23474, 0xBEB81FBB, 0x5AB2ACEF) }, 
        { FName("WeaponAmmunitionState_3"), FGuid(0xFBF20FC3, 0x4DB72EE3, 0xF48AFAA7, 0xA0FAB081) }, 
        { FName("WeaponAmmunitionState_4"), FGuid(0xCDBC117F, 0x485DA556, 0x5A149E86, 0xE2896F8F) }, 
        { FName("WeaponAmmunitionState_5"), FGuid(0x503A8969, 0x427BFDCF, 0xFF4D2582, 0x39495CA4) }, 
        { FName("WeaponAmmunitionState_6"), FGuid(0x7DC1C748, 0x44CF958C, 0x5A797394, 0x1B6A0C83) }, 
        { FName("WeaponErgonomics"), FGuid(0x374115C6, 0x5992355C, 0xAC0AEDC9, 0x39CEDD77) }, 
        { FName("WeaponLength"), FGuid(0xF4FA6669, 0xA78B39F5, 0xB8B82E1B, 0x8ECFBA05) }, 
        { FName("WeaponRecoil"), FGuid(0x3832C3B2, 0xD6FC3871, 0x8B645F88, 0xB6151624) }, 
        { FName("WeaponSway"), FGuid(0x608D2E7E, 0x44E60049, 0x3FEAC1BC, 0x2CC8D3AF) }, 
        { FName("WeaponWeight"), FGuid(0xBB1BCFD8, 0x520F3CD5, 0x8EABB4BC, 0x56EDA39F) }, 
        { FName("WeaponWeight_1"), FGuid(0x60CF7343, 0xD7923B8C, 0xA3FB5D5C, 0x4E062AF6) }, 
        { FName("WeaponWeight_2"), FGuid(0xEA8A8005, 0xD5293132, 0xB4D62E3E, 0x9C920A42) }, 
        { FName("WeaponWeight_3"), FGuid(0x6A8E3EDE, 0xBF393025, 0xA5C94F27, 0x0C5DD3A6) }, 
        { FName("WeaponWeight_4"), FGuid(0x4C99A8F6, 0x9F843C71, 0x9A6F4D29, 0x359F1C04) }, 
        { FName("WeaponWeight_5"), FGuid(0x17DE0BF9, 0x41454BCC, 0x59AFC3A9, 0x063D02F7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle NewVar = {
        "Handle": 0
    };
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* WeaponWeight_5;
    class UTextBlock* WeaponWeight_4;
    class UTextBlock* WeaponWeight_3;
    class UTextBlock* WeaponWeight_2;
    class UTextBlock* WeaponWeight_1;
    class UTextBlock* WeaponWeight;
    class UTextBlock* WeaponSway;
    class UTextBlock* WeaponRecoil;
    class UTextBlock* WeaponLength;
    class UTextBlock* WeaponErgonomics;
    class UTextBlock* WeaponAmmunitionState_6;
    class UTextBlock* WeaponAmmunitionState_5;
    class UTextBlock* WeaponAmmunitionState_4;
    class UTextBlock* WeaponAmmunitionState_3;
    class UTextBlock* WeaponAmmunitionState_2;
    class UTextBlock* WeaponAmmunitionState_1;
    class UTextBlock* WeaponAmmunitionState;
    class UTextBlock* WeaponAmmoState;
    class UTextBlock* MaxWalkSpeed;
    class UTextBlock* MaxFrictino;
    class UTextBlock* MaxBraking;
    class UTextBlock* MaxAccel;
    class UTextBlock* GroundFriction;
    class UTextBlock* CharacterWeight;
    class UVerticalBox* BufferedAbilitiesBox;
    class UVerticalBox* ActiveTagsBox;
    class UVerticalBox* ActiveAbilityBox;
    class UVerticalBox* AbilitiesBlocked;
    class UTextBlock* AbilitesBlocked;
    class ACharacter* DebugActor;

};