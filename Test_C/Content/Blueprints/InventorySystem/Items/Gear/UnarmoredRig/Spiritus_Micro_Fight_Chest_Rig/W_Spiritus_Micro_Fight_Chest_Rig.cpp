class UW_Spiritus_Micro_Fight_Chest_Rig_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/Spiritus_Micro_Fight_Chest_Rig/W_Spiritus_Micro_Fight_Chest_Rig.W_Spiritus_Micro_Fight_Chest_Rig_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/Spiritus_Micro_Fight_Chest_Rig/W_Spiritus_Micro_Fight_Chest_Rig.W_Spiritus_Micro_Fight_Chest_Rig_C:ExecuteUbergraph_W_Spiritus_Micro_Fight_Chest_Rig'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mag1"), FGuid(0x8AE96B15, 0x4D503C1D, 0xAFBE355F, 0x7DED387D) }, 
        { FName("Mag1_1"), FGuid(0x818AE832, 0xDC4A361D, 0x94FC5342, 0xF07E60FF) }, 
        { FName("Mag1_2"), FGuid(0xEBD4A185, 0x50C03D98, 0xBC842B6E, 0x67F5DF0C) }, 
        { FName("Mag2"), FGuid(0x744FDF60, 0xAA713A85, 0x8F2F62F2, 0xEB63DE3F) }, 
        { FName("Mag2_1"), FGuid(0xE97ACAF7, 0xE0483DE8, 0x89FD4E70, 0xDB5388B6) }, 
        { FName("Mag2_2"), FGuid(0xB476310C, 0x0B9D3C60, 0xADBE75F6, 0xB6D09491) }, 
        { FName("Mag2_3"), FGuid(0x67D27525, 0x5390394B, 0x8AD14033, 0x87D3DE0C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Mag2_3;
    class UW_SpatialContainer_C* Mag2_2;
    class UW_SpatialContainer_C* Mag2_1;
    class UW_SpatialContainer_C* Mag1_1;

};