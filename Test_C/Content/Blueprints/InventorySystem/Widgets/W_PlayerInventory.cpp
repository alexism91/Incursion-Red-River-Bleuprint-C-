class UW_PlayerInventory_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_PlayerInventory.W_PlayerInventory_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_PlayerInventory.W_PlayerInventory_C:ExecuteUbergraph_W_PlayerInventory'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Loot Widget Ref"), FGuid(0x2810F1F4, 0x4C3AC15D, 0xF2AC2EA1, 0x468477A7) }, 
        { FName("Stash?"), FGuid(0x4B47C1FE, 0x4D2B615F, 0x1DD1EA98, 0x721A91FE) }, 
        { FName("Loot Actor Ref"), FGuid(0xAD87A5D6, 0x41F90679, 0x101D1180, 0x7D2462DF) }, 
        { FName("SectionContainers"), FGuid(0xF4EF0C11, 0x428344AA, 0x85E8728D, 0xB06DCE4F) }, 
        { FName("SectionHeaders"), FGuid(0x54833ED7, 0x49079411, 0xD6872CA2, 0x56E6FF1B) }, 
        { FName("ContainerElements"), FGuid(0x6A0C4B63, 0x45A4B08B, 0xFA95EB9E, 0x81593F82) }, 
        { FName("BackpackBox"), FGuid(0x5B95D654, 0xFDDB3A81, 0xA304B8B0, 0xE4BACAF8) }, 
        { FName("BackpackContainer"), FGuid(0x82599E94, 0xB9EC39B7, 0xBFBAC79C, 0xD6F509AB) }, 
        { FName("BackpackSection"), FGuid(0xB743AD1B, 0xC45833E0, 0x9D89D46D, 0xAB8BA47C) }, 
        { FName("BackpackSlot"), FGuid(0x08BFE2DB, 0x1FCD3E93, 0x957D31DC, 0x3904E4C5) }, 
        { FName("GCPSSlot"), FGuid(0xB64FFDDF, 0x5D6A365D, 0xAFB8B795, 0x2C80953F) }, 
        { FName("GearSectionHeader"), FGuid(0xBB9B22A1, 0x9EB235BC, 0xAB9AB585, 0xA45D7F3F) }, 
        { FName("Health"), FGuid(0x6E8D3362, 0x118E30FC, 0xB4145E64, 0x69C239EC) }, 
        { FName("HelmetSlot"), FGuid(0xB07C7315, 0x02393460, 0x886B8B28, 0x595A0D37) }, 
        { FName("HolsterSlot"), FGuid(0xBD4867C5, 0x0D833056, 0xB3F6531E, 0xEFD7638C) }, 
        { FName("InventorySectionHeader"), FGuid(0x43134F25, 0xA9BC3189, 0x9F087522, 0x12243D7C) }, 
        { FName("LootBox"), FGuid(0x7795DE3E, 0x53243A37, 0x97061A30, 0xF97FA4DD) }, 
        { FName("MeleeSlot"), FGuid(0x568147CE, 0x564B39F8, 0xB47DF1A6, 0xE9B000F0) }, 
        { FName("PlateSlot"), FGuid(0x8592B17A, 0x71983238, 0x933B75A6, 0x3BA50E05) }, 
        { FName("Pockets"), FGuid(0x9F820E19, 0x201E3348, 0xA5B388B9, 0xCD109953) }, 
        { FName("PrimarySlot"), FGuid(0xEE2B14FD, 0x1A6A33A4, 0x988F80C3, 0x39D87520) }, 
        { FName("SecondarySlot"), FGuid(0x9BC80F3D, 0xE27A3D14, 0xB8938E52, 0xDCA51752) }, 
        { FName("SpecialEquipment"), FGuid(0x74A2E59A, 0x4B4C8199, 0x32130EA5, 0x062924FE) }, 
        { FName("TacRigContainer"), FGuid(0x21A7CAF0, 0xBBD130EA, 0x9E681F55, 0x993D52E0) }, 
        { FName("TactcialRigSlot"), FGuid(0xC3048B77, 0x549B3F52, 0x80BF4F1E, 0x14AB51EC) }, 
        { FName("TacticalRigBox"), FGuid(0x5CEA87B0, 0xFAE23978, 0xB38C62B5, 0xCA6CB001) }, 
        { FName("TacticalRigSection"), FGuid(0x6FEFC4DB, 0x81383EDB, 0xAD33B8C7, 0xB683B49C) }, 
        { FName("VicinityContainer"), FGuid(0x4211F6CC, 0xBB773049, 0x93EBC399, 0x7EBA43CC) }, 
        { FName("W_HealthBar"), FGuid(0x4E93063E, 0x80BE3EF6, 0xBE015509, 0xC4D144CA) }, 
        { FName("W_InventoryHeadline"), FGuid(0x9CC375DC, 0xDCB0337D, 0x9930DDB5, 0x9715186E) }, 
        { FName("W_IRR_Background"), FGuid(0xF84285C9, 0x8BB33693, 0xB1249BF9, 0xE8C57554) }, 
        { FName("W_IRR_Background_1"), FGuid(0x07D56ECC, 0xB94D3A83, 0xB376C3F2, 0xAB1E5065) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x361B539B, 0x2CAD3C0D, 0x8E196EFD, 0x53A3128D) }, 
        { FName("W_IRR_BaseIcon_2"), FGuid(0x5A6B2A8C, 0x23483D05, 0xA2959093, 0x0DF1CBFC) }, 
        { FName("W_IRR_Line"), FGuid(0xA03E56D2, 0x176C349E, 0xB9D9DE90, 0x97FEDB77) }, 
        { FName("W_IRR_Line_1"), FGuid(0x9D77F173, 0x71513FFB, 0x819434EE, 0xB183F42D) }, 
        { FName("W_QuickSlotBar"), FGuid(0x5FFCD5CB, 0x4A3F3BDF, 0x8AB3E300, 0x11BC61F0) }, 
        { FName("WeaponsContainer"), FGuid(0xE003C2F2, 0x42483BC3, 0x8A2F23FE, 0x2E2D2BF3) }, 
        { FName("WeaponsSection"), FGuid(0x0CD37B19, 0x18B03564, 0xBE3D65B0, 0x81EF225A) }, 
        { FName("Weight"), FGuid(0xB98E3177, 0x927B3B60, 0x82D02506, 0x4C7375F0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Weight;
    class UW_InventorySection_C* WeaponsSection;
    class UVerticalBox* WeaponsContainer;
    class UW_QuickSlotBar_C* W_QuickSlotBar;
    class UW_IRR_Line_C* W_IRR_Line_1;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon_2;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventoryHeadline_C* W_InventoryHeadline;
    class UW_GeneralStatBar_C* W_HealthBar;
    class UBorder* VicinityContainer;
    class UW_InventorySection_C* TacticalRigSection;
    class UVerticalBox* TacticalRigBox;
    class UW_EquipToContainer_C* TactcialRigSlot;
    class UHorizontalBox* TacRigContainer;
    class UW_EquipToContainer_C* SpecialEquipment;
    class UW_EquipToContainer_C* SecondarySlot;
    class UW_EquipToContainer_C* PrimarySlot;
    class UW_SpatialContainer_C* Pockets;
    class UW_EquipToContainer_C* PlateSlot;
    class UW_EquipToContainer_C* MeleeSlot;
    class UOverlay* LootBox;
    class UW_InventorySection_C* InventorySectionHeader;
    class UW_EquipToContainer_C* HolsterSlot;
    class UW_EquipToContainer_C* HelmetSlot;
    class UIRRTextBlock* Health;
    class UW_InventorySection_C* GearSectionHeader;
    class UW_EquipToContainer_C* GCPSSlot;
    class UW_EquipToContainer_C* BackpackSlot;
    class UW_InventorySection_C* BackpackSection;
    class UHorizontalBox* BackpackContainer;
    class UVerticalBox* BackpackBox;
    TArray<class UContainerElementWidget*>* ContainerElements;
    TArray<class UW_InventorySection_C*>* SectionHeaders;
    TArray<class UWidget*>* SectionContainers;
    class AActor* Loot Actor Ref;
    bool Stash?;
    class UUserWidget* Loot Widget Ref;

};