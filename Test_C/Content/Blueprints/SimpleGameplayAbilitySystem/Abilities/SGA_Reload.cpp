class USGA_Reload_C : public USimpleGameplayAbility_Reload
{
public:
    struct FReloadData Reload Data = {
        "WeaponContainer": {
            "MainContainerUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
            "ContainerElements": {},
            "ContainerItems": {}
        },
        "WeaponMagContainerIndex": -1,
        "WeaponMagSlotIndex": -1,
        "UnloadMag": {
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
        },
        "UnloadContainer": {
            "MainContainerUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
            "ContainerElements": {},
            "ContainerItems": {}
        },
        "bUnloadRotated": false,
        "UnloadSlotIndex": -1,
        "UnloadContainerSlot": -1,
        "ToLoadMag": {
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
        },
        "ToLoadBullets": {},
        "ToLoadBulletCount": -1
    };
    struct FContainerItem To Load Bullet = {
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
    struct FReloadManualMontageSet Manual Reload Set = {
        "ReloadTag": {
            "TagName": FName("None")
        },
        "ReloadAnimSetBegin": {
            "TP_Animation": nullptr,
            "FP_Animation": nullptr,
            "Weapon_Animation": nullptr
        },
        "ReloadAnimSetLoopEmpty": {
            "TP_Animation": nullptr,
            "FP_Animation": nullptr,
            "Weapon_Animation": nullptr
        },
        "ReloadAnimSetLoop": {},
        "ReloadAnimSetEnd": {
            "TP_Animation": nullptr,
            "FP_Animation": nullptr,
            "Weapon_Animation": nullptr
        }
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Fix Malfunction"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Reloading")
    };
    FName LinkedAnimGraph = FName("Combat");
    int InputCounter;
    int Manual Bullet Counter;
    class AActor* Equipped Weapon;
    class UWeaponDataAsset* Weapon Data Asset;
    bool EmergencyReload;
    bool Interrupt Manual Reload;
};