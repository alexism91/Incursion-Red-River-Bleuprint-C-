class ABP_Steam_LIt_01_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Environment/Blueprints/Lights/BP_Steam_LIt_01.BP_Steam_LIt_01_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Steam_LIt_01.BP_Steam_LIt_01_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Lights/BP_Steam_LIt_01.BP_Steam_LIt_01_C:ExecuteUbergraph_BP_Steam_LIt_01'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class UAkComponent* Ak;
    class UBillboardComponent* Billboard;
    class UNiagaraComponent* Niagara;
    class USceneComponent* Scene;

};