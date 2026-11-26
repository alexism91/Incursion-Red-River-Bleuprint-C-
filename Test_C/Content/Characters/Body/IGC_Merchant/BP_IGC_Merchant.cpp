class ABP_IGC_Merchant_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Characters/Body/IGC_Merchant/BP_IGC_Merchant.BP_IGC_Merchant_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Characters/Body/IGC_Merchant/BP_IGC_Merchant.BP_IGC_Merchant_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Characters/Body/IGC_Merchant/BP_IGC_Merchant.BP_IGC_Merchant_C:ExecuteUbergraph_BP_IGC_Merchant'";
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