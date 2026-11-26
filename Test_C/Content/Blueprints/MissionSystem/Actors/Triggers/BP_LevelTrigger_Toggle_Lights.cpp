class ABP_LevelTrigger_Toggle_Lights_C : public ABP_LevelTrigger_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.BP_LevelTrigger_Toggle_Lights_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.BP_LevelTrigger_Toggle_Lights_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.BP_LevelTrigger_Toggle_Lights_C:ExecuteUbergraph_BP_LevelTrigger_Toggle_Lights'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FString MessagePayload = "Generator_HAS_A";
    float LineThickness = 20;
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.Default__BP_LevelTrigger_Toggle_Lights_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.Default__BP_LevelTrigger_Toggle_Lights_C:CollisionComp'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Toggle_Lights.Default__BP_LevelTrigger_Toggle_Lights_C:CollisionComp'";
    class UBP_IRRMessageComponent_C* BP_IRRMessageComponent;
    TArray<class UBP_AdvancedLightComponent_C*>* Lights;

};