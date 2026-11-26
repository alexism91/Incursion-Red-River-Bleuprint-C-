class UBP_TargetData_AI_C : public UIRRTargetData
{
public:
    int32 NumReplicatedProperties = 5;
    struct FGameplayTag Faction = {
        "TagName": FName("None")
    };
    struct FGameplayTag Damage Causer Item Tag = {
        "TagName": FName("None")
    };
    struct FContainerItem Damage Causer Item Info = {
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
    struct FGameplayTagContainer Level Zones = FGameplayTagContainer({});
    FName Impact Bone;

};