class UBP_UMS_MissionComponent_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 3;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/Components/PlayerComponents/BP_UMS_MissionComponent.BP_UMS_MissionComponent_C:ExecuteUbergraph_BP_UMS_MissionComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     MissionFinished = ;
    struct FTimerHandle InteractionTimer = {
        "Handle": 0
    };
     ReceiveProgress = ;
    bool SquadLeader? = true;
    bool bReplicates = true;
    TArray<struct FS_Mission> Missions;
    TMap<FName, struct FS_MarkerCustomization> PermanentMarkers;
    class UW_Mission_C* MissionWidget;
    TArray<struct FS_PermanentTargetInfo> CurrentTargets;
    double MaxInteractDistance;
    class UW_Interact_C* InteractingWidget;
    class AActor* CurrentInteractableActor;
    class ACharacter* OwningCharacter;
    class UW_InGame_C* InGameWidget;

};