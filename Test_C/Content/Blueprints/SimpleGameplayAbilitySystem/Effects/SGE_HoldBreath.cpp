class USGE_HoldBreath_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_HoldBreath.SGE_HoldBreath_C:ExecuteUbergraph_SGE_HoldBreath'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/IRR_Breath.IRR_Breath'";
    FText Name = FText("Hold Breath");
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 80;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Hold Breath"))
    });
    enum StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::Ignore;

};