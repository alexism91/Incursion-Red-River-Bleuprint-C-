class USGE_Arm_Influence_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Arm_Influence.SGE_Arm_Influence_C:ExecuteUbergraph_SGE_Arm_Influence'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRArmStaminaEffect Arm Stamina Effect = {
        "Identifier": FName("Adrenaline"),
        "Multiplier": 1,
        "Speed": 1,
        "Add": 0,
        "Duration": -1
    };
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";
    FText Name = FText("Adrenaline");
    enum Duration = ESimpleGameplayEffectDuration::Duration;
    float DurationMagnitude = 2;
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::ReInit;

};