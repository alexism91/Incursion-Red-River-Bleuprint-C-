class UBP_GrenadeComponent_C : public UGrenadeComponent
{
public:
    FName Socket Name = FName("ik_hand_gun");
    TArray<class UBlueprintGeneratedClass*> ToGrantAbilities = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_GrenadeThrow_OverArm.SGA_GrenadeThrow_OverArm_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Grenade_Throw_UnderArm.SGA_Grenade_Throw_UnderArm_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Inspect.SGA_Inspect_C'"
    };
};