class UW_MissionObjectiveItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionObjectiveItem.W_MissionObjectiveItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionObjectiveItem.W_MissionObjectiveItem_C:ExecuteUbergraph_W_MissionObjectiveItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("As IRRObjective Action Widget"), FGuid(0x0BBEE056, 0x484D472F, 0xBE2C9E9E, 0x0BE8AB15) }, 
        { FName("Last?"), FGuid(0x0140A933, 0x4C21D6B4, 0x338AF8AE, 0x117C46E7) }, 
        { FName("Extended?"), FGuid(0x4F814680, 0x4AC39B98, 0xC4423493, 0x15709547) }, 
        { FName("Objective"), FGuid(0x4EC75FF6, 0x4DF2859A, 0xFE0FAD97, 0x57D20099) }, 
        { FName("MissionData"), FGuid(0x95BC1089, 0x465C3A91, 0xC86CEB93, 0xD62061ED) }, 
        { FName("BoolProgress"), FGuid(0x3F8ABA13, 0x213D36EE, 0x9DA31553, 0x93BD53FE) }, 
        { FName("BoolProgressSwitcher"), FGuid(0xCA483C9E, 0x98E733FC, 0x8E17A769, 0x37015421) }, 
        { FName("Completed"), FGuid(0x19E3C795, 0x4E6F68AA, 0x9377609C, 0xB61C531A) }, 
        { FName("Image"), FGuid(0x478B7948, 0x84E0351A, 0x81C1E5A9, 0x884037F8) }, 
        { FName("Image_253"), FGuid(0x8589A2DF, 0x39BA3FE4, 0xB13874A5, 0x59DA9092) }, 
        { FName("ObejctiveProgressBar"), FGuid(0xC2EA6743, 0x393F31BC, 0xA7ABE918, 0x5F56EF9A) }, 
        { FName("ObjectiveActionWidget"), FGuid(0x2BBF9E57, 0x0B9A3B6A, 0x88519420, 0xD3DDEBF6) }, 
        { FName("ObjectiveBorder"), FGuid(0x611FBDF5, 0x44B24C10, 0xE2B89A8C, 0x7BA17A14) }, 
        { FName("ObjectiveText"), FGuid(0xF29F0E1C, 0xF1813B00, 0x853161EC, 0x7A72845A) }, 
        { FName("ProgressBarContainer"), FGuid(0x652FC597, 0x51423DEE, 0x97E348B3, 0x5726488D) }, 
        { FName("ProgressBox"), FGuid(0x955F232B, 0x51963EBD, 0x8C0FC5F3, 0x279CFDD8) }, 
        { FName("SizeBox_7"), FGuid(0x8A8008C3, 0x4694050D, 0x2142B08B, 0x42644F27) }, 
        { FName("SwitcherCOmpleted"), FGuid(0xEB064E4D, 0x49EB56E2, 0x2457408B, 0xEE178B29) }, 
        { FName("W_IRR_HideoutUpgrade_MinMaxText"), FGuid(0xB1954C94, 0x47C9B533, 0x0095DB82, 0xA21DEA34) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_MinMaxText_C* W_IRR_HideoutUpgrade_MinMaxText;
    class UWidgetSwitcher* SwitcherCOmpleted;
    class USizeBox* SizeBox_7;
    class UHorizontalBox* ProgressBox;
    class USizeBox* ProgressBarContainer;
    class UIRRTextBlock* ObjectiveText;
    class UBorder* ObjectiveBorder;
    class UOverlay* ObjectiveActionWidget;
    class UProgressBar* ObejctiveProgressBar;
    class UImage* Image_253;
    class UImage* Image;
    class UIRRTextBlock* Completed;
    class UWidgetSwitcher* BoolProgressSwitcher;
    class USizeBox* BoolProgress;
    class UIRRMissionData* MissionData;
    class UIRRMissionObjective* Objective;
    bool Extended?;
    bool Last?;
    class UIRRObjectiveActionWidget* As IRRObjective Action Widget;

};