class UW_StatContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_StatContainer.W_StatContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_StatContainer.W_StatContainer_C:ExecuteUbergraph_W_StatContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Supported Stats"), FGuid(0x82E148C9, 0x46131CE1, 0xD8F4F8B7, 0x1DA61777) }, 
        { FName("OwningInventoryComp"), FGuid(0x3448B53C, 0x4A70FBF7, 0x08F29491, 0x55F61F45) }, 
        { FName("OwningItem"), FGuid(0xC650BD8C, 0x41BF3E98, 0xE5C2788F, 0x66EE2817) }, 
        { FName("LocAttachments"), FGuid(0xF917DED1, 0x44BA65DE, 0xAD5A4DAE, 0xE5E405DA) }, 
        { FName("Container Ref"), FGuid(0xF3F34444, 0x4A4F7DBF, 0x5351E797, 0xFD534F25) }, 
        { FName("StatItems"), FGuid(0xACCE7F53, 0x487C63AB, 0xD1DE2797, 0xEE9E0830) }, 
        { FName("ItemRef"), FGuid(0x4569BC8C, 0x4D311E01, 0x3A30DC8B, 0xDD8124E8) }, 
        { FName("Compare Type"), FGuid(0x5AD5C35A, 0x4EB62D18, 0x326ABC9B, 0xB6F81516) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem OwningItem = {
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
        "bDiscovered": true
    };
    struct FGameplayTagContainer Supported Stats = FGameplayTagContainer({});
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* StatsProgressBarBox;
    class UVerticalBox* StatsPlainBox_Right;
    class UVerticalBox* StatsPlainBox_Left;
    EItemCompareType Compare Type;
    class UItemWidget* ItemRef;
    TMap<struct FGameplayTag, class UStatItemWidget*>* StatItems;
    class UBaseContainerWidget* Container Ref;
    TArray<struct FContainerItem*>* LocAttachments;
    class UInventoryComponent* OwningInventoryComp;

};