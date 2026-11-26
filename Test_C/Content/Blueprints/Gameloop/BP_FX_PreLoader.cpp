class ABP_FX_PreLoader_C : public AIRRFXPreloader
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/BP_FX_PreLoader.BP_FX_PreLoader_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/BP_FX_PreLoader.BP_FX_PreLoader_C:ExecuteUbergraph_BP_FX_PreLoader'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FPrimaryAssetId CurrentFXAsset = {
        "PrimaryAssetType": {
            "Name": FName("None")
        },
        "PrimaryAssetName": FName("None")
    };
    bool bNetLoadOnClient = false;
    class USceneComponent* DefaultSceneRoot;
    TArray<struct FPrimaryAssetId> FXAssets;
    int TotalFXCount;
    int LoadedFXCount;
    class UObject* CurrentPrimaryAssetObject;

};