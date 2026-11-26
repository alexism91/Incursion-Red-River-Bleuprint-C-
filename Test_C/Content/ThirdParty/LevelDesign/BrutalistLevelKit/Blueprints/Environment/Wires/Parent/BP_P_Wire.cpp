class ABP_P_Wire_C : public AActor
{
public:
    TArray<class USplineComponent*> ComponentTemplates = {
        "SplineComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Wires/Parent/BP_P_Wire.BP_P_Wire_C:NODE_AddSplineComponent-0'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Wires/Parent/BP_P_Wire.BP_P_Wire_C:NODE_AddSplineMeshComponent-1'",
        "SplineComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Wires/Parent/BP_P_Wire.BP_P_Wire_C:NODE_AddSplineComponent-3'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Wires/Parent/BP_P_Wire.BP_P_Wire_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Wires/Parent/BP_P_Wire.BP_P_Wire_C:ExecuteUbergraph_BP_P_Wire'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool LineTraceWire = true;
    bool SagWire = true;
    TArray<FName> WireConnectionArray = {
        FName("Connection")
    };
    double WireMinMeshSpacing = 200;
    double WireMaxMeshSpacing = 400;
    double WireTraceDistance = 1500;
    double WireAccuracy = 100;
    double WireMinStartTangent = -0.5;
    double WireMaxStartTangent = 0.5;
    double WireStartEndTangent = -0.5;
    double WireMaxEndTangent = 0.5;
    double WireTangentScale = 200;
    double SagMinAmount = 300;
    double SagMaxAmount = 300;
    double StartPointBox = 20;
    double EndPointBox = 20;
    TArray<struct FF_Wire_Struct> InputWireData = {
        {
            "WireSplinePoints_7_18C4D0204ACB8AAD7AAAACA9B8754B55": {},
            "WireMesh_11_D3C9A6994578004389B84291B6561B0C": nullptr,
            "WireMatInst_25_76DF787A4D9934D460C686B2E7BB722F": nullptr,
            "WireScale_14_96D75A3048DC2C7DBCB77E9B9AB022C4": FVector(2, 2, 1),
            "WireGroundOffset_17_A44C38AF4EB62B93EADB77A869BB5FDE": 10,
            "StartTangent_20_DEBBD58D421CF3C754C06EBC541458BB": FVector(0, 0, 0),
            "EndTangent_22_C5E5D8534CDE08F77B049CBCD15EA66E": FVector(0, 0, 0),
            "ExtraGuides_33_20C9C79C4E2A3683761B65B5A1044CB3": {}
        }
    };
    bool Taper = true;
    double TaperDistance = 2;
    double TaperStart = 1;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USceneComponent* Connection;
    class UTextRenderComponent* DebugStatusText;
    class USceneComponent* DefaultSceneRoot;
    int WireCount;
    TArray<class AActor*> AffectedActors;
    double WireStartTangentBlend;
    double WireEndTangentBlend;
    class UMaterialInstanceDynamic* WireMatInst;
    bool LockValuesToLevelData;
    TArray<struct FF_Wire_Struct*>* SavedWireData;
    TArray<struct FF_Wire_Struct*>* TempWireData;
    double TaperEnd;

};