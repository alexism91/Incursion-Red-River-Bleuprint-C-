class UWB_Minimal_Inventory_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_Minimal_Inventory.WB_Minimal_Inventory_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_Minimal_Inventory.WB_Minimal_Inventory_C:ExecuteUbergraph_WB_Minimal_Inventory'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentInventoryHeight"), FGuid(0xCA62364C, 0x425CD4C4, 0xAC45D2B9, 0xF333493B) }, 
        { FName("TargetInventoryHeight"), FGuid(0x7B76ACA1, 0x4CCE4FD7, 0x3CC5289B, 0x07376811) }, 
        { FName("InventoryVisible"), FGuid(0x03003D4F, 0x4C9598DE, 0x743170A6, 0x76454869) }, 
        { FName("InventoryExpand_TimerHandle"), FGuid(0x2F4C81D0, 0x4D5F0881, 0x378EF2BF, 0xFA20023B) }, 
        { FName("Progress_High_Color"), FGuid(0xD7F541F2, 0x4AD55F0B, 0x2328A3A2, 0xA307BB93) }, 
        { FName("Progress_Middle_Color"), FGuid(0xFD464AF6, 0x47B8D598, 0x2F8B58BF, 0x3E266ECD) }, 
        { FName("Progress_Low_Color"), FGuid(0x0ABD37E4, 0x4A957019, 0x2ACF2EA4, 0x7B573565) }, 
        { FName("SpaceProgress_TimerHandle"), FGuid(0x6BBFBA0D, 0x43F7618D, 0xDEE82DB0, 0xD8131726) }, 
        { FName("TargetSpaceProgress"), FGuid(0xC5925923, 0x49FC092B, 0xE80967BB, 0x91754E61) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle SpaceProgress_TimerHandle = {
        "Handle": 0
    };
    struct FLinearColor Progress_Low_Color = FLinearColor(0,186283, 0,541667, 0,039497, 1);
    struct FLinearColor Progress_Middle_Color = FLinearColor(1, 0,467005, 0, 1);
    struct FLinearColor Progress_High_Color = FLinearColor(0,578125, 0,042155, 0,042155, 1);
    struct FTimerHandle InventoryExpand_TimerHandle = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SlotList_Min_C* WeaponList;
    class UTextBlock* Size;
    class UProgressBar* ProgressBar_121;
    class UProgressBar* ProgressBar_2;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar;
    class UProgressBar* InventorySpace;
    class USizeBox* InventoryContentSizer;
    class UVerticalBox* InventoryContent;
    class UBorder* IconShadow_11;
    class UBorder* IconShadow_8;
    class UBorder* Icon_11;
    class UBorder* Icon_8;
    class UWB_ConsumableList_Min_C* HealthList;
    class UWB_ConsumableList_Min_C* AmmunitionList;
    double TargetSpaceProgress;
    bool InventoryVisible;
    double TargetInventoryHeight;
    double CurrentInventoryHeight;

};