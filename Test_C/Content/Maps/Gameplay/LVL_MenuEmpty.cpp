class ALVL_MenuEmpty_C : public ALevelScriptActor
{
public:
    TArray<class UAudioComponent*> ComponentTemplates = {
        "AudioComponent'Test_C/Content/Maps/Gameplay/LVL_MenuEmpty.LVL_MenuEmpty_C:NODE_AddAudioComponent-0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Maps/Gameplay/LVL_MenuEmpty.LVL_MenuEmpty_C:ExecuteUbergraph_LVL_MenuEmpty'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};

};