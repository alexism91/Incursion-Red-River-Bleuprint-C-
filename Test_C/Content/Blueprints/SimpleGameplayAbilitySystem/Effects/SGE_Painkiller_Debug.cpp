class USGE_Painkiller_Debug_C : public USimpleGameplayEffect
{
public:
    class UTexture2D* Icon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";
    FText Name = FText("Painkiller");
    enum Duration = ESimpleGameplayEffectDuration::Infinite;
    float DurationMagnitude = 4;
    struct FGameplayTagContainer GrantedGameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Painkiller"))
    });
    FName LinkedAnimGraph = FName("Combat");
    bool StopMontage = true;
};