class UBP_AdvancedLightComponent_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 1;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/General/Components/BP_AdvancedLightComponent.BP_AdvancedLightComponent_C:ExecuteUbergraph_BP_AdvancedLightComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Enabled? = true;
    bool CanBeDestroyed? = true;
    int32 EndTime = 19;
    int32 StartTime = 7;
    double DestroyRadius = 20;
     OnLightDestroyed = ;
    FName EmissiveParam = FName("Emissive_Brightness");
    bool bInit = true;
    class UAkAudioEvent* Destroy Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Lights/lightbulb_break_small.lightbulb_break_small'";
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    TArray<class ULightComponent*>* Lights;
    TArray<class UStaticMeshComponent*>* StaticMeshes;
    bool IsTimed?;
    TArray<class ULightComponent*>* LocLights;
    class UAkAudioEvent* DestroySound;

};