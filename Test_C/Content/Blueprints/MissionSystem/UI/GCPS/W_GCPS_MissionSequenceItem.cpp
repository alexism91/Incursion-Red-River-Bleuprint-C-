class UW_GCPS_MissionSequenceItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionSequenceItem.W_GCPS_MissionSequenceItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionSequenceItem.W_GCPS_MissionSequenceItem_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionSequenceItem.W_GCPS_MissionSequenceItem_C:ExecuteUbergraph_W_GCPS_MissionSequenceItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Index"), FGuid(0x77446F9C, 0x46872A5E, 0x414A0EBA, 0xA1A459D2) }, 
        { FName("Extended?"), FGuid(0x95F1F45C, 0x43849CA0, 0xF4517698, 0x14A3DF31) }, 
        { FName("Sequence"), FGuid(0x5D022E7B, 0x4EB349DB, 0xC7FC8AAB, 0x3563E1CC) }, 
        { FName("Mission Data"), FGuid(0xD302D1B2, 0x4F6074BE, 0x758CA396, 0xBE7C12D7) }, 
        { FName("BackgroundBorder"), FGuid(0x63C4EE1B, 0x4A9D5592, 0xD59151A4, 0x487558E5) }, 
        { FName("Border"), FGuid(0xBA8230A4, 0x870E37FD, 0xA90EFCBD, 0xFBC390DE) }, 
        { FName("ObjectivesBox"), FGuid(0xC56C0316, 0xC1643654, 0x80FCC482, 0xE1AE7AA7) }, 
        { FName("SequenceHeadline"), FGuid(0x0B2FA7FE, 0x8B8A381E, 0x92545F6F, 0x061DAAA3) }, 
        { FName("SequenceNumber"), FGuid(0x318A4C70, 0x40EF8B89, 0x5FF8B0A4, 0xEE312A7F) }, 
        { FName("W_IRR_BaseButton"), FGuid(0x701A02E4, 0x48EF80FF, 0x3C4D17A7, 0xFFB6A88D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseButton_C* W_IRR_BaseButton;
    class UIRRTextBlock* SequenceNumber;
    class UIRRTextBlock* SequenceHeadline;
    class UVerticalBox* ObjectivesBox;
    class UBorder* Border;
    class UBorder* BackgroundBorder;
    class UIRRMissionData* Mission Data;
    class UIRRMissionSequence* Sequence;
    bool Extended?;
    int Index;

};