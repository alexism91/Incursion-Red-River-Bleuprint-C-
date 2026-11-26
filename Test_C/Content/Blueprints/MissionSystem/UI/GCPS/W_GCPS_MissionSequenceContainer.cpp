class UW_GCPS_MissionSequenceContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionSequenceContainer.W_GCPS_MissionSequenceContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionSequenceContainer.W_GCPS_MissionSequenceContainer_C:ExecuteUbergraph_W_GCPS_MissionSequenceContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mission Data"), FGuid(0xBE1DCA85, 0x412839F5, 0x2210CF81, 0x4756904E) }, 
        { FName("SequenceBox"), FGuid(0xEEC21D1B, 0xB63E36E5, 0xA8437183, 0x14DCB691) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* SequenceBox;
    class UIRRMissionData* Mission Data;

};