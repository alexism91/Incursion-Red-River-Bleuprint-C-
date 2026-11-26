class ABP_InGamePlayerController_C : public AIRRPlayerController
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UEnhancedInputActionDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.BP_InGamePlayerController_C:ComponentDelegateBinding_0'",
        "EnhancedInputActionDelegateBinding'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.BP_InGamePlayerController_C:EnhancedInputActionDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.BP_InGamePlayerController_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.BP_InGamePlayerController_C:ExecuteUbergraph_BP_InGamePlayerController'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnLeaveMatch = ;
    struct FDataTableRowHandle Tutorial = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/TutorialSystem/DT_Tutorials.DT_Tutorials'",
        "RowName": FName("InRaid")
    };
    struct FIRRDayTime StartDaytime = {
        "Hours": 0,
        "Minutes": 0,
        "Seconds": 0
    };
    struct FIRRProgressData StartProgressData = {
        "Level": 1,
        "CurrentXP": 0,
        "LoyaltyData": {},
        "SuccessRate": 0,
        "MissionPoolSize": 0,
        "HideoutUnitLevels": {},
        "InboxData": {},
        "CompletedMissionGraphs": {}
    };
    struct FDateTime StartRaidTimestamp = FDateTime("lundi 1 janvier 0001 00:00:00");
    struct FGameplayTag GCPS Ability Tag = {
        "TagName": FName("Inventory.Equipment Slots.GCPS")
    };
    class UBlueprintGeneratedClass* CinematicCameraPawnClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.BP_CinematicCamera_C'";
    class UIRRPlayerDangerComponent* DangerComponent = "IRRPlayerDangerComponent'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.Default__BP_InGamePlayerController_C:DangerComponent'";
    class UIRRGroundHoldComponent* GroundHoldComponent = "IRRGroundHoldComponent'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.Default__BP_InGamePlayerController_C:GroundHoldComponent'";
    enum StreamingSourcePriority = EStreamingSourcePriority::Highest;
    struct FColor StreamingSourceDebugColor = FColor(0, 255, 170, 255);
    class USceneComponent* TransformComponent = "SceneComponent'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.Default__BP_InGamePlayerController_C:TransformComponent0'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.Default__BP_InGamePlayerController_C:TransformComponent0'";
    class UBP_IRRMessageComponent_C* BP_IRRMessageComponent;
    class UBP_IRRMinimapComponent_C* BP_IRRMinimapComponent;
    class UBP_IRRMissionComponent_C* BP_IRRMissionComponent;
    class UBP_InteractionManager_C* BP_InteractionManager;
    bool ReadyToStartMatch;
    class APawn* CurrentViewTarget;
    class APawn* PawnRef;
    TArray<struct FContainerItem*>* InitialItems;
    TArray<class UIRRMissionData*> StartTrackedMissions;
    class UW_DebugSimpleAbilitySystem_C* DebugSImpleAbilitySystem;
    int Old Level;
    float Old XP;

};