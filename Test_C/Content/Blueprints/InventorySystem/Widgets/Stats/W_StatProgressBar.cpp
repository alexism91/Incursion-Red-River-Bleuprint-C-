class UW_StatProgressBar_C : public UStatItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatProgressBar.W_StatProgressBar_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatProgressBar.W_StatProgressBar_C:ExecuteUbergraph_W_StatProgressBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MaxStat"), FGuid(0xE9CDEB7E, 0x4375B7C3, 0x523E06A2, 0xC9B69BD1) }, 
        { FName("Container Item"), FGuid(0x40C56B46, 0x48E04397, 0x9FC35197, 0xB25C0217) }, 
        { FName("CompareBox"), FGuid(0x0D9020B9, 0xAACF3F14, 0xA0D0FAB0, 0x7C4CBCF4) }, 
        { FName("ProgressBarSwitcher"), FGuid(0xA31BBF94, 0xF3CD3E07, 0xB72CC95D, 0x6EC212EA) }, 
        { FName("W_DefaultBar"), FGuid(0x89F13606, 0x56C43C27, 0x9244B3F3, 0xD99D5499) }, 
        { FName("W_EstimateBar"), FGuid(0xC66BF396, 0x36E136F2, 0x9A944D63, 0x4D02BEB0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem Container Item = {
        "ItemInventoryComp": nullptr,
        "ItemDefinition": nullptr,
        "SoftItemDefinition": FSoftObjectPath(""),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MotherUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "ContainerIndex": -1,
        "SlotIndex": -1,
        "CurrentState": FGameplayTagContainer({}),
        "CurrentStats": {},
        "RequiredByItemUIDs": {},
        "ItemDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CanStack": false,
        "MaxStack": 1,
        "Count": 1,
        "bRotated": false,
        "bIsVitalPart": false,
        "bQuestItem": false,
        "bLoot": false,
        "bDiscovered": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_GeneralStatBar_C* W_EstimateBar;
    class UW_GeneralStatBar_C* W_DefaultBar;
    class UWidgetSwitcher* ProgressBarSwitcher;
    class UHorizontalBox* CompareBox;
    float MaxStat;

};