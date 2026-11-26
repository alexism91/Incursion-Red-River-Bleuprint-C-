class USGA_UseMedic_Revive_Syringe_C : public USGA_UseMedic_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_UseMedic_Revive_Syringe.SGA_UseMedic_Revive_Syringe_C:ExecuteUbergraph_SGA_UseMedic_Revive_Syringe'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FCharacterMontageSet Medic Character Montage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Meds/Revive/AM_FP_ReviveSyringe.AM_FP_ReviveSyringe'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Meds/Revive/AM_FP_ReviveSyringe.AM_FP_ReviveSyringe'"
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Use Medic")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Rotation")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Movement")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Jump")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Camera"))
    });

};