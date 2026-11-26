class USGE_Attribute_Buff_C : public USimpleGameplayEffect_AttributeBuff
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Attribute_Buff.SGE_Attribute_Buff_C:ExecuteUbergraph_SGE_Attribute_Buff'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Attribute = {
        "TagName": FName("None")
    };
    struct FGameplayTag Buff = {
        "TagName": FName("None")
    };
    struct FSimpleAttributeData Data = {
        "BaseValue": 0,
        "MinValue": 0,
        "MaxValue": 0
    };
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";
    enum Duration = ESimpleGameplayEffectDuration::Duration;
    float DurationMagnitude = 60;
    float TickInterval = 10;
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::ReInit;
    double ReInitAmount;
    float LocAmount;

};