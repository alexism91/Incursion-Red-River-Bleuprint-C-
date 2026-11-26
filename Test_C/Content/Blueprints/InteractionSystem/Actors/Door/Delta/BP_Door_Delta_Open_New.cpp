class ABP_Door_Delta_Open_New_C : public ABP_Door_Open_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Delta/BP_Door_Delta_Open_New.BP_Door_Delta_Open_New_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Delta/BP_Door_Delta_Open_New.BP_Door_Delta_Open_New_C:InheritableComponentHandler'";
    enum OpeningDirection = E_InteractionDirection::Back;
    class UAkAudioEvent* DoorOpenSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Doors/Door_Wood_Open.Door_Wood_Open'";
    class UAkAudioEvent* DoorPeekSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Doors/Door_Wood_Peek.Door_Wood_Peek'";
    class UAkAudioEvent* DoorCloseSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Doors/Door_Wood_Close.Door_Wood_Close'";
};