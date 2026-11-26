class USGE_Running_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Running.SGE_Running_C:ExecuteUbergraph_SGE_Running'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Is Running"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;

};