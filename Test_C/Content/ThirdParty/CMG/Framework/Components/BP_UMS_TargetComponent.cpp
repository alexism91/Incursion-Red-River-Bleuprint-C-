class UBP_UMS_TargetComponent_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 1;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/Components/BP_UMS_TargetComponent.BP_UMS_TargetComponent_C:ExecuteUbergraph_BP_UMS_TargetComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_PermanentTargetInfo TargetInfo = {
        "TargetName_9_28B9BAA54ED519581DD3D38295496345": FText(""),
        "TargetType_29_EA59151345C0520AF6E5C5B1FD169603": E_TargetType::NewEnumerator0,
        "SelfReference_13_300FBCDE4129A81D1E2F34ADB865C9B1": nullptr,
        "InteractionSettings_28_7B6125754B231AB3FCB1FFA288C691B2": {
            "InteractionText_2_41B011174B73D78C895D92BE9A4E48D5": FText(""),
            "InteractionTime_5_06E9357A47683B0B56619C84075C8315": 0,
            "InteractionMontage_11_E700E656460E72D029BCD7B34D5C5517": nullptr,
            "MoveTo?_13_2D4863A8456D59A592E7799009B8097C": false
        }
    };
     TargetDead = ;
    struct FS_MissionTrigger MissionTriggerSettings = {
        "Type_10_3E0263CC4FC6D285B0D215A46DE073BE": E_MissionTriggerType::NewEnumerator0,
        "Mission_6_FA86BDFD495E29E7866739BEC19B2C68": {
            "DataTable": nullptr,
            "RowName": FName("None")
        },
        "Global?_9_ECA4252349E5D8E8AA9F70B0490427F4": false
    };
     InteractionStart = ;
     InteractionEnd = ;
    class ACharacter* Interacting Player;

};