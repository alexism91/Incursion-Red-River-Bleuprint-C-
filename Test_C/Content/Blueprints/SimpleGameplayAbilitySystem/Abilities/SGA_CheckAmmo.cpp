class USGA_CheckAmmo_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_CheckAmmo.SGA_CheckAmmo_C:ExecuteUbergraph_SGA_CheckAmmo'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Neutral"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Allowed.InspectMag")
    };
    FName LinkedAnimGraph = FName("Combat");
    bool StopAbilityMontage = true;

};