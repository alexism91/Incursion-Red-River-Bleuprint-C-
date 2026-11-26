class USGA_HoldBreath_C : public USimpleGameplayAbility_Toggleable
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_HoldBreath.SGA_HoldBreath_C:ExecuteUbergraph_SGA_HoldBreath'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MinArmStamina = 10;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Hold Breath"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Hold Breath")
    };

};