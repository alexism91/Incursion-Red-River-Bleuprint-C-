class USG_MissionComponent_C : public USaveGame
{
public:
    FString SaveSlotName = "None";
    TArray<struct FStruct_SavedQuest> SavedQuests;
    TArray<struct FStruct_QuestMaster> PendingQuests;
    TArray<struct FStruct_QuestMaster> ActiveQuests;
    TArray<struct FStruct_QuestMaster> CompletedQuests;
    TArray<struct FStruct_ActiveQuestGiver> ActiveQuestGivers;
    TArray<FName> ConditionTags;
    FName LastActiveQuest;
    bool QuestWasActive;
    bool NewGame;
    bool SaveProgress;
    class UManager_Quest_C* QuestManager;

};