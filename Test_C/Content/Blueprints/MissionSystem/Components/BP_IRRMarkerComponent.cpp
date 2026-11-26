class UBP_IRRMarkerComponent_C : public UIRRMarkerComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Components/BP_IRRMarkerComponent.BP_IRRMarkerComponent_C:ExecuteUbergraph_BP_IRRMarkerComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRMarkerSettings MarkerSettings = {
        "Size": 32
    };
    bool bReplicates = true;

};