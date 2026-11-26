class USGA_Traversal_Vault_C : public USGA_Traversal_C
{
public:
    FName FP_LinkedAnim = FName("Combat");
    struct FCharacterMontageSet UpperBodyMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/General/Traversal/AM_TP_Vault.AM_TP_Vault'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/General/Traversal/AM_FP_Vault.AM_FP_Vault'"
    };
    struct FCharacterMontageSet LowerBodyMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/GASP/Traversal/AM_Vault_Default_Montage.AM_Vault_Default_Montage'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/GASP/Traversal/AM_Vault_Default_Montage.AM_Vault_Default_Montage'"
    };
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Traversal.Vault")
    };
};