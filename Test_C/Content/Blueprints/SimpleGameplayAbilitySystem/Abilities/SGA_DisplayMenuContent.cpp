class USGA_DisplayMenuContent_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_DisplayMenuContent.SGA_DisplayMenuContent_C:ExecuteUbergraph_SGA_DisplayMenuContent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Enum_MenuHandlerType Menu Type = Enum_MenuHandlerType::NewEnumerator8;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Inventory Open")
    };

};