class ABP_IRRMiniMapVolume_C : public AIRRMiniMapVolume
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRMiniMapVolume.BP_IRRMiniMapVolume_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRMiniMapVolume.BP_IRRMiniMapVolume_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRMiniMapVolume.BP_IRRMiniMapVolume_C:ExecuteUbergraph_BP_IRRMiniMapVolume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FSoftObjectPath Map Capture = FSoftObjectPath("/Game/Blueprints/MissionSystem/Textures/RT_MapCapture.RT_MapCapture");
    bool Map Capture Landscape = true;
    struct FVector2D MapMargins = FVector2D(200, 200);
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    bool Map Custom Box Placement;

};