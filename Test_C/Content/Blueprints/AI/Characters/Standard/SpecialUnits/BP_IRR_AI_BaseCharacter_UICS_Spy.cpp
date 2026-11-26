class ABP_IRR_AI_BaseCharacter_UICS_Spy_C : public ABP_IRR_AI_BaseCharacter_UICS_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.BP_IRR_AI_BaseCharacter_UICS_Spy_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.BP_IRR_AI_BaseCharacter_UICS_Spy_C:InheritableComponentHandler'";
    FString OnDeathPayload = "Spy";
    TArray<FName> Names = {
        FName("UICS Spy")
    };
    TMap<enum E_AI_Behaviour, struct FS_IRR_AI_Loadouts> LoadoutsByBehaviour = {
        { E_AI_Behaviour::NewEnumerator1, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/UICS/DA_Inventory_AI_Guard_UICS_Spy.DA_Inventory_AI_Guard_UICS_Spy'" }
            }
        } }
    };
    class UAIOptimizationComponent* AIOptimizationComponent = "AIOptimizationComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:OptimizationComponent'";
    class UIRRLightSenseComponent* LightSenseComponent = "IRRLightSenseComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:LightSenseComponent'";
    class UIRRLightMemoryComponent* LightMemoryComponent = "IRRLightMemoryComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:LightMemoryComponent'";
    class UIRRHeadlampComponent* HeadlampComponent = "IRRHeadlampComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:Headlamp Component'";
    class UIRRSuppressionReceiver* SuppressionReceiverComponent = "IRRSuppressionReceiver'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:Suppression Receiver Component'";
    class UIRRTeamComponent* TeamComponent = "IRRTeamComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:TeamComponent'";
    class UIRRAIDataComponent* AIDataComponent = "IRRAIDataComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:AIData Component'";
    class UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent = "IRRZoneEffectTrackerComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:Zone Effect Tracker Component'";
    class UIRRHealthCosmeticsComponent* HealthCosmeticsComponent = "IRRHealthCosmeticsComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:Health Cosmetics Component'";
    class USenseStimulusComponent* SenseStimulus = "SenseStimulusComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:Sense Stimulus Comp'";
    class UIRRSightSenseReceiver* SenseReceiver = "IRRSightSenseReceiver'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:SenseReceiver'";
    class USkeletalMeshComponentBudgeted* Mesh = "SkeletalMeshComponentBudgeted'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:CharacterMesh0'";
    class UIRRAIMovementComponent* CharacterMovement = "IRRAIMovementComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Standard/SpecialUnits/BP_IRR_AI_BaseCharacter_UICS_Spy.Default__BP_IRR_AI_BaseCharacter_UICS_Spy_C:CollisionCylinder'";
};