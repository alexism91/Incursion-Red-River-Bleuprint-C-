class USGA_Run_C : public USimpleGameplayAbility_Run
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Run.SGA_Run_C:ExecuteUbergraph_SGA_Run'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MinStamina = 10;
    struct FGameplayTag RunWantsTag = {
        "TagName": FName("Character.Abilities.Active.Running.Wants To Run")
    };
    struct FGameplayTag TacSprintWantsTag = {
        "TagName": FName("Character.Abilities.Active.Sprinting.Wants To Sprint")
    };
    float RunReleaseGraceTime = 0.12;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.GCPS")),
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Neutral"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sneaking")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sneaking"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Running.Wants To Run")
    };
    bool bBufferAbility = true;

};