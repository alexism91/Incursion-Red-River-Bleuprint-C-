class ABP_Door_Open_C : public ABP_Door_Master_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Open.BP_Door_Open_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Open.BP_Door_Open_C:InheritableComponentHandler'";
    struct FLinearColor DoorColor = FLinearColor(0,07451, 0,137255, 0,101961, 1);
    double OpeningSpeed = 1.2;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBP_InteractionTarget_Open_C* BP_InteractionTarget_Open;
    class UBP_InteractionTarget_Peek_C* BP_InteractionTarget_Peek;
    class UStaticMeshComponent* sm_Door_02_02;
};