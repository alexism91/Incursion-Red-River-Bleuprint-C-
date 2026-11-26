class USGA_CycleTacticalAttachment_C : public USimpleGameplayAbility_CycleTacticalAttachment
{
public:
    TArray<struct FCharacterMontageSet> CycleMontages = {
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle1.AM_FP_Tactical_Toggle1'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle1.AM_FP_Tactical_Toggle1'",
            "Weapon_Animation": nullptr
        },
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle2.AM_FP_Tactical_Toggle2'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle2.AM_FP_Tactical_Toggle2'",
            "Weapon_Animation": nullptr
        },
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle3.AM_FP_Tactical_Toggle3'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle3.AM_FP_Tactical_Toggle3'",
            "Weapon_Animation": nullptr
        }
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cycle Tactical Attachments"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Cycle Tactical Attachments")
    };
    bool StopAbilityMontage = true;
};