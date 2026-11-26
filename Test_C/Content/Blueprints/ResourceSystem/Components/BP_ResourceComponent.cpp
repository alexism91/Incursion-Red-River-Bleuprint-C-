class UBP_ResourceComponent_C : public UIRRResourceComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/ResourceSystem/Components/BP_ResourceComponent.BP_ResourceComponent_C:ExecuteUbergraph_BP_ResourceComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TMap<struct FGameplayTag, int32> DefaultMaxAmounts = {
        { {
            "TagName": FName("Resource.Concrete")
        }, 2000 }, 
        { {
            "TagName": FName("Resource.Food")
        }, 2000 }, 
        { {
            "TagName": FName("Resource.Metal")
        }, 2000 }, 
        { {
            "TagName": FName("Resource.Oil")
        }, 2000 }
    };
    FSoftObjectPath Registry = FSoftObjectPath("/Game/Blueprints/ResourceSystem/Data/DA_Resource_Registry.DA_Resource_Registry");
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };

};