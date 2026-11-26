class UW_IRR_RepairStation_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Repair/W_IRR_RepairStation.W_IRR_RepairStation_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Repair/W_IRR_RepairStation.W_IRR_RepairStation_C:ExecuteUbergraph_W_IRR_RepairStation'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RepairItem"), FGuid(0x2FF141EC, 0x41744A16, 0x275F0DB3, 0x200F1AF5) }, 
        { FName("ItemToLoad"), FGuid(0x82CC684B, 0x4D6AFBA1, 0x622D35A3, 0x8624768B) }, 
        { FName("RepairStation"), FGuid(0xEF2F7452, 0x4A14DABA, 0x76FF1986, 0xDA48D996) }, 
        { FName("Content"), FGuid(0x3D750CAF, 0x4E73DAF3, 0x1D5288A3, 0x442AB4B0) }, 
        { FName("Image_106"), FGuid(0xC83ED0A7, 0x46C00F8B, 0xCB4CE980, 0xD923E5D8) }, 
        { FName("Overlay_5"), FGuid(0x739DA4B0, 0x4D71A065, 0xBF855D8F, 0x561D93C9) }, 
        { FName("PartyContainer"), FGuid(0x3B1D84FA, 0x499BC47B, 0xDB8F5B98, 0x2FD4C132) }, 
        { FName("W_IRR_Background"), FGuid(0x0EA20E56, 0x435F67F9, 0xFEBCF6A6, 0x995C52F8) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x3633F9C7, 0x412126AB, 0x76BBD281, 0x015CAB38) }, 
        { FName("W_IRR_FANG_Header"), FGuid(0xFE15ADEE, 0x40556146, 0xBDC99D9B, 0xD6D360A1) }, 
        { FName("W_IRR_Headline"), FGuid(0x6F0B0318, 0x4DDD9083, 0xAC118F99, 0xC8D2D278) }, 
        { FName("W_IRR_PartyData"), FGuid(0x0B60E6B7, 0x41911DF3, 0x2DFC56AE, 0x7948EA54) }, 
        { FName("W_IRR_RepairStation_Overview"), FGuid(0xBECA85E8, 0x455163BB, 0x286D9089, 0xD7DA0321) }, 
        { FName("W_MissionFactionRelation"), FGuid(0xE7578A46, 0x4221919E, 0xA96BAF9B, 0x27324811) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0x10B6B51A, 0x495665CD, 0xCB0DA287, 0x6A338769) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0x367D1730, 0x4B547AA8, 0x0C34308C, 0x8BE6112E) }, 
        { FName("WeaponBar"), FGuid(0x0DB9FDCD, 0x488BAD5A, 0x466FE6AF, 0xB0BB1BF8) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem ItemToLoad = {
        "ItemInventoryComp": nullptr,
        "ItemDefinition": nullptr,
        "SoftItemDefinition": FSoftObjectPath(""),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MotherUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "ContainerIndex": -1,
        "SlotIndex": -1,
        "CurrentState": FGameplayTagContainer({}),
        "CurrentStats": {},
        "RequiredByItemUIDs": {},
        "ItemDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CanStack": false,
        "MaxStack": 1,
        "Count": 1,
        "bRotated": false,
        "bIsVitalPart": false,
        "bQuestItem": false,
        "bLoot": false,
        "bDiscovered": false
    };
    struct FContainerItem RepairItem = {
        "ItemInventoryComp": nullptr,
        "ItemDefinition": nullptr,
        "SoftItemDefinition": FSoftObjectPath(""),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MotherUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "ContainerIndex": -1,
        "SlotIndex": -1,
        "CurrentState": FGameplayTagContainer({}),
        "CurrentStats": {},
        "RequiredByItemUIDs": {},
        "ItemDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CanStack": false,
        "MaxStack": 1,
        "Count": 1,
        "bRotated": false,
        "bIsVitalPart": false,
        "bQuestItem": false,
        "bLoot": false,
        "bDiscovered": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UtilityBar_C* WeaponBar;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_RepairStation_Overview_C* W_IRR_RepairStation_Overview;
    class UW_IRR_PartyData_C* W_IRR_PartyData;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_FANG_Header_C* W_IRR_FANG_Header;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UOverlay* PartyContainer;
    class UOverlay* Overlay_5;
    class UImage* Image_106;
    class UOverlay* Content;
    class ABP_HideoutUnit_RepairStation_C* RepairStation;

};