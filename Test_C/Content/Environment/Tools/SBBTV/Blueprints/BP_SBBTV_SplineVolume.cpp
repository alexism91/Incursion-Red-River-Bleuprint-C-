class ABP_SBBTV_SplineVolume_C : public AAdvancedSBBTV_SplineVolume
{
public:
    TArray<class USplineMeshComponent*> ComponentTemplates = {
        "BillboardComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddBillboardComponent-0'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-0'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-10'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-11'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-12'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-13'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-14'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-15'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-16'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-17'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-18'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-19'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-20'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-21'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-23'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-24'",
        "ArrowComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddArrowComponent-2'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:NODE_AddSplineMeshComponent-22'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Tools/SBBTV/Blueprints/BP_SBBTV_SplineVolume.BP_SBBTV_SplineVolume_C:ExecuteUbergraph_BP_SBBTV_SplineVolume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double SegmentLength = 100;
    double Height = 9000;
    bool HiddenAtRuntime = true;
    enum E_SBBTV_VolumeDepth VolumeThickness = E_SBBTV_VolumeDepth::NewEnumerator0;
    TArray<enum ECC_Pawn> EffectedCollisionChannels = {
        ECC_Pawn
    };
    double LaunchSpeed = 600;
    double MaximumSplineLength = 5000;
    bool MarkAllSplinePoints = true;
    bool GenerateCollisionInEditor = true;
    bool UseDistanceFade = true;
    double MaxOpacity = 1;
    double MaxOpacityDistance = 1000;
    double MinOpacityDistance = 3000;
    bool UseBaseColor = true;
    struct FLinearColor BaseColor = FLinearColor(1, 0, 1, 1);
    bool UseGrid = true;
    struct FLinearColor GridColor = FLinearColor(1, 0, 0, 1);
    double GridTilingX = 8;
    double GridTilingY = 12;
    bool EmissiveGrid = true;
    double GridBoost = 5;
    double BaseColorBoost = 1;
    struct FTimerHandle ResetPending = {
        "Handle": 0
    };
    bool SkipLastInstance = true;
    bool Block Navigation = true;
    class UInstancedStaticMeshComponent* InstancedVisualMesh;
    class USplineComponent* Spline;
    class UMaterialInstanceDynamic* DynMat;
    bool DoubleSided;
    bool UseOverrideMaterial;
    class UMaterialInterface* OverrideMaterial;
    E_SBBTV_VolumeClass VolumeType;
    byte CollisionObjectType;
    bool OneSidedCollision;
    bool InvertCollision;
    bool OptimizeSplineOnBeginPlay;
    bool DisableDistanceFadeInEditor;
    TArray<class USplineMeshComponent*>* SplineMeshes;
    double MarkerOffset;
    bool ShowCollisionDirection;
    double MinOpacity;
    E_SBBTV_TriggerClass TriggerClass;
    bool DisableUpdates;
    bool BaseColorIsSolid;
    bool EmissiveBaseColor;
    TArray<class UPrimitiveComponent*>* BlockingMeshes;
    bool UseCustomMesh;
    class UStaticMesh* CustomMesh;
    bool UseVisualMesh;
    bool DeformableVisualMesh;
    class UStaticMesh* VisualMesh;
    double VisualMeshSpacing;

};