class USGE_Aiming_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Aiming.SGE_Aiming_C:ExecuteUbergraph_SGE_Aiming'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Attributes.Stamina.Influences.Aiming"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;

};