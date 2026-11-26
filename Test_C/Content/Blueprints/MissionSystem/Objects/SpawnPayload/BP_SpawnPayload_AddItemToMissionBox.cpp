class UBP_SpawnPayload_AddItemToMissionBox_C : public UIRRSpawnPayload
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/SpawnPayload/BP_SpawnPayload_AddItemToMissionBox.BP_SpawnPayload_AddItemToMissionBox_C:ExecuteUbergraph_BP_SpawnPayload_AddItemToMissionBox'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDefaultItem Item = {
        "ItemType": EDefaultItemType::Preset,
        "ItemPreset": nullptr,
        "ItemDefinition": nullptr,
        "DefaultAttachments": {},
        "RandomAttachmentParameters": {
            "MinItemsToAdd": 3,
            "MaxItemsToAdd": 5,
            "MinValue": -1,
            "MaxValue": 3.4028235E+38,
            "ItemSpawnChances": {},
            "RarityChanceDrop": {},
            "bCanAddSameItem": true,
            "bForceMatchRarity": false,
            "bForceVitalParts": true,
            "SupportedFactions": FGameplayTagContainer({}),
            "AttachmentMinDepth": 1,
            "AttachmentMaxDepth": 2,
            "BackpackMinItems": 4,
            "BackpackMaxItems": 6,
            "BackpackItemSpawnChances": {},
            "ItemMaxDimensions": FVector2D(-1, -1),
            "ItemCountOverrides": {},
            "ItemSpawnOverrides": {}
        },
        "ItemSpawnOverrides": {},
        "Count": 1,
        "bKeepSwapSpaceFree": false,
        "CurrentStats": {}
    };

};