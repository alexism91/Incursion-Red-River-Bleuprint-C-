class UW_Warrior_Assault_DCS_Armored_Rig_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/ArmoredRig/Warrior_Assault_DCS_Armored_Rig/W_Warrior_Assault_DCS_Armored_Rig.W_Warrior_Assault_DCS_Armored_Rig_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/ArmoredRig/Warrior_Assault_DCS_Armored_Rig/W_Warrior_Assault_DCS_Armored_Rig.W_Warrior_Assault_DCS_Armored_Rig_C:ExecuteUbergraph_W_Warrior_Assault_DCS_Armored_Rig'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NewVar"), FGuid(0x33013AF8, 0x4A179643, 0x2B7CB7AA, 0xC220875C) }, 
        { FName("Mag1"), FGuid(0xE7995021, 0xE9E7356D, 0xA9AC6A30, 0x17E4EE31) }, 
        { FName("Mag1_2"), FGuid(0xFF90B16F, 0x99C03638, 0x8CD8DECF, 0xA4E413A9) }, 
        { FName("Mag2"), FGuid(0x30D484A7, 0xDB8A3890, 0xAF956908, 0xCB92259D) }, 
        { FName("Mag2_2"), FGuid(0xD2419270, 0x79B23968, 0x873BECCD, 0x89B66ECB) }, 
        { FName("Mag3"), FGuid(0x3C590FAA, 0x688E3EFB, 0xB4650551, 0xD26557B8) }, 
        { FName("Mag3_2"), FGuid(0x260C2E00, 0xAEF23FE4, 0x88231226, 0x3988FD8C) }, 
        { FName("Mag4"), FGuid(0x2F6A8CA8, 0x78CA346B, 0xA9BA2317, 0xB54862C9) }, 
        { FName("Mag4_2"), FGuid(0xE26243A1, 0x18A838D4, 0x9EBCC232, 0xBF16588F) }, 
        { FName("Mag5"), FGuid(0xFE7C5D48, 0x58E4308A, 0xACB3C219, 0x5D965C6A) }, 
        { FName("Mag5_2"), FGuid(0xB7F1D81E, 0x761B3B1B, 0xB214AD3F, 0xF0C176E3) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Mag5_2;
    class UW_SpatialContainer_C* Mag5;
    class UW_SpatialContainer_C* Mag4_2;
    class UW_SpatialContainer_C* Mag4;
    class UW_SpatialContainer_C* Mag3_2;
    class UW_SpatialContainer_C* Mag3;
    class UW_SpatialContainer_C* Mag2_2;
    class UW_SpatialContainer_C* Mag2;
    class UW_SpatialContainer_C* Mag1_2;
    class UW_SpatialContainer_C* Mag1;
    TArray<class UItemWidget*>* NewVar;

};