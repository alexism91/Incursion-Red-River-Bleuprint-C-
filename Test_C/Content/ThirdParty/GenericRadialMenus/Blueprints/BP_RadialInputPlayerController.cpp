class ABP_RadialInputPlayerController_C : public APlayerController
{
public:
    TArray<class UInputAxisKeyDelegateBinding*> DynamicBindingObjects = {
        "InputAxisKeyDelegateBinding'Test_C/Content/ThirdParty/GenericRadialMenus/Blueprints/BP_RadialInputPlayerController.BP_RadialInputPlayerController_C:InputAxisKeyDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/GenericRadialMenus/Blueprints/BP_RadialInputPlayerController.BP_RadialInputPlayerController_C:SimpleConstructionScript_0'";
    struct FVector2D JoystickLookInput = FVector2D(0, 0);
    class USceneComponent* TransformComponent = "SceneComponent'Test_C/Content/ThirdParty/GenericRadialMenus/Blueprints/BP_RadialInputPlayerController.Default__BP_RadialInputPlayerController_C:TransformComponent0'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/ThirdParty/GenericRadialMenus/Blueprints/BP_RadialInputPlayerController.Default__BP_RadialInputPlayerController_C:TransformComponent0'";
    bool bUsingJoystick;

};