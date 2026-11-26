class USGA_LowReady_C : public USimpleGameplayAbility_Toggleable
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_LowReady.SGA_LowReady_C:ExecuteUbergraph_SGA_LowReady'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspect Malfunction")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.GCPS"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Low Ready")
    };

};