class UManager_QuestTarget_C : public UActorComponent
{
public:
     On_Manager_Constructed = ;
     On_QuestTarget_Interacted = ;
     On_QuestTarget_Begin_Overlap = ;
     On_QuestTarget_End_Overlap = ;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    class ABP_QuestManager_C* QuestManager;
    TArray<class UBoxComponent*>* InteractionBoxes;
    bool IsInteractable;
    FName TargetName;
    class UWB_Interaction_Widget_C* InteractionWidget;
    class UWidgetComponent* InteractionWidgetComponent;
    bool IsQuestGiver;
    TArray<struct FStruct_TargetInteraction> InteractionZones;

};