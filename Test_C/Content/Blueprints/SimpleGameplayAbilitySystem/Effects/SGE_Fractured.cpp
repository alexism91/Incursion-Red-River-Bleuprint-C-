class USGE_Fractured_C : public USimpleGameplayEffect_Fractured
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Fractured.SGE_Fractured_C:ExecuteUbergraph_SGE_Fractured'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float FractureChance = 30;
    float FractureDamageThreshold = 15;
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/_fractured_zoom._fractured_zoom'";
    FText Name = FText("Fractured");
    struct FGameplayTagContainer MaskingTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Painkiller"))
    });
    int CurveHandle;

};