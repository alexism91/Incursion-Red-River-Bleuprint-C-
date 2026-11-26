class USGE_IsWounded_C : public USimpleGameplayEffect_Wounded
{
public:
    class UTexture2D* HeavyIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/HeavyBleeding-Icon.HeavyBleeding-Icon'";
    FText HeavyName = FText("Heavy Bleeding");
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/BleedingTime-Icon.BleedingTime-Icon'";
    FText Name = FText("Bleeding");
    float DurationMagnitude = 1;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Wounded"))
    });
    double ReInitAmount;
    float LocAmount;
};