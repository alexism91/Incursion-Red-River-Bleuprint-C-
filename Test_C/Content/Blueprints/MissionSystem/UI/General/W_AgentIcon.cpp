class UW_AgentIcon_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_AgentIcon.W_AgentIcon_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_AgentIcon.W_AgentIcon_C:ExecuteUbergraph_W_AgentIcon'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("In Width Override"), FGuid(0xB7223348, 0x4F504C46, 0x41533084, 0xF0DA26C8) }, 
        { FName("In Height Override"), FGuid(0x971D3B43, 0x421E5956, 0xE285DBB8, 0x4EB06CCB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float In Height Override = 300;
    float In Width Override = 300;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* MissionIconBox;
    class UImage* AgentImage;

};