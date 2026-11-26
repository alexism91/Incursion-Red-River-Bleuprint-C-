class UBP_BulletDamage_C : public UBaseDamageType
{
public:
    struct FGameplayTagContainer SupportedGameplayEffects = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Effects.Wounded"))
    });
};