class USGA_QuickHeal_C : public USimpleGameplayAbility_QuickHeal
{
public:
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Allowed.Quick Heal")
    };
};