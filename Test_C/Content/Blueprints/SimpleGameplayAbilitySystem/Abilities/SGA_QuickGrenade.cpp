class USGA_QuickGrenade_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_QuickGrenade.SGA_QuickGrenade_C:ExecuteUbergraph_SGA_QuickGrenade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Allowed.Quick Grenade")
    };

};