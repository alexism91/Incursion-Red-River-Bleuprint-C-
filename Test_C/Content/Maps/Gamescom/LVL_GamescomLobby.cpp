class ALVL_GamescomLobby_C : public ALevelScriptActor
{
public:
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    TSubclassOf<AActor> Level;
};