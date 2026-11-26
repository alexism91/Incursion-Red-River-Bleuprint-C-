class UW_MissionSequenceItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionSequenceItem.W_MissionSequenceItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_MissionSequenceItem.W_MissionSequenceItem_C:ExecuteUbergraph_W_MissionSequenceItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Index"), FGuid(0x663E33D5, 0x4469C08F, 0xB8AB5694, 0x936F5B1A) }, 
        { FName("Extended?"), FGuid(0xB947D4D3, 0x43195988, 0xC29B62B3, 0xC06D82DC) }, 
        { FName("Sequence"), FGuid(0xB87E3245, 0x44237ED3, 0x9A9C2398, 0x9A0E65A3) }, 
        { FName("Mission Data"), FGuid(0xF001F051, 0x470A0065, 0x5C6054B8, 0xAE39CFDC) }, 
        { FName("BackgroundBorder"), FGuid(0x63C4EE1B, 0x4A9D5592, 0xD59151A4, 0x487558E5) }, 
        { FName("Border"), FGuid(0xBA8230A4, 0x870E37FD, 0xA90EFCBD, 0xFBC390DE) }, 
        { FName("Completed"), FGuid(0x6DB0BC16, 0x4DAA89A0, 0x25D051A7, 0xECFAEFB3) }, 
        { FName("ObjectivesBox"), FGuid(0xC56C0316, 0xC1643654, 0x80FCC482, 0xE1AE7AA7) }, 
        { FName("ProgressSwitcher"), FGuid(0xA1A4DFC3, 0x510F3153, 0xB9C75C81, 0xD1EFAFD4) }, 
        { FName("SequenceHeadline"), FGuid(0x0B2FA7FE, 0x8B8A381E, 0x92545F6F, 0x061DAAA3) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* SequenceHeadline;
    class UWidgetSwitcher* ProgressSwitcher;
    class UVerticalBox* ObjectivesBox;
    class UIRRTextBlock* Completed;
    class UBorder* Border;
    class UBorder* BackgroundBorder;
    class UIRRMissionData* Mission Data;
    class UIRRMissionSequence* Sequence;
    bool Extended?;
    int Index;

};