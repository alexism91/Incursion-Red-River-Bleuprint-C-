class UBP_WeaponComponent_C : public UWeaponComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_WeaponComponent.BP_WeaponComponent_C:ExecuteUbergraph_BP_WeaponComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkRtpc* RateOfFireRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Weapons/weapon_set_rate_of_fire.weapon_set_rate_of_fire'";
    class UAkRtpc* TailPitchRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Weapons/weapon_set_tail_pitch.weapon_set_tail_pitch'";
    class UAkRtpc* TailVolumeRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Weapons/weapon_set_tail_volume.weapon_set_tail_volume'";
    float ResetShotCountDelay_AI = 4;
    float MuzzleFlashProbability = 0.35;
    struct FGameplayTagContainer RequestAmmunitionStateTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open"))
    });
    class UBlueprintGeneratedClass* BulletClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Bullets/BP_MasterBullet.BP_MasterBullet_C'";
    class UBlueprintGeneratedClass* BulletDamageType = "BlueprintGeneratedClass'Test_C/Content/Blueprints/DamageTypes/BP_BulletDamage.BP_BulletDamage_C'";
    class UCurveFloat* FLengthMultiplier = "CurveFloat'Test_C/Content/Blueprints/Curves/Handling/Universal/FC_WEP_LengthMapping.FC_WEP_LengthMapping'";
    class UCurveFloat* FRecoilMultiplier = "CurveFloat'Test_C/Content/Blueprints/Curves/Handling/Universal/FC_WEP_RecoilMapping.FC_WEP_RecoilMapping'";
    class UCurveFloat* FDurabilityMalfunctionCurve = "CurveFloat'Test_C/Content/Blueprints/Curves/Durability/FC_DurabilityMalfunctionCurve.FC_DurabilityMalfunctionCurve'";
    bool bDebugMalfunction = false;
    float DegradationRate_SemiMultiplier = 0.6;
    float DegradationRate_AutoMultiplier = 0.8;
    float MisfireChance = 0.1;
    float BlockChance = 0.075;
    class UCurveFloat* FHeatingMalfunctionCurve = "CurveFloat'Test_C/Content/Blueprints/Curves/Durability/FC_HeatingMalfunctionCurve.FC_HeatingMalfunctionCurve'";
    class UCurveFloat* FHeatingDurabilityCurve = "CurveFloat'Test_C/Content/Blueprints/Curves/Durability/FC_HeatingDurabilityCurve.FC_HeatingDurabilityCurve'";
    TArray<class UBlueprintGeneratedClass*> ToGrantAbilities = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_CheckAmmo.SGA_CheckAmmo_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_CheckChamber.SGA_CheckChamber_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_CycleSights.SGA_CycleSights_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Inspect.SGA_Inspect_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_PointSight.SGA_PointSight_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Reload.SGA_Reload_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_SwitchFireMode.SGA_SwitchFireMode_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_ManualChamber.SGA_ManualChamber_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_FixMalfunction.SGA_FixMalfunction_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Inspect_Malfunction.SGA_Inspect_Malfunction_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Fire.SGA_Fire_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Aim.SGA_Aim_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_LowReady.SGA_LowReady_C'"
    };
    class UCurveFloat* FWeightMultiplier = "CurveFloat'Test_C/Content/Blueprints/Curves/Handling/Universal/FC_WEP_WeightMapping.FC_WEP_WeightMapping'";
    class UCurveFloat* FErgonomicsMultiplier = "CurveFloat'Test_C/Content/Blueprints/Curves/Handling/Universal/FC_WEP_ErgonomicsMapping.FC_WEP_ErgonomicsMapping'";
    bool bReplicates = true;

};