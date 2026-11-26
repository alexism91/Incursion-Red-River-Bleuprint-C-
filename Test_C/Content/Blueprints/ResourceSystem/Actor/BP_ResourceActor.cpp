class ABP_ResourceActor_C : public AActor
{
public:
    int32 NumReplicatedProperties = 2;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/ResourceSystem/Actor/BP_ResourceActor.BP_ResourceActor_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/ResourceSystem/Actor/BP_ResourceActor.BP_ResourceActor_C:ExecuteUbergraph_BP_ResourceActor'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRBriefingVariants Resource Collected Briefing = {
        "FirstTimeVariants": {},
        "bPlayEachFirstTimeVariant": true,
        "Variants": {
            {
                "Text": {},
                "BriefingAudioEvent": "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/VO/ContextHandler/Resource/VO_ContextHandler_Resource_General_01.VO_ContextHandler_Resource_General_01'",
                "Priority": 0,
                "bCanSkip": true,
                "bInterruptedByDanger": true,
                "Subtitles": {
                    FText("Resource noted, retrieval planned")
                }
            },
            {
                "Text": {},
                "BriefingAudioEvent": "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/VO/ContextHandler/Resource/VO_ContextHandler_Resource_General_02.VO_ContextHandler_Resource_General_02'",
                "Priority": 0,
                "bCanSkip": true,
                "bInterruptedByDanger": true,
                "Subtitles": {
                    FText("Found a resource? Check.")
                }
            }
        },
        "PickMode": EIRRBriefingPickMode::Random,
        "MemoryKey": FName("None")
    };
    double Random Spawn Chance = 1;
    struct FGameplayTag Resource Tag = {
        "TagName": FName("None")
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bNetLoadOnClient = false;
    bool bReplicates = true;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UStaticMeshComponent* StaticMesh;
    class UWidgetComponent* Widget;
    int Amount;
    bool Collected?;

};