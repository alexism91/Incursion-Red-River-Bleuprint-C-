class UW_MissionSequenceContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionSequenceContainer.W_MissionSequenceContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionSequenceContainer.W_MissionSequenceContainer_C:ExecuteUbergraph_W_MissionSequenceContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mission Data"), FGuid(0x99D5FD0B, 0x441DED1E, 0x6C38B3B6, 0x75B9541A) }, 
        { FName("SequenceBox"), FGuid(0xEEC21D1B, 0xB63E36E5, 0xA8437183, 0x14DCB691) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* SequenceBox;
    class UIRRMissionData* Mission Data;

};