class AUDS_Cloud_Paint_Container_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/System/UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/System/UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C:ExecuteUbergraph_UDS_Cloud_Paint_Container'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 Cloud Painting Cell Size = 10000000;
    bool bEnableAutoLODGeneration = false;
    class UBillboardComponent* Billboard;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    TMap<struct FIntPoint, class UUDS_Cloud_Paint_Cell_C*> Cloud Painting Cell Data;
    int Cloud Painting Cell Resolution;
    TMap<struct FIntPoint, class UTextureRenderTarget2D*> Cell Render Targets;

};