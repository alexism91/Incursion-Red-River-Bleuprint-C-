class USGA_PointSight_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_PointSight.SGA_PointSight_C:ExecuteUbergraph_SGA_PointSight'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.PointShooting")
    };

};