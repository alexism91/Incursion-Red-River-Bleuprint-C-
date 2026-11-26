class UW_NotifyMessage_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_NotifyMessage.W_NotifyMessage_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_NotifyMessage.W_NotifyMessage_C:Start_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_NotifyMessage.W_NotifyMessage_C:End_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_NotifyMessage.W_NotifyMessage_C:ExecuteUbergraph_W_NotifyMessage'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NotifyMessage"), FGuid(0x7A76AE5A, 0x449AB356, 0xADFFBABB, 0xB6199B3A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_NotifyMessage NotifyMessage = {
        "NofityMessage_5_657D6799458447A64C0ADC9381470B2C": FText(""),
        "NotifyLength_8_8F1F5B89414BBCE7DB0E8885FDB48444": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class URichTextBlock* RichTextBlock_65;
    class UImage* Image_99;
    class UWidgetAnimation* Start;
    class UWidgetAnimation* End;

};