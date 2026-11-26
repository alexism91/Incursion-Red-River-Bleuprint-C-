class ABP_IRRLevelManager_C : public AIRRLevelManager
{
public:
    int32 NumReplicatedProperties = 2;
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRLevelManager.BP_IRRLevelManager_C:OutOfBoundsAlpha_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRLevelManager.BP_IRRLevelManager_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRLevelManager.BP_IRRLevelManager_C:ExecuteUbergraph_BP_IRRLevelManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRDayTime RaidTime = {
        "Hours": 0,
        "Minutes": 15,
        "Seconds": 0
    };
    struct FIRRDayTime RemainingTime = {
        "Hours": 0,
        "Minutes": 0,
        "Seconds": 0
    };
     OnRaidTimerUpdated = ;
    float TimerStep = 1;
     OnOutOfBoundsUpdated = ;
    int32 Out Of Bounds Max Time = 10;
    class UWidgetBlueprintGeneratedClass* Out Of Bounds Widget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/UI/LeaveBounds/W_OutOfBounds.W_OutOfBounds_C'";
    struct FTimerHandle OutOfBoundsTimer = {
        "Handle": 0
    };
    TArray<class UBP_LootContext_Night_C*> StartupGlobalLootModifiers = {
        "BP_LootContext_Night_C'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRLevelManager.Default__BP_IRRLevelManager_C:BP_LootContext_Night_C_0'"
    };
    struct FAkOutdoorsRoomParameters OutdoorsRoomParameters = {
        "ReverbAuxBus": "AkAuxBus'Test_C/Content/WwiseAudio/Master-Mixer_Hierarchy/Default_Work_Unit/Master_Audio_Bus/_gameMix/_reverb/_reverb/rvb_Rooms/rvb_AmbiX/rvb_AmbiX_Exterior/rvb_AmbiX_Outdoors_Default.rvb_AmbiX_Outdoors_Default'",
        "AuxSendLevel": 1
    };
    class UAkAudioEvent* OutdoorsAmbience = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Ambience/Quarry/Quarry_Beds/Amb_Bed_Outdoors_Default_1OA.Amb_Bed_Outdoors_Default_1OA'";
    class UClass* RaidBriefingAbilityClass = "Class'/Script/Test_C.SimpleGameplayAbility_PlayMissionBriefing'";
    class USceneComponent* DefaultSceneRoot;
    class UTimelineComponent* OutOfBoundsAlpha;
    class ABP_IRRSpawnZone_C* SpawnZone;
    class UIRRMissionData* MissionData;
    TArray<class ABP_MissionSpawnPoint_C*> MissionObjectiveSpawns;
    bool AllLevelLoaded;
    bool Timed?;
    TArray<struct FS_IRROperationSpawnData> Operation Data [LEGACY];
    bool LevelManagerFinished;
    TArray<TSoftObjectPtr<ABP_SBBTV_SplineVolume_C>> Out Of Bounds Volumes;
    int Remaining Time;
    bool IsOutOfBounds?;
    class UUserWidget* OutOfBoundsWidgetRef;
    TArray<class AAdvancedAkAcousticPortal*> AllPortals;
    TArray<class ABP_ResourceActor_C*> Resources;
private:
    float OutOfBoundsAlpha_Alpha_286E4A574D22846A561461B2E9D55C7E;
    byte OutOfBoundsAlpha__Direction_286E4A574D22846A561461B2E9D55C7E;

};