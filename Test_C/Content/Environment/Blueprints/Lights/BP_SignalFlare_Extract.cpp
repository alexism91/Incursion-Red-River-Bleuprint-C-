class ABP_SignalFlare_Extract_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_SignalFlare_Extract.BP_SignalFlare_Extract_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_SignalFlare_Extract.BP_SignalFlare_Extract_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Lights/BP_SignalFlare_Extract.BP_SignalFlare_Extract_C:ExecuteUbergraph_BP_SignalFlare_Extract'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor FlareColor = FLinearColor(0, 1, 0, 1);
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UArrowComponent* Arrow;
    class UBillboardComponent* Billboard;
    class UNiagaraComponent* Niagara_Flare;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_SignalFlare;

};