class USGE_StopHeavyWound_C : public USimpleGameplayEffect
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_StopHeavyWound.SGE_StopHeavyWound_C:ExecuteUbergraph_SGE_StopHeavyWound'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Amount = -1;
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Meds/T_Plaster.T_Plaster'";
    FText Name = FText("Stops Bleeding");
    float DurationMagnitude = 80;
    struct FGameplayTagContainer RequiredGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Heavy Wounded"))
    });
    double ReInitAmount;
    float LocAmount;

};