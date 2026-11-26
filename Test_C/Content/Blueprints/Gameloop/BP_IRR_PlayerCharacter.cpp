class ABP_IRR_PlayerCharacter_C : public APlayerBaseCharacter
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "InputKeyDelegateBinding'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:InputKeyDelegateBinding_0'",
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:ComponentDelegateBinding_0'"
    };
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:SetHealthEffect_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:SmoothOutHealthEffect_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:Timeline_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:Timeline_0_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:BloodDropsFadeInOut_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:Timeline_1_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:Timeline_2_Template'"
    };
    TArray<struct FBPComponentClassOverride> ComponentClassOverrides = {
        {
            "ComponentName": FName("CharacterMesh0"),
            "ComponentClass": "Class'/Script/Engine.SkeletalMeshComponent'"
        }
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C:ExecuteUbergraph_BP_IRR_PlayerCharacter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     InventoryClosed = ;
    struct FVector LastRagdollVelocity = FVector(0, 0, 0);
    struct FRotator TargetRagdollRotation = FRotator(0, 0, 0);
    struct FVector TargetRagdollLocation = FVector(0, 0, 0);
    struct FTimerHandle RagdollTimer = {
        "Handle": 0
    };
    class UCurveFloat* DamageEffectCurve = "CurveFloat'Test_C/Content/Blueprints/General/Components/FC_DamageEffectCurve.FC_DamageEffectCurve'";
    int32 StepCounter = 4;
    float RTPC_BodyStamina = 100;
    float RTPC_ArmStamina = 100;
    float RTPC_HealthStamina = 100;
    FName SuppressionEffectName = FName("Suppresion Effect");
    float Suppression Inner Radius = 200;
    float Suppression Outer Radius = 1000;
    struct FGuid ID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
    class UIRRLightDetectionComponent* LightDetectionComponent = "IRRLightDetectionComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:Light Detection Component'";
    class UIRRSuppressionReceiver* SuppressionReceiverComponent = "IRRSuppressionReceiver'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:Suppression Receiver Component'";
    class UIRRTeamComponent* TeamComponent = "IRRTeamComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:TeamComponent'";
    class UIRRAIDataComponent* AIDataComponent = "IRRAIDataComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:AIData Component'";
    class UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent = "IRRZoneEffectTrackerComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:Zone Effect Tracker Component'";
    class UIRRHealthCosmeticsComponent* HealthCosmeticsComponent = "IRRHealthCosmeticsComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:Health Cosmetics Component'";
    class USenseStimulusComponent* SenseStimulus = "SenseStimulusComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:Sense Stimulus Comp'";
    struct FGameplayTag Faction = {
        "TagName": FName("Mission.Faction.FANG")
    };
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:CharacterMesh0'";
    class UIRRPlayerMovementComponent* CharacterMovement = "IRRPlayerMovementComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:CollisionCylinder'";
    bool bUseControllerRotationYaw = false;
    struct FActorTickFunction PrimaryActorTick = {
        "bTickEvenWhenPaused": true,
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicateUsingRegisteredSubObjectList = false;
    float MinNetUpdateFrequency = 20;
    float NetPriority = 20;
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.Default__BP_IRR_PlayerCharacter_C:CollisionCylinder'";
    TArray<FName> Tags = {
        FName("Player")
    };
    class UIRRPlayerOutfitComponent* IRRPlayerOutfit;
    class UAdvancedAkComponent* AdvancedAk_Player;
    class UBP_ResourceComponent_C* BP_ResourceComponent;
    class ULeanComponent* Lean;
    class UMotionWarpingComponent* MotionWarping;
    class UBP_TraversalSystemComponent_C* BP_TraversalSystemComponent;
    class USpringArmComponent* TP_SpringArm;
    class UStaticMeshComponent* Feet IK R Debug;
    class UStaticMeshComponent* Feet IK L Debug;
    class UCameraComponent* TP_Camera;
    class UStaticMeshComponent* InteractionMesh;
    class UBP_RagdollComponent_C* BP_RagdollComponent;
    class UWidgetComponent* Marker_Revive;
    class UWidgetComponent* Marker_Loot;
    class UBP_InteractionTarget_C* BP_InteractionTarget_Revive;
    class UIRRInRaidNameplateComponent* BP_InRaidPlayerWidgetComp;
    class UCameraComponent* TP_Camera_BodyCam;
    class USpringArmComponent* TP_SpringArm_BodyCam;
    class UCameraComponent* TP_Camera_Extra;
    class USpringArmComponent* TP_SpringArm_Extra;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent_Dead;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent_Alive;
    class UBP_InteractionTarget_C* BP_InteractionTarget_Loot;
    class UBP_HealthComponent_C* BP_HealthComponent;
    class UBP_FirstPersonCoreComponent_C* BP_FirstPersonCoreComponent;
    class UCameraComponent* FP_Camera;
    class USpringArmComponent* FP_SpringArm;
    class UBP_GameplayAbilityComponent_C* BP_GameplayAbilityComponent;
    class UNinjaInputManagerComponent* BP_InputManager;
    class UBP_MontageComponent_C* BP_MontageComponent;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UBP_EquipmentComponent_C* BP_EquipmentComponent;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class UAGR_SoundMaster* AGR_SoundMaster;
    class UAGRAnimMasterComponent* AGRAnimMaster;
    class UTimelineComponent* Timeline_2;
    class UTimelineComponent* Timeline_1;
    class UTimelineComponent* BloodDropsFadeInOut;
    class UTimelineComponent* Timeline_0;
    class UTimelineComponent* Timeline;
    class UTimelineComponent* SmoothOutHealthEffect;
    class UTimelineComponent* SetHealthEffect;
    TArray<class UCameraComponent*>* CameraArray;
    class UW_DebugSimpleAbilitySystem_C* DebugSImpleAbilitySystem;
    double SuppressionEffectMultiplier;
    bool IsRagdoll?;
    bool RagdollFaceUp;
    class UW_TutorialScreen_C* TutorialScreen;
    class USimpleGameplayEffect* DebugCharacterWoundEffect;
    bool bAutonomousTick;
    bool Landed?;
    bool InventoryInit?;
    bool SuppEffectActive;
    double LastSuppVal;
    double ShortSuppEffectAlpha;
    class USGE_Arm_Influence_C* AdrenalineEffect;
    float NewHealth;
private:
    float Timeline_2_NewTrack_0_A48C808F48501D896F075C977EA93AC9;
    byte Timeline_2__Direction_A48C808F48501D896F075C977EA93AC9;
    float Timeline_1_Alpha_4306BA914AA129E8FF6F50B7D56768DB;
    byte Timeline_1__Direction_4306BA914AA129E8FF6F50B7D56768DB;
    float BloodDropsFadeInOut_NewTrack_0_6C3843A143ABCEC62711939BC58AAD26;
    byte BloodDropsFadeInOut__Direction_6C3843A143ABCEC62711939BC58AAD26;
    float Timeline_0_Alpha_7E88F223417A99D92F64069284968739;
    byte Timeline_0__Direction_7E88F223417A99D92F64069284968739;
    float Timeline_NewTrack_1_38E9D77742F9F04856AAD5BDD22A31D8;
    float Timeline_NewTrack_0_38E9D77742F9F04856AAD5BDD22A31D8;
    byte Timeline__Direction_38E9D77742F9F04856AAD5BDD22A31D8;
    float SmoothOutHealthEffect_Alpha_D80626B74F4ECEB347A0BE93C4CAD83A;
    byte SmoothOutHealthEffect__Direction_D80626B74F4ECEB347A0BE93C4CAD83A;
    float SetHealthEffect_Alpha_9B62C7DF4EC54FF2725A72B528C9D474;
    byte SetHealthEffect__Direction_9B62C7DF4EC54FF2725A72B528C9D474;

};