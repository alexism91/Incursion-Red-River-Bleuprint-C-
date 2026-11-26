class USGA_ToggleTacticalAttachment_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_ToggleTacticalAttachment.SGA_ToggleTacticalAttachment_C:ExecuteUbergraph_SGA_ToggleTacticalAttachment'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FCharacterMontageSet> ToggleAnims = {
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
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Toggle Tactical Attachments"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cycle Tactical Attachments")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Toggle Tactical Attachments")
    };
    bool StopAbilityMontage = true;
    class UW_NightVision_C* NightVision;

};