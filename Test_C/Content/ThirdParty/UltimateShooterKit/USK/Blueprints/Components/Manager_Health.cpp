class UManager_Health_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 3;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Health.Manager_Health_C:ExecuteUbergraph_Manager_Health'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double CurrentHealth = 100;
    double MaxHealth = 100;
     OnActorKilled = ;
     OnActorTakeDamage = ;
    bool IsAlive? = true;
    bool bReplicates = true;
    class AActor* OwnerActor;
    class UPrimitiveComponent* SimulatedComponent;
    bool CustomDamageApplied;

};