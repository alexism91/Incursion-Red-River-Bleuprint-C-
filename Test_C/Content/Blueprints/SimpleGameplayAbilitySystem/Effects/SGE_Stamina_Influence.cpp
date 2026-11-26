class USGE_Stamina_Influence_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Stamina_Influence.SGE_Stamina_Influence_C:ExecuteUbergraph_SGE_Stamina_Influence'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Stamina Identifier = {
        "TagName": FName("None")
    };
    struct FIRRStaminaInfluence Influence = {
        "Tag": {
            "TagName": FName("None")
        },
        "Value": 1,
        "DrainMultiplier": 1,
        "RecoverMultiplier": 1,
        "bUseInventoryWeightMultiplier": false,
        "bUseWeaponErgonomicsMultiplier": false,
        "bUseEquippedItemAimDrainMultiplier": false
    };
    float DigestTime = 15;
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";
    enum Duration = ESimpleGameplayEffectDuration::Duration;
    float DurationMagnitude = 60;
    float TickInterval = 10;
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Replace;

};