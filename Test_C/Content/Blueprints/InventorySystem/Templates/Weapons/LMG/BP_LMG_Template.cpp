class ABP_LMG_Template_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.BP_LMG_Template_C:ComponentDelegateBinding_0'"
    };
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.BP_LMG_Template_C:NODE_AddStaticMeshComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.BP_LMG_Template_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.BP_LMG_Template_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.BP_LMG_Template_C:ExecuteUbergraph_BP_LMG_Template'";
    TMap<FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData = {
        { FName("NODE_AddStaticMeshComponent-0"), {
            "ChangedPropertyList": {
                {
                    "PropertyName": FName("BodyInstance"),
                    "ArrayIndex": 0,
                    "PropertyScope": "Class'/Script/Engine.StaticMeshComponent'"
                },
                {
                    "PropertyName": FName("ObjectType"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.BodyInstance'"
                },
                {
                    "PropertyName": FName("CollisionEnabled"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.BodyInstance'"
                },
                {
                    "PropertyName": FName("CollisionProfileName"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.BodyInstance'"
                },
                {
                    "PropertyName": FName("CollisionResponses"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.BodyInstance'"
                },
                {
                    "PropertyName": FName("ResponseArray"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.CollisionResponse'"
                },
                {
                    "PropertyName": FName("ResponseArray"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.CollisionResponse'"
                },
                {
                    "PropertyName": FName("Channel"),
                    "ArrayIndex": 0,
                    "PropertyScope": "ScriptStruct'/Script/Engine.ResponseChannel'"
                },
                {
                    "PropertyName": FName("None"),
                    "ArrayIndex": 1,
                    "PropertyScope": "ScriptStruct'/Script/Engine.CollisionResponse'"
                },
                {
                    "PropertyName": FName("bUseAttachParentBound"),
                    "ArrayIndex": 0,
                    "PropertyScope": "Class'/Script/Engine.StaticMeshComponent'"
                }
            },
            "bHasValidCookedData": true
        } }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 MagDepth = 12;
    FString BulletPrefix = "b";
    struct FTransform BulletTransform = {
        "Rotation": FQuat(-0, 0,70710677, 0, 0,70710677),
        "Translation": FVector(-0,023444, 0, 0),
        "Scale3D": FVector(0,01, 0,01, 0,01)
    };
    int32 BoneDepth = 23;
    bool IsMagInstalled = true;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.Default__BP_LMG_Template_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/LMG/BP_LMG_Template.Default__BP_LMG_Template_C:PickupComponent'";
    class UBP_MuzzleComponent_Barrel_C* BP_MuzzleComponent_Barrel;
    class UBP_SightComponent_C* BP_SightComponent;
    TArray<class UStaticMeshComponent*>* BulletMeshes;

};