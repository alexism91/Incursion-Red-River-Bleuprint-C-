class ABP_LootContainer_Jacket_02_C : public ABP_LootContainer_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Jacket_02.BP_LootContainer_Jacket_02_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Jacket_02.BP_LootContainer_Jacket_02_C:InheritableComponentHandler'";
    class UAkAudioEvent* Opening Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Player/Player_Footsteps/Player_Open_DeadBody.Player_Open_DeadBody'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMeshComponent* StaticMesh;
};