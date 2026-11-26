class USGE_Attribute_Modifier_OverTime_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Attribute_Modifier_OverTime.SGE_Attribute_Modifier_OverTime_C:ExecuteUbergraph_SGE_Attribute_Modifier_OverTime'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Amount = 6;
    struct FGameplayTag AttributeTag = {
        "TagName": FName("Character.Attributes.Health")
    };
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";
    enum Duration = ESimpleGameplayEffectDuration::Duration;
    float DurationMagnitude = 60;
    float TickInterval = 10;
    double ReInitAmount;
    float LocAmount;

};