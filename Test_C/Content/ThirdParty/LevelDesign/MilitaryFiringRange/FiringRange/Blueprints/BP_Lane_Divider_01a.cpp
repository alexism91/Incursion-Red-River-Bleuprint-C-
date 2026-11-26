class ABP_Lane_Divider_01a_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_Lane_Divider_01a.BP_Lane_Divider_01a_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_Lane_Divider_01a.BP_Lane_Divider_01a_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_Lane_Divider_01a.BP_Lane_Divider_01a_C:ExecuteUbergraph_BP_Lane_Divider_01a'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USphereComponent* Sphere;
    class UBP_InteractionTarget_C* BP_InteractionTarget_Down;
    class UWidgetComponent* Down;
    class UWidgetComponent* Up;
    class UBP_InteractionTarget_C* BP_InteractionTarget_Up;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Lane_Divider_01a;
    class USceneComponent* DefaultSceneRoot;
    TSoftObjectPtr<ABP_TargetOnRail_C> TargetOnRail;

};