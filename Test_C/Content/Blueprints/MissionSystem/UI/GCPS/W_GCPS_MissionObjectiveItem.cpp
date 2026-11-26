class UW_GCPS_MissionObjectiveItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionObjectiveItem.W_GCPS_MissionObjectiveItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionObjectiveItem.W_GCPS_MissionObjectiveItem_C:ExecuteUbergraph_W_GCPS_MissionObjectiveItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("As IRRObjective Action Widget"), FGuid(0xA56A625A, 0x4842DF01, 0xC5CB42A1, 0xF80E6FF0) }, 
        { FName("Last?"), FGuid(0xC7B679A6, 0x4A853ECB, 0xBBBB89BF, 0xB9D79C63) }, 
        { FName("Extended?"), FGuid(0x7AF26D10, 0x4363BA70, 0x710AB6B8, 0xE3DEA1B3) }, 
        { FName("Objective"), FGuid(0x9294B278, 0x4BC1E25F, 0x0CC4C4B4, 0x39BCCC4B) }, 
        { FName("MissionData"), FGuid(0xC1B8CF68, 0x452B496F, 0xFE92ADAD, 0x1F24BC8A) }, 
        { FName("BoolProgress"), FGuid(0x3F8ABA13, 0x213D36EE, 0x9DA31553, 0x93BD53FE) }, 
        { FName("BoolProgressSwitcher"), FGuid(0xCA483C9E, 0x98E733FC, 0x8E17A769, 0x37015421) }, 
        { FName("Image"), FGuid(0x478B7948, 0x84E0351A, 0x81C1E5A9, 0x884037F8) }, 
        { FName("Image_253"), FGuid(0x8589A2DF, 0x39BA3FE4, 0xB13874A5, 0x59DA9092) }, 
        { FName("ObejctiveProgressBar"), FGuid(0xC2EA6743, 0x393F31BC, 0xA7ABE918, 0x5F56EF9A) }, 
        { FName("ObjectiveBorder"), FGuid(0x611FBDF5, 0x44B24C10, 0xE2B89A8C, 0x7BA17A14) }, 
        { FName("ObjectiveText"), FGuid(0xF29F0E1C, 0xF1813B00, 0x853161EC, 0x7A72845A) }, 
        { FName("ProgressBarContainer"), FGuid(0x652FC597, 0x51423DEE, 0x97E348B3, 0x5726488D) }, 
        { FName("ProgressBox"), FGuid(0x955F232B, 0x51963EBD, 0x8C0FC5F3, 0x279CFDD8) }, 
        { FName("SizeBox_7"), FGuid(0x8A8008C3, 0x4694050D, 0x2142B08B, 0x42644F27) }, 
        { FName("W_IRR_HideoutUpgrade_MinMaxText"), FGuid(0xB1954C94, 0x47C9B533, 0x0095DB82, 0xA21DEA34) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_MinMaxText_C* W_IRR_HideoutUpgrade_MinMaxText;
    class USizeBox* SizeBox_7;
    class UHorizontalBox* ProgressBox;
    class USizeBox* ProgressBarContainer;
    class UIRRTextBlock* ObjectiveText;
    class UBorder* ObjectiveBorder;
    class UProgressBar* ObejctiveProgressBar;
    class UImage* Image_253;
    class UImage* Image;
    class UWidgetSwitcher* BoolProgressSwitcher;
    class USizeBox* BoolProgress;
    class UIRRMissionData* MissionData;
    class UIRRMissionObjective* Objective;
    bool Extended?;
    bool Last?;
    class UIRRObjectiveActionWidget* As IRRObjective Action Widget;

};