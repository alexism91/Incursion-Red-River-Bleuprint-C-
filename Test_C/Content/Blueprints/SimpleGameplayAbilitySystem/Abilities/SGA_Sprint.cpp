class USGA_Sprint_C : public USGA_Run_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Sprint.SGA_Sprint_C:ExecuteUbergraph_SGA_Sprint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float MaxDuration = 0.2;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Sprinting.Wants To Sprint")
    };

};