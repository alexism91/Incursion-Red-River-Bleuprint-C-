class ABP_FlowmapRiverSystem_C : public AActor
{
public:
    TArray<class UArrowComponent*> ComponentTemplates = {
        "SplineMeshComponent'Test_C/Content/ThirdParty/BranchingRiverTool/Blueprints/BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C:NODE_AddSplineMeshComponent-0'",
        "TextRenderComponent'Test_C/Content/ThirdParty/BranchingRiverTool/Blueprints/BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C:NODE_AddTextRenderComponent-1'",
        "ArrowComponent'Test_C/Content/ThirdParty/BranchingRiverTool/Blueprints/BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C:NODE_AddArrowComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/BranchingRiverTool/Blueprints/BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/BranchingRiverTool/Blueprints/BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C:ExecuteUbergraph_BP_FlowmapRiverSystem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool ShowSplineVisualizers = true;
    bool ShowSplineNumber = true;
    double SplineNumberSize = 1;
    struct FColor SplineNumberColor = FColor(255, 0, 0, 255);
    bool ShowSplineDirection = true;
    double SplineDirectionSize = 1;
    struct FColor SplineDirectionColor = FColor(255, 0, 0, 255);
    class UMaterialInstanceConstant* RiverMaterial = "MaterialInstanceConstant'Test_C/Content/ThirdParty/BranchingRiverTool/Materials/MI_RiverWater_Rapids.MI_RiverWater_Rapids'";
    class UMaterialInstanceConstant* RiverMaterial_LOD = "MaterialInstanceConstant'Test_C/Content/ThirdParty/BranchingRiverTool/Materials/MI_RiverWaterRapids_Cheaper.MI_RiverWaterRapids_Cheaper'";
    struct FStruct_AttachRiver RiverAttachment = {
        "AttachBeginning_12_C382435048719A7D80BF9288E4A7D726": nullptr,
        "AttachBeginningIndex_14_F8A286C74B6A9E65EB3228B6DA6BCACF": 0,
        "AttachEnd_13_E51A7D1B4C23E5E524860489748283C9": nullptr,
        "AttachEndIndex_17_85951667434FF824BE65D6B01AB0D21F": 0
    };
    double OverallScale = 2;
    FName FluidSurfaceTag = FName("Fluid");
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UBillboardComponent* Icon;
    class USplineComponent* RiverSplineComponent;
    TArray<class USplineMeshComponent*>* RiverSplineMeshComponents;
    TArray<Enum_RiverBranching> RiverSplits;

};