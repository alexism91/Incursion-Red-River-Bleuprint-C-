class UWB_EmailList_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailList.WB_EmailList_C:WidgetTree'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("QuestsInList"), FGuid(0x97A1EEB8, 0x4659407E, 0x7495D8A5, 0x3A08EC68) }, 
        { FName("Quest_Select_Received"), FGuid(0x19FA8CC2, 0x47FCE3E9, 0x2F851281, 0x5B0FA858) }
    };
     Quest_Select_Received = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleEmail_C* WB_SingleEmail_3;
    class UWB_SingleEmail_C* WB_SingleEmail_2;
    class UWB_SingleEmail_C* WB_SingleEmail_1;
    class UWB_SingleEmail_C* WB_SingleEmail;
    class UVerticalBox* QuestList;
    TArray<class UWB_SingleEmail_C*>* QuestsInList;

};