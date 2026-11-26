class ABP_IRR_PlayerPosition_C : public AActor
{
public:
    int32 NumReplicatedProperties = 2;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MWCommon/_Lagacy/Blueprints/BP_IRR_PlayerPosition.BP_IRR_PlayerPosition_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MWCommon/_Lagacy/Blueprints/BP_IRR_PlayerPosition.BP_IRR_PlayerPosition_C:ExecuteUbergraph_BP_IRR_PlayerPosition'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector BendPos = FVector(0, 0, 0);
    double BendPosLength = 0.25;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    class USceneComponent* DefaultSceneRoot;
    int PlayerPawnIndex;
    double PlayerSpeed;
    class AGameStateBase* GameState;

};