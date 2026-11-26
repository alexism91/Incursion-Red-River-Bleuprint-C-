class USGE_TearGas_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_TearGas.SGE_TearGas_C:ExecuteUbergraph_SGE_TearGas'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/TearGas-Icon.TearGas-Icon'";
    FText Name = FText("Tear Gas");
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 5;
    float TickInterval = 1;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Tear Gas"))
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
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;
    struct FCharacterMontageSet EffectMontage = {
        "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Coughing.AM_FP_Coughing'",
        "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/Reactions/AM_FP_Coughing.AM_FP_Coughing'"
    };
    FName LinkedAnimGraph = FName("Combat");

};