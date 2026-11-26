class USGA_ToggleMagnifier_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_ToggleMagnifier.SGA_ToggleMagnifier_C:ExecuteUbergraph_SGA_ToggleMagnifier'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Magnifier"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cycle Tactical Attachments")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Magnifier")
    };
    bool StopAbilityMontage = true;
    class UW_NightVision_C* NightVision;

};