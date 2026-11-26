class ABP_IRR_AI_BaseCharacter_VLF_NEW_C : public ABP_IRR_AI_BaseCharacter_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.BP_IRR_AI_BaseCharacter_VLF_NEW_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.BP_IRR_AI_BaseCharacter_VLF_NEW_C:InheritableComponentHandler'";
    TArray<FName> Names = {
        FName("VLF Mercenary")
    };
    TMap<enum E_AI_Behaviour, struct FS_IRR_AI_Loadouts> LoadoutsByBehaviour = {
        { E_AI_Behaviour::NewEnumerator2, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/VLF/DA_Inventory_AI_Sniper_VLF.DA_Inventory_AI_Sniper_VLF'" }
            }
        } }, 
        { E_AI_Behaviour::NewEnumerator1, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/VLF/DA_Inventory_AI_Guard_VLF.DA_Inventory_AI_Guard_VLF'" }
            }
        } }, 
        { E_AI_Behaviour::NewEnumerator0, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 1, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/VLF/DA_Inventory_AI_Patrol_VLF_A.DA_Inventory_AI_Patrol_VLF_A'" }, 
                { 0.2, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/VLF/DA_Inventory_AI_Patrol_VLF_B.DA_Inventory_AI_Patrol_VLF_B'" }
            }
        } }, 
        { E_AI_Behaviour::NewEnumerator3, {
            "LoadoutMap_8_C040894447F75E0C53DDEEAA65680674": {
                { 0, "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/AI/VLF/DA_Inventory_AI_Patrol_VLF_A.DA_Inventory_AI_Patrol_VLF_A'" }
            }
        } }
    };
    class UAIOptimizationComponent* AIOptimizationComponent = "AIOptimizationComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:OptimizationComponent'";
    class UIRRLightSenseComponent* LightSenseComponent = "IRRLightSenseComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:LightSenseComponent'";
    class UIRRLightMemoryComponent* LightMemoryComponent = "IRRLightMemoryComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:LightMemoryComponent'";
    class UIRRHeadlampComponent* HeadlampComponent = "IRRHeadlampComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:Headlamp Component'";
    class UIRRSuppressionReceiver* SuppressionReceiverComponent = "IRRSuppressionReceiver'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:Suppression Receiver Component'";
    class UIRRTeamComponent* TeamComponent = "IRRTeamComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:TeamComponent'";
    class UIRRAIDataComponent* AIDataComponent = "IRRAIDataComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:AIData Component'";
    class UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent = "IRRZoneEffectTrackerComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:Zone Effect Tracker Component'";
    class UIRRHealthCosmeticsComponent* HealthCosmeticsComponent = "IRRHealthCosmeticsComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:Health Cosmetics Component'";
    class USenseStimulusComponent* SenseStimulus = "SenseStimulusComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:Sense Stimulus Comp'";
    class UIRRSightSenseReceiver* SenseReceiver = "IRRSightSenseReceiver'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:SenseReceiver'";
    struct FGameplayTag Faction = {
        "TagName": FName("Mission.Faction.GREYFOR")
    };
    class USkeletalMeshComponentBudgeted* Mesh = "SkeletalMeshComponentBudgeted'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:CharacterMesh0'";
    class UIRRAIMovementComponent* CharacterMovement = "IRRAIMovementComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Characters/Standard/BP_IRR_AI_BaseCharacter_VLF_NEW.Default__BP_IRR_AI_BaseCharacter_VLF_NEW_C:CollisionCylinder'";
};