class USGA_CycleSights_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_CycleSights.SGA_CycleSights_C:ExecuteUbergraph_SGA_CycleSights'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Cycle Sights")
    };

};