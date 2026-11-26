class UIA_ThrowInventoryItem_C : public UItemAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemActions/IA_ThrowInventoryItem.IA_ThrowInventoryItem_C:ExecuteUbergraph_IA_ThrowInventoryItem'";
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
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Bullet_Case_Throw.AM_FP_Bullet_Case_Throw'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Bullet_Case_Throw.AM_FP_Bullet_Case_Throw'",
        "Weapon_Animation": nullptr
    };
     OnInteractionItemNotify = ;
    bool bForwardToPickupActor = false;
    class USGA_UseItem_C* AbilitiryRef;
    class AActor* InstigatorRef;
    class USimpleGameplayEffect* Effect;
    bool Un Equip Weapon;

};