class ABP_Base_Light_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Environment/Blueprints/Lights/BP_Base_Light.BP_Base_Light_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Base_Light.BP_Base_Light_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Lights/BP_Base_Light.BP_Base_Light_C:ExecuteUbergraph_BP_Base_Light'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    enum NetDormancy = ENetDormancy::DORM_DormantAll;
    float NetUpdateFrequency = 1;
    class ULXRSourceComponent* LXRSource;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class UNiagaraComponent* Niagara;
    class UBP_AdvancedLightComponent_C* BP_AdvancedLightComponent;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UNiagaraComponent*>* NiagaraParticles;

};