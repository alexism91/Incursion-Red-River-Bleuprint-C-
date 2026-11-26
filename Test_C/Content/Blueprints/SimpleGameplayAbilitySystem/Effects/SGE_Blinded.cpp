class USGE_Blinded_C : public USimpleGameplayEffect_Blinded
{
public:
    enum Duration = ESimpleGameplayEffectDuration::Duration;
    float DurationMagnitude = 4;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Blinded"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FCharacterMontageSet EffectMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Blinded.AM_FP_Blinded'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Blinded.AM_FP_Blinded'"
    };
    FName LinkedAnimGraph = FName("Combat");
    bool StopMontage = true;
    class UAkAudioEvent* EffectAkStart = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/FlashGrenade/FlashGrenade_PlayerBlinded.FlashGrenade_PlayerBlinded'";
};