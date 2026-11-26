class USGA_Aim_C : public USimpleGameplayAbility_Aim
{
public:
    class UBlueprintGeneratedClass* AimingEffect = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Aiming.SGE_Aiming_C'";
    struct FGameplayTagContainer InterruptAbilitiesOnFinishWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Hold Breath"))
    });
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Neutral"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Aiming")
    };
    bool bBufferAbility = true;
};