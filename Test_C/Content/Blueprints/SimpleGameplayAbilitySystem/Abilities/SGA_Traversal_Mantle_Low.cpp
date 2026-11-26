class USGA_Traversal_Mantle_Low_C : public USGA_Traversal_C
{
public:
    FName FP_LinkedAnim = FName("Combat");
    struct FCharacterMontageSet UpperBodyMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/General/Traversal/AM_TP_Mantle_Low.AM_TP_Mantle_Low'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/General/Traversal/AM_FP_Mantle_Low.AM_FP_Mantle_Low'"
    };
    struct FCharacterMontageSet LowerBodyMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/GASP/Traversal/AM_Mantle_Low_Montage.AM_Mantle_Low_Montage'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/GASP/Traversal/AM_Mantle_Low_Montage.AM_Mantle_Low_Montage'"
    };
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Traversal.Mantle.Low")
    };
};