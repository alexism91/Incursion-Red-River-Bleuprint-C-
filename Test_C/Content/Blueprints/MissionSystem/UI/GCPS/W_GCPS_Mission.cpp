class UW_GCPS_Mission_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_Mission.W_GCPS_Mission_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_Mission.W_GCPS_Mission_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_Mission.W_GCPS_Mission_C:ExecuteUbergraph_W_GCPS_Mission'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnClosed"), FGuid(0xFF9D6299, 0x43B2DA52, 0x670CAFB2, 0xDC397B12) }, 
        { FName("Mission Data"), FGuid(0x73BAF2EF, 0x4D04CC45, 0xFE8819AA, 0xBB9883CC) }, 
        { FName("W_IRR_Background"), FGuid(0xFA7C4B8B, 0xD6EE3D87, 0xA6F3E64E, 0x5160F0AC) }, 
        { FName("W_IRR_Button_Small"), FGuid(0x3C23F0CE, 0x675F31A5, 0xA3AEB75A, 0xED5BF053) }, 
        { FName("W_MissionInfo"), FGuid(0xDA3F4FBC, 0x6F493D2E, 0xA11A3FBD, 0xCB7D31AE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnClosed = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_MissionInfo_C* W_MissionInfo;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRMissionData* Mission Data;

};