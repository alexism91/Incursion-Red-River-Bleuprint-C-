class UBP_FPCC_Stamina_Character_C : public UFirstPersonStamina_Character
{
public:
    class UMaterialParameterCollection* MaterialParameterCollection = "MaterialParameterCollection'Test_C/Content/Environment/Misc/PostProcessing/PP/Stamina/MPC_Stamina.MPC_Stamina'";
    FName MaterialParameterName = FName("Stamina");
    struct FGameplayTag RunTag = {
        "TagName": FName("Character.Abilities.Active.Running.Wants To Run")
    };
    struct FGameplayTag SprintTag = {
        "TagName": FName("Character.Abilities.Active.Sprinting.Wants To Sprint")
    };
    class UBlueprintGeneratedClass* SprintEffect = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Sprinting.SGE_Sprinting_C'";
    class UBlueprintGeneratedClass* RunEffect = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Effects/SGE_Running.SGE_Running_C'";
    float RecoverPerSecond = 4;
    TArray<struct FIRRStaminaInfluence> StaminaInfluences = {
        {
            "Tag": {
                "TagName": FName("Character.Abilities.Active.Running.Is Running")
            },
            "Value": -2,
            "DrainMultiplier": 1,
            "RecoverMultiplier": 1,
            "bUseInventoryWeightMultiplier": true,
            "bUseWeaponErgonomicsMultiplier": false,
            "bUseEquippedItemAimDrainMultiplier": false
        }
    };
    struct FGameplayTagContainer AbilitiesToStop = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run"))
    });
};