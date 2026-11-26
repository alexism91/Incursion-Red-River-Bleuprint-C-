class USGA_FreeLook_C : public USimpleGameplayAbility_Toggleable
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_FreeLook.SGA_FreeLook_C:ExecuteUbergraph_SGA_FreeLook'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle ResetTimer = {
        "Handle": 0
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Free Look"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Free Look")
    };
    bool StopAbilityMontage = true;

};