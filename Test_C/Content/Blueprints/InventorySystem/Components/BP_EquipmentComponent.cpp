class UBP_EquipmentComponent_C : public UEquipmentComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Components/BP_EquipmentComponent.BP_EquipmentComponent_C:ExecuteUbergraph_BP_EquipmentComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     UnEquipSlotCompleted = ;
     EquipSlotCompleted = ;
    struct FGameplayTag DefaultSlot = {
        "TagName": FName("Inventory.Equipment Slots.Melee")
    };
    TArray<struct FEquipmentSlot> EquipmentSlots = {
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Primary")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": true,
            "HingeCollisionMesh": "StaticMesh'Test_C/Content/ThirdParty/FPS_Assault_Pack/Meshes/Rifle/SM_Rifle.SM_Rifle'",
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": true,
                "Swing1Limit": 15,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": true,
                "TwistLimit": 5
            },
            "UnequippedSocketName": FName("RifleBack")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Secondary")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": true,
            "HingeCollisionMesh": "StaticMesh'Test_C/Content/ThirdParty/FPS_Assault_Pack/Meshes/Rifle/SM_Rifle.SM_Rifle'",
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": true,
                "Swing1Limit": 20,
                "Swing2Enabled": true,
                "Swing2Limit": 4,
                "TwistEnabled": true,
                "TwistLimit": 10
            },
            "UnequippedSocketName": FName("RifleFront")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Pistol")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": true,
            "HingeCollisionMesh": "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Misc/SM_PistolCollisionMesh.SM_PistolCollisionMesh'",
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": true,
                "Swing1Limit": 3,
                "Swing2Enabled": false,
                "Swing2Limit": 15,
                "TwistEnabled": true,
                "TwistLimit": 3
            },
            "UnequippedSocketName": FName("PistolHolder")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Rig")
            },
            "bUseMasterPose": true,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": nullptr,
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": false,
                "Swing1Limit": 0,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": false,
                "TwistLimit": 0
            },
            "UnequippedSocketName": FName("None")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Belt")
            },
            "bUseMasterPose": true,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": nullptr,
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": false,
                "Swing1Limit": 0,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": false,
                "TwistLimit": 0
            },
            "UnequippedSocketName": FName("None")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Backpack")
            },
            "bUseMasterPose": true,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": nullptr,
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": false,
                "Swing1Limit": 0,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": false,
                "TwistLimit": 0
            },
            "UnequippedSocketName": FName("None")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Helmet")
            },
            "bUseMasterPose": true,
            "bHideWhenUnequipped": false,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": nullptr,
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": false,
                "Swing1Limit": 0,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": false,
                "TwistLimit": 0
            },
            "UnequippedSocketName": FName("None")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.GCPS")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": true,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": "StaticMesh'Test_C/Content/ThirdParty/FPS_Assault_Pack/Meshes/Rifle/SM_Rifle.SM_Rifle'",
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": true,
                "Swing1Limit": 20,
                "Swing2Enabled": true,
                "Swing2Limit": 4,
                "TwistEnabled": true,
                "TwistLimit": 10
            },
            "UnequippedSocketName": FName("root")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Melee")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": true,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": "StaticMesh'Test_C/Content/ThirdParty/FPS_Assault_Pack/Meshes/Rifle/SM_Rifle.SM_Rifle'",
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": true,
                "Swing1Limit": 20,
                "Swing2Enabled": true,
                "Swing2Limit": 4,
                "TwistEnabled": true,
                "TwistLimit": 10
            },
            "UnequippedSocketName": FName("root")
        },
        {
            "Slot": {
                "TagName": FName("Inventory.Equipment Slots.Gadget")
            },
            "bUseMasterPose": false,
            "bHideWhenUnequipped": true,
            "bHideMesh": true,
            "bUseHinge": false,
            "HingeCollisionMesh": nullptr,
            "HingeSocket": nullptr,
            "HingeData": {
                "Swing1Enabled": false,
                "Swing1Limit": 0,
                "Swing2Enabled": false,
                "Swing2Limit": 0,
                "TwistEnabled": false,
                "TwistLimit": 0
            },
            "UnequippedSocketName": FName("None")
        }
    };
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": true
    };

};