class UBP_RadioComponent_C : public UIRRRadioComponent
{
public:
    float LocalRadioGateTime = 30;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
};