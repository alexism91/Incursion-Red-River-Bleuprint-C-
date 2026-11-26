class USGA_Grenade_Throw_UnderArm_C : public USimpleGameplayAbility_ThrowGrenade
{
public:
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Grenade Throwing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Grenade Throwing"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Aiming")
    };
};