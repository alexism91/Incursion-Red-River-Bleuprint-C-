class ABP_ChimneySmoke_Medium_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Environment/Blueprints/Lights/BP_ChimneySmoke_Medium.BP_ChimneySmoke_Medium_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_ChimneySmoke_Medium.BP_ChimneySmoke_Medium_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Lights/BP_ChimneySmoke_Medium.BP_ChimneySmoke_Medium_C:ExecuteUbergraph_BP_ChimneySmoke_Medium'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UAkComponent* Ak;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class UBillboardComponent* Billboard;
    class UNiagaraComponent* Niagara;
    class USceneComponent* Scene;

};