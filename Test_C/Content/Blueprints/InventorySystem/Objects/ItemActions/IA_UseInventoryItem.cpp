class UIA_UseInventoryItem_C : public UItemAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemActions/IA_UseInventoryItem.IA_UseInventoryItem_C:ExecuteUbergraph_IA_UseInventoryItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
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
        "bDiscovered": false
    };
    struct FCharacterMontageSet Character Montage = {
        "TP_Animation": nullptr,
        "FP_Animation": nullptr,
        "Weapon_Animation": nullptr
    };
    bool Un Equip Weapon = true;
     OnInteractionItemNotify = ;
    bool bForwardToPickupActor = false;
    float UseCost = 1;
    class USGA_UseItem_C* AbilitiryRef;
    class AActor* InstigatorRef;

};