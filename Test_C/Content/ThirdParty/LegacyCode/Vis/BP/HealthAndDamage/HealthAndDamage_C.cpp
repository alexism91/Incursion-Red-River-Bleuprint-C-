class UHealthAndDamage_C_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 2;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LegacyCode/Vis/BP/HealthAndDamage/HealthAndDamage_C.HealthAndDamage_C_C:ExecuteUbergraph_HealthAndDamage_C'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MaxHealth = 100;
    double CurrentHealth = 100;
    double LowHealthPercent = 0.30000001192092896;
    double HealthRegenRate = 3;
    double HealthRegenDelay = 2;
    bool UsesDamageTracking = true;
    int32 DamageTrackingRecordLimit = 50;
    double Damage Multiplier = 1;
    bool CanDie = true;
    bool DoesTrackGameTime = true;
    bool DoesTrackDamageType = true;
    bool DoesTrackDamageCauser = true;
    bool DoesTrackDamageAmount = true;
     OnDeath = ;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    bool HealthRegenEnabled;
    bool IsDead;
    TArray<struct FVisBP_DamageTracking_Struct> TrackedDamage;
    bool DoesTrackLocationOnDamage;
    bool DoesTrackDamageCauserLocation;
    bool DoesTrackDamageCauserVisible;
    bool DoesTrackDamageCauserHeard;
    class APostProcessVolume* NewVar_0;

};