class ABP_IRR_AI_BaseCharacter_Boss_Торговец_C : public ABP_IRR_AI_BaseCharacter_Boss_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.BP_IRR_AI_BaseCharacter_Boss_Торговец_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.BP_IRR_AI_BaseCharacter_Boss_Торговец_C:InheritableComponentHandler'";
    FString OnDeathPayload = "Торговец";
    TArray<FName> Names = {
        FName("VLF BOSS")
    };
    class UAIOptimizationComponent* AIOptimizationComponent = "AIOptimizationComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:OptimizationComponent'";
    class UIRRLightSenseComponent* LightSenseComponent = "IRRLightSenseComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:LightSenseComponent'";
    class UIRRLightMemoryComponent* LightMemoryComponent = "IRRLightMemoryComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:LightMemoryComponent'";
    class UIRRHeadlampComponent* HeadlampComponent = "IRRHeadlampComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:Headlamp Component'";
    class UIRRSuppressionReceiver* SuppressionReceiverComponent = "IRRSuppressionReceiver'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:Suppression Receiver Component'";
    class UIRRTeamComponent* TeamComponent = "IRRTeamComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:TeamComponent'";
    class UIRRAIDataComponent* AIDataComponent = "IRRAIDataComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:AIData Component'";
    class UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent = "IRRZoneEffectTrackerComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:Zone Effect Tracker Component'";
    class UIRRHealthCosmeticsComponent* HealthCosmeticsComponent = "IRRHealthCosmeticsComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:Health Cosmetics Component'";
    class USenseStimulusComponent* SenseStimulus = "SenseStimulusComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:Sense Stimulus Comp'";
    class UIRRSightSenseReceiver* SenseReceiver = "IRRSightSenseReceiver'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:SenseReceiver'";
    struct FGameplayTag Faction = {
        "TagName": FName("Mission.Faction.OPFOR")
    };
    class USkeletalMeshComponentBudgeted* Mesh = "SkeletalMeshComponentBudgeted'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:CharacterMesh0'";
    class UIRRAIMovementComponent* CharacterMovement = "IRRAIMovementComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Торговец.Default__BP_IRR_AI_BaseCharacter_Boss_Торговец_C:CollisionCylinder'";
};