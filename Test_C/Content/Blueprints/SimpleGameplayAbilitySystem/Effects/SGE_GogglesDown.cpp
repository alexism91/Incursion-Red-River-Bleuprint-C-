class USGE_GogglesDown_C : public USimpleGameplayEffect
{
public:
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Optics Blocked"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;
};