class ABP_DeadBody_C : public ABP_LootContainer_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody.BP_DeadBody_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody.BP_DeadBody_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody.BP_DeadBody_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody.BP_DeadBody_C:ExecuteUbergraph_BP_DeadBody'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAnimSequence* Pose = "AnimSequence'Test_C/Content/Sequences/WaterBuffalo/AnimsForCinematic/Dead.Dead'";
    class UMaterial* DecalMaterial = "Material'Test_C/Content/ThirdParty/BallisticsVFX/Decals/Splashers/Decal_Blood_Splatter.Decal_Blood_Splatter'";
    class UIRRAppearanceSetup* Appearance Setup = "IRRAppearanceSetup'Test_C/Content/Blueprints/InventorySystem/Clothing/Data/AI/DA_IGC_Appearance.DA_IGC_Appearance'";
    class UAkAudioEvent* Opening Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Player/Player_Footsteps/Player_Open_DeadBody.Player_Open_DeadBody'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UIRROutfitComponent* IRROutfit;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class USkeletalMeshComponent* SkeletalMesh;
    class UAnimationAsset* New Anim to Play;

};