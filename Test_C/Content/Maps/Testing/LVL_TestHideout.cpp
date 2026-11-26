class ALVL_TestHideout_C : public ALevelScriptActor
{
public:
    TArray<class UInputKeyDelegateBinding*> DynamicBindingObjects = {
        "InputKeyDelegateBinding'Test_C/Content/Maps/Testing/LVL_TestHideout.LVL_TestHideout_C:InputKeyDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Maps/Testing/LVL_TestHideout.LVL_TestHideout_C:ExecuteUbergraph_LVL_TestHideout'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    TSubclassOf<AActor> Level;

};