class USGA_OpenLaptop_C : public USGA_DisplayMenuContent_C
{
public:
    enum Enum_MenuHandlerType Menu Type = Enum_MenuHandlerType::NewEnumerator9;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Laptop Open"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Laptop Open")
    };
};