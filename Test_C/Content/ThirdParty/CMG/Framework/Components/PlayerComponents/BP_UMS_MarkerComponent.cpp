class UBP_UMS_MarkerComponent_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/Components/PlayerComponents/BP_UMS_MarkerComponent.BP_UMS_MarkerComponent_C:ExecuteUbergraph_BP_UMS_MarkerComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double ScreenMarkerMargin = 50;
    double SmoothRate = 15;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    TArray<class UW_OffscreenMarker_C*>* CurrentMarkers;

};