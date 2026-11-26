class UWB_PlayerInfo_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_PlayerInfo.WB_PlayerInfo_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_PlayerInfo.WB_PlayerInfo_C:MessagePopup_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_PlayerInfo.WB_PlayerInfo_C:ExecuteUbergraph_WB_PlayerInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MaxHealth"), FGuid(0xF4E91803, 0x4A5DF51F, 0xBDBDA3BA, 0x467D4B35) }, 
        { FName("HealthProgress_TimerHandle"), FGuid(0xEFD81D47, 0x49EDE447, 0xA87BEABA, 0xC15F89E1) }, 
        { FName("Progress_High_Color"), FGuid(0xE53F1AC8, 0x49345F9C, 0x3DF16E90, 0xD70A0252) }, 
        { FName("Progress_Middle_Color"), FGuid(0x825122C0, 0x474792EF, 0xC1EF1FAC, 0x47965CB7) }, 
        { FName("Progress_Low_Color"), FGuid(0x1A5B5A13, 0x42AF84B7, 0x5D89099E, 0x26CE9B5E) }, 
        { FName("CurrentHealth"), FGuid(0x9696F4BA, 0x4A7D69C0, 0xF9AA9BBC, 0xCA506718) }, 
        { FName("TargetHealth"), FGuid(0x3B31058D, 0x4BB583EC, 0x65B1BCB4, 0x32AF3008) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor Progress_Low_Color = FLinearColor(1, 0, 0, 1);
    struct FLinearColor Progress_Middle_Color = FLinearColor(1, 0,424637, 0, 1);
    struct FLinearColor Progress_High_Color = FLinearColor(1, 1, 1, 1);
    struct FTimerHandle HealthProgress_TimerHandle = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* WeaponInfo;
    class UBorder* WeaponIconShadow;
    class UBorder* WeaponIcon;
    class USizeBox* WeaponContainer;
    class UTextBlock* Message;
    class UProgressBar* HealthBar;
    class UProgressBar* Energy;
    class UTextBlock* CurrentAmmo;
    class UProgressBar* ArmorBar;
    class UWidgetAnimation* MessagePopup;
    double TargetHealth;
    double CurrentHealth;
    double MaxHealth;

};