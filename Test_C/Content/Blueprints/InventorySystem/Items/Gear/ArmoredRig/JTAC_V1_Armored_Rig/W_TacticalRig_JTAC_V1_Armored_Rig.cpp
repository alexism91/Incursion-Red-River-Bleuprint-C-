class UW_TacticalRig_JTAC_V1_Armored_Rig_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/ArmoredRig/JTAC_V1_Armored_Rig/W_TacticalRig_JTAC_V1_Armored_Rig.W_TacticalRig_JTAC_V1_Armored_Rig_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/ArmoredRig/JTAC_V1_Armored_Rig/W_TacticalRig_JTAC_V1_Armored_Rig.W_TacticalRig_JTAC_V1_Armored_Rig_C:ExecuteUbergraph_W_TacticalRig_JTAC_V1_Armored_Rig'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mag1"), FGuid(0x5EB41E83, 0xFA0F3178, 0x8FBFCD5E, 0x254E99E8) }, 
        { FName("Mag2"), FGuid(0x236B93A3, 0xC7143907, 0x8C2464F4, 0x019798E0) }, 
        { FName("Mag3"), FGuid(0x3F132CCF, 0xC2623BB7, 0x993A66C0, 0xF22BF772) }, 
        { FName("Mag4"), FGuid(0x24BD1158, 0x9E77323E, 0x88C887F2, 0xF2063907) }, 
        { FName("Medicals"), FGuid(0x0EE9827C, 0x96A23210, 0x9F7CEC63, 0x792A8FA4) }, 
        { FName("W_InventoryHeadline"), FGuid(0xE3386EAA, 0x9BD636A0, 0xBA0E407C, 0xD45E300A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_InventoryHeadline_C* W_InventoryHeadline;
    class UW_SpatialContainer_C* Medicals;
    class UW_SpatialContainer_C* Mag4;
    class UW_SpatialContainer_C* Mag3;
    class UW_SpatialContainer_C* Mag2;
    class UW_SpatialContainer_C* Mag1;

};