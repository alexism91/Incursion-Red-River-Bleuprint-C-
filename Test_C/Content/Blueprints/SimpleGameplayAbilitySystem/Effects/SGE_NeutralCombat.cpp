class USGE_NeutralCombat_C : public USimpleGameplayEffect
{
public:
    float BleedingChance = 20;
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 1;
    float TickInterval = 1;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Neutral"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspect Malfunction")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Melee Attack")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspect Malfunction")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;
    double ReInitAmount;
    float LocAmount;
};