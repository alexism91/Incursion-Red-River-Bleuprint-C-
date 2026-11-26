class ABP_ResourceActor_Food_C : public ABP_ResourceActor_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/Resources/BP_ResourceActor_Food.BP_ResourceActor_Food_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/Resources/BP_ResourceActor_Food.BP_ResourceActor_Food_C:InheritableComponentHandler'";
    struct FIRRBriefingVariants Resource Collected Briefing = {
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
            },
            {
                "Text": {},
                "BriefingAudioEvent": "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/VO/ContextHandler/Resource/VO_ContextHandler_Resource_Food_01.VO_ContextHandler_Resource_Food_01'",
                "Priority": 0,
                "bCanSkip": true,
                "bInterruptedByDanger": true,
                "Subtitles": {
                    FText("Food has been marked")
                }
            },
            {
                "Text": {},
                "BriefingAudioEvent": "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/VO/ContextHandler/Resource/VO_ContextHandler_Resource_Food_02.VO_ContextHandler_Resource_Food_02'",
                "Priority": 0,
                "bCanSkip": true,
                "bInterruptedByDanger": true,
                "Subtitles": {
                    FText("Food? Check")
                }
            },
            {
                "Text": {},
                "BriefingAudioEvent": "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/VO/ContextHandler/Resource/VO_ContextHandler_Resource_Food_03.VO_ContextHandler_Resource_Food_03'",
                "Priority": 0,
                "bCanSkip": true,
                "bInterruptedByDanger": true,
                "Subtitles": {
                    FText("Yeah, noted resource of Food")
                }
            }
        }
    };
    double Random Spawn Chance = 0.4;
    struct FGameplayTag Resource Tag = {
        "TagName": FName("Resource.Food")
    };
    int32 Amount = 700;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};