class UIA_UseInteractionItem_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_UseInteractionItem.IA_UseInteractionItem_C:ExecuteUbergraph_IA_UseInteractionItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FCharacterMontageSet Character Montage = {
        "TP_Animation": nullptr,
        "FP_Animation": nullptr,
        "Weapon_Animation": nullptr
    };
    bool Un Equip Weapon = true;
    class UBlueprintGeneratedClass* Ability = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_UseItem.SGA_UseItem_C'";
    struct FContainerItem ItemRef = {
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

};