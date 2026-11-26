class ABP_ElectricTower_C : public ABP_P_Wire_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/BP_ElectricTower.BP_ElectricTower_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/BP_ElectricTower.BP_ElectricTower_C:InheritableComponentHandler'";
    class UStaticMesh* Mesh = "StaticMesh'Test_C/Content/Environment/Assets/Props/ElectricalTransmissionTower/SM_ElectricalTransmissionTower.SM_ElectricalTransmissionTower'";
    bool LineTraceWire = false;
    TArray<FName> WireConnectionArray = {
        FName("Connection_1"),
        FName("Connection_2"),
        FName("Connection_3")
    };
    double WireMinStartTangent = 0;
    double WireMaxStartTangent = 0;
    double WireStartEndTangent = 0;
    double WireMaxEndTangent = 0;
    double SagMaxAmount = 1500;
    double StartPointBox = 0;
    double EndPointBox = 0;
    TArray<struct FF_Wire_Struct> InputWireData = {
        {
            "WireSplinePoints_7_18C4D0204ACB8AAD7AAAACA9B8754B55": {},
            "WireMesh_11_D3C9A6994578004389B84291B6561B0C": "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Splines/SM_Wire1.SM_Wire1'",
            "WireMatInst_25_76DF787A4D9934D460C686B2E7BB722F": nullptr,
            "WireScale_14_96D75A3048DC2C7DBCB77E9B9AB022C4": FVector(2, 2, 2),
            "WireGroundOffset_17_A44C38AF4EB62B93EADB77A869BB5FDE": 10,
            "StartTangent_20_DEBBD58D421CF3C754C06EBC541458BB": FVector(0, 0, 0),
            "EndTangent_22_C5E5D8534CDE08F77B049CBCD15EA66E": FVector(0, 0, 0),
            "ExtraGuides_33_20C9C79C4E2A3683761B65B5A1044CB3": {}
        }
    };
    bool Taper = false;
    double TaperDistance = 1;
    double TaperEnd = 1;
    class UAdvancedAkComponent* AdvancedAk;
    class USceneComponent* Connection2;
    class USceneComponent* Connection1;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UStaticMeshComponent* StaticMesh;

};