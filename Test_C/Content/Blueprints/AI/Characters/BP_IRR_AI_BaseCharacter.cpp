class ABP_IRR_AI_BaseCharacter_C : public AIRRAIBaseCharacter
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.BP_IRR_AI_BaseCharacter_C:ComponentDelegateBinding_0'"
    };
    TArray<struct FBPComponentClassOverride> ComponentClassOverrides = {
        {
            "ComponentName": FName("CharacterMesh0"),
            "ComponentClass": "Class'/Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted'"
        }
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.BP_IRR_AI_BaseCharacter_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.BP_IRR_AI_BaseCharacter_C:ExecuteUbergraph_BP_IRR_AI_BaseCharacter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     InventoryClosed = ;
    TMap<enum E_AI_Behaviour, struct FS_IRR_AI_Loadouts> LoadoutsByBehaviour = {
        { E_AI_Behaviour::NewEnumerator2, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/UICS/DA_Inventory_AI_Sniper_UICS.DA_Inventory_AI_Sniper_UICS'" }
            }
        } }, 
        { E_AI_Behaviour::NewEnumerator1, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/UICS/DA_Inventory_AI_Guard_UICS.DA_Inventory_AI_Guard_UICS'" }
            }
        } }, 
        { E_AI_Behaviour::NewEnumerator0, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/UICS/DA_Inventory_AI_Patrol_UICS_A.DA_Inventory_AI_Patrol_UICS_A'" }
            }
        } }
    };
    class UAkAudioEvent* Looting Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Player/Player_Footsteps/Player_Open_DeadBody.Player_Open_DeadBody'";
    TMap<enum SurfaceType27, double> MaterialToLoudnessMap = {
        { SurfaceType1, 0.9 }, 
        { SurfaceType2, 0.9 }, 
        { SurfaceType3, 1 }, 
        { SurfaceType4, 0.65 }, 
        { SurfaceType5, 0.65 }, 
        { SurfaceType6, 0.6 }, 
        { SurfaceType7, 0.9 }, 
        { SurfaceType8, 1 }, 
        { SurfaceType9, 0.9 }, 
        { SurfaceType11, 0.8 }, 
        { SurfaceType12, 0.75 }, 
        { SurfaceType13, 0.9 }, 
        { SurfaceType14, 0.75 }, 
        { SurfaceType15, 0.85 }, 
        { SurfaceType16, 0.9 }, 
        { SurfaceType17, 0.65 }, 
        { SurfaceType18, 0.9 }, 
        { SurfaceType19, 0.65 }, 
        { SurfaceType20, 1 }, 
        { SurfaceType21, 0.65 }, 
        { SurfaceType22, 0.9 }, 
        { SurfaceType23, 1 }, 
        { SurfaceType25, 1 }, 
        { SurfaceType26, 1 }, 
        { SurfaceType27, 0.9 }
    };
    class UAIOptimizationComponent* AIOptimizationComponent = "AIOptimizationComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:OptimizationComponent'";
    class UIRRLightSenseComponent* LightSenseComponent = "IRRLightSenseComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:LightSenseComponent'";
    class UIRRLightMemoryComponent* LightMemoryComponent = "IRRLightMemoryComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:LightMemoryComponent'";
    class UIRRHeadlampComponent* HeadlampComponent = "IRRHeadlampComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:Headlamp Component'";
    class UIRRSuppressionReceiver* SuppressionReceiverComponent = "IRRSuppressionReceiver'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:Suppression Receiver Component'";
    class UIRRTeamComponent* TeamComponent = "IRRTeamComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:TeamComponent'";
    class UIRRAIDataComponent* AIDataComponent = "IRRAIDataComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:AIData Component'";
    class UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent = "IRRZoneEffectTrackerComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:Zone Effect Tracker Component'";
    class UIRRHealthCosmeticsComponent* HealthCosmeticsComponent = "IRRHealthCosmeticsComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:Health Cosmetics Component'";
    class USenseStimulusComponent* SenseStimulus = "SenseStimulusComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:Sense Stimulus Comp'";
    class UIRRSightSenseReceiver* SenseReceiver = "IRRSightSenseReceiver'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:SenseReceiver'";
    struct FGameplayTag Faction = {
        "TagName": FName("Mission.Faction.BLUEFOR")
    };
    class USkeletalMeshComponentBudgeted* Mesh = "SkeletalMeshComponentBudgeted'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:CharacterMesh0'";
    class UIRRAIMovementComponent* CharacterMovement = "IRRAIMovementComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:CollisionCylinder'";
    bool bUseControllerRotationYaw = false;
    class UBlueprintGeneratedClass* AIControllerClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.BP_BaseAIController_C'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = false;
    bool bNetLoadOnClient = false;
    float NetCullDistanceSquared = 450000000;
    float NetUpdateFrequency = 40;
    float MinNetUpdateFrequency = 5;
    float NetPriority = 4;
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/BP_IRR_AI_BaseCharacter.Default__BP_IRR_AI_BaseCharacter_C:CollisionCylinder'";
    TArray<FName> Tags = {
        FName("AI")
    };
    class UIRROutfitComponent* IRROutfit;
    class UAdvancedAkComponent* AdvancedAk;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class ULeanComponent* Lean;
    class UArrowComponent* ActorRotation;
    class UArrowComponent* AimRotation;
    class UArrowComponent* ControlRotation;
    class UBP_RadioComponent_C* BP_RadioComponent;
    class UBP_RagdollComponent_C* BP_RagdollComponent;
    class UWidgetComponent* Marker;
    class UMotionWarpingComponent* MotionWarping;
    class UBP_HealthComponent_C* BP_HealthComponent;
    class UUPSPatrolComponent* UPSPatrol;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_GameplayAbilityComponent_C* BP_GameplayAbilityComponent;
    class UBP_MontageComponent_C* BP_MontageComponent;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UBP_EquipmentComponent_C* BP_EquipmentComponent;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class UAGR_SoundMaster* AGR_SoundMaster;
    class UAGRAnimMasterComponent* AGRAnimMaster;
    FString OnDeathPayload;
    TArray<FName> Names;

};