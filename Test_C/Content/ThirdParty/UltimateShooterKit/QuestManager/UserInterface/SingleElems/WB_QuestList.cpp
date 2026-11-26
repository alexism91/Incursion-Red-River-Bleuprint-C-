class UWB_QuestList_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestList.WB_QuestList_C:WidgetTree'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("QuestsInList"), FGuid(0x4F5FE45B, 0x4A5CE941, 0x7E4F5681, 0x79814A4A) }, 
        { FName("Quest_Select_Received"), FGuid(0x98740C13, 0x41CE7876, 0x15F4BBB3, 0x6D4BF781) }
    };
     Quest_Select_Received = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleQuest_C* WB_SingleQuest_3;
    class UWB_SingleQuest_C* WB_SingleQuest_2;
    class UWB_SingleQuest_C* WB_SingleQuest_1;
    class UWB_SingleQuest_C* WB_SingleQuest;
    class UVerticalBox* QuestList;
    TArray<class UWB_SingleQuest_C*>* QuestsInList;

};