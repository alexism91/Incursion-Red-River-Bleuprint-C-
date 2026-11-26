class ABP_Trader_A_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Characters/Body/Trader_A/BP_Trader_A.BP_Trader_A_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Characters/Body/Trader_A/BP_Trader_A.BP_Trader_A_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Characters/Body/Trader_A/BP_Trader_A.BP_Trader_A_C:ExecuteUbergraph_BP_Trader_A'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLiveLinkSubjectName LiveLinkSubject = {
        "Name": FName("None")
    };
    class ULODSyncComponent* LODSync;
    class UMetaHumanComponentUE* MetaHuman;
    class UGroomComponent* Beard;
    class UGroomComponent* Mustache;
    class UGroomComponent* Eyelashes;
    class UGroomComponent* Fuzz;
    class UGroomComponent* Eyebrows;
    class UGroomComponent* Hair;
    class USkeletalMeshComponent* Face;
    class USkeletalMeshComponent* Body;
    class USceneComponent* Root;
    bool UseLiveLink;
    bool UseARKit;

};