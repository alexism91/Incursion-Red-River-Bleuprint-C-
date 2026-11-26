class ABP_TargetActor_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Target/BP_TargetActor.BP_TargetActor_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Target/BP_TargetActor.BP_TargetActor_C:ExecuteUbergraph_BP_TargetActor'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bReplicates = true;
    class UStaticMeshComponent* Target;
    class USceneComponent* DefaultSceneRoot;
    bool TargetDamaged;

};