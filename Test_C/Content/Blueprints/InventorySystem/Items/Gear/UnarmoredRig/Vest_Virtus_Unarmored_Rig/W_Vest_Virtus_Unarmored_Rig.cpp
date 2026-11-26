class UW_Vest_Virtus_Unarmored_Rig_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/Vest_Virtus_Unarmored_Rig/W_Vest_Virtus_Unarmored_Rig.W_Vest_Virtus_Unarmored_Rig_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/Vest_Virtus_Unarmored_Rig/W_Vest_Virtus_Unarmored_Rig.W_Vest_Virtus_Unarmored_Rig_C:ExecuteUbergraph_W_Vest_Virtus_Unarmored_Rig'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mag1"), FGuid(0x6C2A9DD2, 0xFCCE3AAC, 0xA33E6D12, 0x1E19CC42) }, 
        { FName("Mag1_1"), FGuid(0xB2CA21DF, 0x9389398A, 0x93C8E679, 0xAD566FC7) }, 
        { FName("Mag1_2"), FGuid(0xC32D6D94, 0x36B9359A, 0x95AE62CB, 0xE6716174) }, 
        { FName("Mag1_3"), FGuid(0x551BD226, 0x4F983680, 0x8FBCE0FC, 0xCBD164E1) }, 
        { FName("Mag1_4"), FGuid(0x3F942967, 0x72B13603, 0x95EE5DFE, 0xF6AA5065) }, 
        { FName("Mag2"), FGuid(0x2FA9B902, 0x57193D52, 0x9440C78C, 0xBF5707E8) }, 
        { FName("Mag2_1"), FGuid(0x0D33672B, 0xB1AE3CA9, 0xA0484948, 0xA9B16C39) }, 
        { FName("Mag2_2"), FGuid(0xB6474A38, 0xE5A63FC6, 0xB967EC88, 0xDB246556) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Mag2_2;
    class UW_SpatialContainer_C* Mag2_1;
    class UW_SpatialContainer_C* Mag2;
    class UW_SpatialContainer_C* Mag1_4;
    class UW_SpatialContainer_C* Mag1_3;
    class UW_SpatialContainer_C* Mag1_2;
    class UW_SpatialContainer_C* Mag1_1;
    class UW_SpatialContainer_C* Mag1;

};