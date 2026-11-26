class ABP_BaseAIController_C : public AIRRAIBaseController
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.BP_BaseAIController_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.BP_BaseAIController_C:ExecuteUbergraph_BP_BaseAIController'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UHTN* HTNAsset = "HTN'Test_C/Content/Blueprints/AI/HTN/HTN_Base.HTN_Base'";
    class UHTNComponent* HTNComponent = "HTNComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:HTNComponent'";
    class UIRRAITargetTracker* TargetTrackerComponent = "IRRAITargetTracker'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:TargetTracker'";
    class UIRRAIGroupComponent* GroupComponent = "IRRAIGroupComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:GroupComponent'";
    class UIRRAIBehaviorComponent* BehaviorComponent = "IRRAIBehaviorComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:BehaviorComponent'";
    class UIRRAIWeaponManager* WeaponManager = "IRRAIWeaponManager'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:WeaponManager'";
    class UIRRAIReloadComponent* ReloadComponent = "IRRAIReloadComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:ReloadComponent'";
    class UIRRAIWeaponSelector* WeaponSelector = "IRRAIWeaponSelector'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:WeaponSelector'";
    class UIRRAIGrenadeThrowComponent* GrenadeThrowComponent = "IRRAIGrenadeThrowComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:GrenadeThrowComponent'";
    class UIRRAIBarkController* BarkController = "IRRAIBarkController'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:BarkController'";
    class UIRRAIAimComponent* AimComponent = "IRRAIAimComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:AimComponent'";
    class UIRRAIBossComponent* BossComponent = "IRRAIBossComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:BossComponent'";
    class UIRRAISearchComponent* SearchComponent = "IRRAISearchComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:AISearchComponent'";
    class UIRRAICoverComponent* AICoverComponent = "IRRAICoverComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:AICoverComponent'";
    class UIRRStatEffectComponent* StatEffectComponent = "IRRStatEffectComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:StatEffectComponent'";
    class UIRRMoraleComponent* MoraleComponent = "IRRMoraleComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:MoraleComponent'";
    class UIRRAIStanceComponent* StanceComponent = "IRRAIStanceComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:StanceComponent'";
    class UIRRAIHealthStateManager* HealthStateManager = "IRRAIHealthStateManager'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:HealthStateManager'";
    class UIRRAIFocusComponent* FocusComponent = "IRRAIFocusComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:FocusComponent'";
    class UIRRPathFollowingComponent* PathFollowingComponent = "IRRPathFollowingComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:PathFollowingComponent'";
    class UHTNComponent* BrainComponent = "HTNComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:HTNComponent'";
    class USceneComponent* TransformComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:TransformComponent0'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController.Default__BP_BaseAIController_C:TransformComponent0'";
    E_AI_Behaviour Behaviour;

};