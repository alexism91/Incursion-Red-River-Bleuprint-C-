class USGA_ManualChamber_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_ManualChamber.SGA_ManualChamber_C:ExecuteUbergraph_SGA_ManualChamber'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool BlendOut? = true;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Chamber Actioning")
    };
    FName LinkedAnimGraph = FName("Combat");
    bool StopAbilityMontage = true;

};