class UW_CinematicCamera_HUD_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/CinematicCamera/W_CinematicCamera_HUD.W_CinematicCamera_HUD_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/CinematicCamera/W_CinematicCamera_HUD.W_CinematicCamera_HUD_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/CinematicCamera/W_CinematicCamera_HUD.W_CinematicCamera_HUD_C:ExecuteUbergraph_W_CinematicCamera_HUD'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CinematicCameraReference"), FGuid(0x67403BD7, 0x434C6264, 0x815C17A2, 0x4AD0CBE8) }, 
        { FName("CinematicCameraActor"), FGuid(0x65831964, 0x4CB0A799, 0x57AE1888, 0x9D2CD4AD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UtilityBar_C* W_UtilityBar;
    class UW_IRR_Background_C* W_IRR_Background;
    class UWB_SingleSettingBar_C* ShowAI;
    class UImage* Image_106;
    class UWB_SingleSettingBar_C* FOV;
    class UWB_SingleSettingBar_C* FlyStartStop;
    class UWB_SingleSettingBar_C* FlySpeed;
    class UWB_SingleSettingBar_C* FlySmoothing;
    class UOverlay* Content;
    class UVerticalBox* ButtonList;
    class ABP_CinematicCamera_C* CinematicCameraActor;
    class UCineCameraComponent* CinematicCameraReference;

};