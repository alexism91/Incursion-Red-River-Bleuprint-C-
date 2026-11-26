class ABP_EOTECH_HHS-1_Hybrid_Sight_C : public ABP_MasterHybridSight_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.BP_EOTECH_HHS-1_Hybrid_Sight_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.BP_EOTECH_HHS-1_Hybrid_Sight_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.BP_EOTECH_HHS-1_Hybrid_Sight_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.BP_EOTECH_HHS-1_Hybrid_Sight_C:ExecuteUbergraph_BP_EOTECH_HHS-1_Hybrid_Sight'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSightData SightData_Folded = {
        "SightSocket": FName("ADS"),
        "bIsScope": false,
        "ScopeMaterialParameterCollection": "MaterialParameterCollection'Test_C/Content/ThirdParty/InfimaGames/AnimatedLowPolyWeapons/Materials/MPC_Viewmodel.MPC_Viewmodel'",
        "ScopeWorldLocationParameterName": FName("ScopeLocation"),
        "ScopeScreenLocationParameterName": FName("ScopeScreenLocation"),
        "ScopeForwardParameterName": FName("ScopeForward"),
        "ScopeRadiusParameterName": FName("ScopeRadius"),
        "ScopeRotationParameterName": FName("ScopeRotation"),
        "ScopeRadiusMargin": 0.05,
        "ScopeRadiusTransitionGraph": "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/Sight/FC_ScopeMaskingTransition.FC_ScopeMaskingTransition'",
        "MagnificationLevels": {
            1
        },
        "DefaultLevelIndex": 0,
        "FixedDistance": 10,
        "HandsFOV": 80,
        "MinimumDistance": 12,
        "CameraIndependentFOV": 70,
        "CameraAffectedFOVPercentage": 20,
        "HandsZoomIn": 10,
        "SightingRange": 200,
        "TransitionMultiplier": 1,
        "SensitivityMultiplier": 1,
        "GlobalMaterialParameters": {
            { FName("Vignette"), {
                "MaterialParameterCollection": "MaterialParameterCollection'Test_C/Content/ThirdParty/InfimaGames/AnimatedLowPolyWeapons/Materials/MPC_Viewmodel.MPC_Viewmodel'",
                "bScalarParameter": true,
                "TargetFloatValue": 0,
                "TargetVectorValue": FLinearColor(0, 0, 0, 0),
                "bOverrideTransitionGraph": false,
                "FLineTransition": nullptr
            } }
        }
    };
    struct FSightData SightData_UnFolded = {
        "SightSocket": FName("ADS"),
        "bIsScope": false,
        "ScopeMaterialParameterCollection": nullptr,
        "ScopeWorldLocationParameterName": FName("ScopeLocation"),
        "ScopeScreenLocationParameterName": FName("ScopeScreenLocation"),
        "ScopeForwardParameterName": FName("ScopeForward"),
        "ScopeRadiusParameterName": FName("ScopeRadius"),
        "ScopeRotationParameterName": FName("ScopeRotation"),
        "ScopeRadiusMargin": 0.05,
        "ScopeRadiusTransitionGraph": nullptr,
        "MagnificationLevels": {},
        "DefaultLevelIndex": 0,
        "FixedDistance": 10,
        "HandsFOV": 45,
        "MinimumDistance": 0,
        "CameraIndependentFOV": 70,
        "CameraAffectedFOVPercentage": 20,
        "HandsZoomIn": 10,
        "SightingRange": 200,
        "TransitionMultiplier": 1,
        "SensitivityMultiplier": 1,
        "GlobalMaterialParameters": {}
    };
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.Default__BP_EOTECH_HHS-1_Hybrid_Sight_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/BP_EOTECH_HHS-1_Hybrid_Sight.Default__BP_EOTECH_HHS-1_Hybrid_Sight_C:PickupComponent'";
    class UStaticMeshComponent* SK_EOTECH_HHS-1_Hybrid_Sight_Glass;
    class UStaticMeshComponent* StaticMesh;
    class UBP_SightComponent_C* BP_HybridSightComponent;

};