class USGE_Sprinting_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Sprinting.SGE_Sprinting_C:ExecuteUbergraph_SGE_Sprinting'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sprinting.Is Sprinting"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;

};