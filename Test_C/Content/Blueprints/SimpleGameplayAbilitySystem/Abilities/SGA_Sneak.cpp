class USGA_Sneak_C : public USimpleGameplayAbility_Toggleable
{
public:
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sneaking"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running"))
    });
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Sneaking")
    };
    bool bBufferAbility = true;
};