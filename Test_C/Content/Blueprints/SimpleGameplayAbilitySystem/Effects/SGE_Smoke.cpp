class USGE_Smoke_C : public USimpleGameplayEffect
{
public:
    float BleedingChance = 20;
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    double Interp Speed = 1;
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/SmokeGas-Icon.SmokeGas-Icon'";
    FText Name = FText("Bleeding");
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 1;
    float TickInterval = 1;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Smoke"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Wants To Sprint"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;
    struct FCharacterMontageSet EffectMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Coughing.AM_FP_Coughing'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Coughing.AM_FP_Coughing'"
    };
    FName LinkedAnimGraph = FName("Combat");
    double ReInitAmount;
    float LocAmount;
    double Alpha;
    bool BlendIn?;
};