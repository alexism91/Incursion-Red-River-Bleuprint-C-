class UHTNService_Monstera_Stealth_C : public UHTNService_BlueprintBase
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/HTN/Service/HTNService_Monstera_Stealth.HTNService_Monstera_Stealth_C:ExecuteUbergraph_HTNService_Monstera_Stealth'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double In Range A = 50;
    double In Range B = 200;
    double Out Range A = 0.33;
    double Out Range B = 1;
    struct FGameplayTag Walk Tag = {
        "TagName": FName("Character.Abilities.Active.Sneaking")
    };
    struct FGameplayTag Crouch Tag = {
        "TagName": FName("Character.Abilities.Active.Crouching")
    };
    struct FVector ProjExtent = FVector(25, 25, 150);
    class UBlueprintGeneratedClass* FilterClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/AI/Navigation/NavQueryFilter_Foliage_Exclusive.NavQueryFilter_Foliage_Exclusive_C'";
    double BushDistToWalk = 350;
    double BushDistToCrouch = 500;
    struct FGameplayTagContainer Sprint Tags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Is Running"))
    });
    double BushDistToSprint = 1000;
    float TickInterval = 0.2;
    class UIRRAIFoliageTracker* FoliageComp;
    class UAdvancedMovementComponent* Advanced Movement Component;

};