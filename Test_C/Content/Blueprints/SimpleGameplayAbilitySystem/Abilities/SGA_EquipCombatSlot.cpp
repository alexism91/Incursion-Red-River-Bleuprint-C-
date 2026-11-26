class USGA_EquipCombatSlot_C : public USimpleGameplayAbility_EquipSlot
{
public:
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Interacting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Melee Attack")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Melee Attack")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Traversal.Vault")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Traversal.Mantle")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Fix Malfunction"))
    });
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });

};