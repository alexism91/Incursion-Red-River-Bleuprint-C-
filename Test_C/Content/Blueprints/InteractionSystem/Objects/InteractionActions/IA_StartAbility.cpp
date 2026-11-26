class UIA_StartAbility_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_StartAbility.IA_StartAbility_C:ExecuteUbergraph_IA_StartAbility'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Ability Class = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_UseMedic_Revive_Syringe.SGA_UseMedic_Revive_Syringe_C'";
    struct FGameplayTagContainer Ability Tags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic"))
    });

};