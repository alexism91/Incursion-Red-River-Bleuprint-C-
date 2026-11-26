class USGA_NightVision_C : public USimpleGameplayAbility_NightVision
{
public:
    struct FGameplayTagContainer IgnoreInterruptsFromTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Traversal"))
    });
    class UBlueprintGeneratedClass* GogglesDownEffect = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_GogglesDown.SGE_GogglesDown_C'";
    struct FContainerItem LocHelmet = {
        "bDiscovered": false
    };
    struct FContainerItem LocNVGs = {
        "bDiscovered": false
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Night Vision"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Manual Chambering")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Night Vision")
    };
};