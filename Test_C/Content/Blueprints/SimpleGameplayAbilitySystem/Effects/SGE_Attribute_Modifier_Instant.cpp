class USGE_Attribute_Modifier_Instant_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Attribute_Modifier_Instant.SGE_Attribute_Modifier_Instant_C:ExecuteUbergraph_SGE_Attribute_Modifier_Instant'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Amount = 40;
    float DurationMagnitude = 80;
    double ReInitAmount;
    float LocAmount;

};