class ABP_TargetManager_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/CMG/Framework/BP_TargetManager.BP_TargetManager_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/BP_TargetManager.BP_TargetManager_C:ExecuteUbergraph_BP_TargetManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class USceneComponent* DefaultSceneRoot;
    TArray<struct FS_PermanentTargetInfo> Targets;

};