class ABP_Door_Master_C : public AActor
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:ComponentDelegateBinding_0'"
    };
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:OpeningDoorAnimatino_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:KickDoorAnimatino_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:DiscoverAnimatin_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/BP_Door_Master.BP_Door_Master_C:ExecuteUbergraph_BP_Door_Master'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor DoorColor = FLinearColor(0, 0, 0, 0);
    FName DoorMaterialSlotName = FName("L1Color");
    bool UseHinge? = true;
    struct FTimerHandle DoorPhysicsTimer = {
        "Handle": 0
    };
    bool CheckDoorPhysics? = true;
    double OpenDoorAngle = 90;
    double PeakDoorAngle = 25;
    double OpeningSpeed = 1;
    struct FGameplayTag KeyTag = {
        "TagName": FName("None")
    };
    bool bUseSmartLink = true;
    class UAkAudioEvent* DoorOpenSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/Ambience/Doors/Door_Metal_FullyOpen.Door_Metal_FullyOpen'";
    class UAkAudioEvent* DoorPeekSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Door_Metal_SlightlyOpen.Door_Metal_SlightlyOpen'";
    class UAkAudioEvent* DoorCloseSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Door_Metal_Close.Door_Metal_Close'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    float MinNetUpdateFrequency = 10;
    float NetPriority = 3;
    class UDoorSwingComponent* DoorSwing;
    class UNavModifierComponent* NavModifier;
    class UBP_NavLinkComponent_C* BP_NavLinkComponent;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class UAkPortalComponent* AkPortal;
    class UBoxComponent* Collision_Portal;
    class UBoxComponent* Box;
    class USceneComponent* DoorSoundLocation;
    class UWidgetComponent* DoorKickWidget;
    class UWidgetComponent* DoorPeekWidget;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* DoorOpenWidget;
    class UWidgetComponent* DoorLockWidget;
    class UPhysicsConstraintComponent* Hinge;
    class UStaticMeshComponent* Door;
    class USceneComponent* DoorPivot;
    class USceneComponent* DefaultSceneRoot;
    class UTimelineComponent* DiscoverAnimatin;
    class UTimelineComponent* KickDoorAnimatino;
    class UTimelineComponent* OpeningDoorAnimatino;
    FText DoorName;
    class UMaterialInstanceDynamic* DoorMaterialInstance;
    bool OpensBothWays?;
    bool DoorInverted?;
    double CurrentAngle;
    double TargetAngle;
    double RelativeYaw;
    E_InteractionDirection OpeningDirection;
    class AActor* Interacting Actor;
    int Significance Level;
    bool Open?;
private:
    float DiscoverAnimatin_DoorOpening_B24A7E15498E9FDCBB60069539EB01B2;
    byte DiscoverAnimatin__Direction_B24A7E15498E9FDCBB60069539EB01B2;
    float KickDoorAnimatino_DoorOpening_8F01C01644157A2D502EBDB095F40332;
    byte KickDoorAnimatino__Direction_8F01C01644157A2D502EBDB095F40332;
    float OpeningDoorAnimatino_DoorOpeningAlpha_F8EF96E042529718F136749445DDD488;
    byte OpeningDoorAnimatino__Direction_F8EF96E042529718F136749445DDD488;

};