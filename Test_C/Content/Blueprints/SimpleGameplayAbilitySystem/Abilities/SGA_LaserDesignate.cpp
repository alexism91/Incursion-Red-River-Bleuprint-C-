class USGA_LaserDesignate_C : public USimpleGameplayAbility_LaserDesignate
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_LaserDesignate.SGA_LaserDesignate_C:ExecuteUbergraph_SGA_LaserDesignate'";
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
    struct FIRRDesignationConfig DesignationConfig = {
        "ConfirmWindowDelayMin": 20,
        "ConfirmWindowDelayMax": 30,
        "ConfirmWindowDuration": 40,
        "HandlerFollowUpDelay": 20,
        "MinimumSafeDistance": 1000
    };
    struct FIRRFireSupportSalvo Salvo = {
        "AirstrikeClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.BP_Airstrike_C'",
        "Count": 1,
        "bStrikeEachTarget": true,
        "TargetInterval": 1,
        "SpreadRadius": 1000
    };
    class UIRRHandlerVoiceSet* HandlerVoice = "IRRHandlerVoiceSet'Test_C/Content/Blueprints/Airstrike/DA_AirstrikeVoiceSet.DA_AirstrikeVoiceSet'";
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing"))
    });
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Neutral"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Low Ready"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Firing")
    };

};