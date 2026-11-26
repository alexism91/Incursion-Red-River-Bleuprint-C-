class ABP_AKAmbientSound_C : public AAkAmbientSound
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Test/BP_AKAmbientSound.BP_AKAmbientSound_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Test/BP_AKAmbientSound.BP_AKAmbientSound_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Test/BP_AKAmbientSound.BP_AKAmbientSound_C:ExecuteUbergraph_BP_AKAmbientSound'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkComponent* AkComponent = "AkComponent'Test_C/Content/Blueprints/Test/BP_AKAmbientSound.Default__BP_AKAmbientSound_C:AkAudioComponent0'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UAkComponent* RootComponent = "AkComponent'Test_C/Content/Blueprints/Test/BP_AKAmbientSound.Default__BP_AKAmbientSound_C:AkAudioComponent0'";
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;

};