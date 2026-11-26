class ABP_BaseAIController_Boss_C : public ABP_BaseAIController_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.BP_BaseAIController_Boss_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.BP_BaseAIController_Boss_C:InheritableComponentHandler'";
    enum E_AI_Behaviour Behaviour = E_AI_Behaviour::NewEnumerator2;
    class UHTNComponent* HTNComponent = "HTNComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:HTNComponent'";
    class UIRRAITargetTracker* TargetTrackerComponent = "IRRAITargetTracker'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:TargetTracker'";
    class UObject* GroupComponent = nullptr;
    class UIRRAIBehaviorComponent* BehaviorComponent = "IRRAIBehaviorComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:BehaviorComponent'";
    class UIRRAIWeaponManager* WeaponManager = "IRRAIWeaponManager'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:WeaponManager'";
    class UIRRAIReloadComponent* ReloadComponent = "IRRAIReloadComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:ReloadComponent'";
    class UIRRAIWeaponSelector* WeaponSelector = "IRRAIWeaponSelector'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:WeaponSelector'";
    class UIRRAIGrenadeThrowComponent* GrenadeThrowComponent = "IRRAIGrenadeThrowComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:GrenadeThrowComponent'";
    class UIRRAIBarkController* BarkController = "IRRAIBarkController'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:BarkController'";
    class UIRRAIAimComponent* AimComponent = "IRRAIAimComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:AimComponent'";
    class UIRRAIBossComponent* BossComponent = "IRRAIBossComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:BossComponent'";
    class UIRRAISearchComponent* SearchComponent = "IRRAISearchComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:SearchComponent'";
    class UIRRAICoverComponent* AICoverComponent = "IRRAICoverComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:AICoverComponent'";
    class UIRRStatEffectComponent* StatEffectComponent = "IRRStatEffectComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:StatEffectComponent'";
    class UIRRMoraleComponent* MoraleComponent = "IRRMoraleComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:MoraleComponent'";
    class UIRRAIStanceComponent* StanceComponent = "IRRAIStanceComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:StanceComponent'";
    class UIRRAIHealthStateManager* HealthStateManager = "IRRAIHealthStateManager'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:HealthStateManager'";
    class UIRRAIFocusComponent* FocusComponent = "IRRAIFocusComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:FocusComponent'";
    float ReactionTimeMultiplier = 2;
    class UIRRPathFollowingComponent* PathFollowingComponent = "IRRPathFollowingComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:PathFollowingComponent'";
    class UHTNComponent* BrainComponent = "HTNComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:HTNComponent'";
    class USceneComponent* TransformComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:TransformComponent0'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Controller/BP_BaseAIController_Boss.Default__BP_BaseAIController_Boss_C:TransformComponent0'";
};