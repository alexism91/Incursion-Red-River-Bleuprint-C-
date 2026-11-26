class USGE_LowReady_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_LowReady.SGE_LowReady_C:ExecuteUbergraph_SGE_LowReady'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Attributes.Stamina.Influences.Low Ready"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;

};