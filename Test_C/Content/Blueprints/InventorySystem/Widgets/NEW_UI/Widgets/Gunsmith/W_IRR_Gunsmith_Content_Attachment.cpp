class UW_IRR_Gunsmith_Content_Attachment_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_Attachment.W_IRR_Gunsmith_Content_Attachment_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_Attachment.W_IRR_Gunsmith_Content_Attachment_C:ExecuteUbergraph_W_IRR_Gunsmith_Content_Attachment'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GunsmithWidgetRef"), FGuid(0x52C8ADFE, 0x48F25EDD, 0x469698AE, 0x2EF1605F) }, 
        { FName("OnBack"), FGuid(0x215DF401, 0x430EC11E, 0xC5B67D90, 0x9839F452) }, 
        { FName("PrevPreset"), FGuid(0x51BBF21B, 0x41A6CBF3, 0x350D60B6, 0x7F3EC65E) }, 
        { FName("BackFromPreset?"), FGuid(0x6DAAEB07, 0x41081C41, 0x3400E5B9, 0x5D358645) }, 
        { FName("HasPresetChanged?"), FGuid(0x66D74909, 0x444CF659, 0xAE20EDB9, 0x5EDE3046) }, 
        { FName("PresetLoaded?"), FGuid(0x76F36BDA, 0x4C550DE1, 0xF3764482, 0x0BA9EE5C) }, 
        { FName("SavePresetPopUpRef"), FGuid(0x3A18819E, 0x4123A13C, 0xC476FCA3, 0x17974111) }, 
        { FName("PresetRef"), FGuid(0x3213FE20, 0x4EB6CE2F, 0x3325B6BD, 0xBCFBD5FC) }, 
        { FName("WeaponToLoad"), FGuid(0x1802A308, 0x43C1C179, 0x72B2E68A, 0xC26E0CD7) }, 
        { FName("WeaponCategoryTag"), FGuid(0x4107E320, 0x47C5C38C, 0xCC517B93, 0x4DB9D329) }, 
        { FName("ContentIndex"), FGuid(0xBAEE0364, 0x44BB7373, 0xE5E291BD, 0xA9D5CB43) }, 
        { FName("Vendor?"), FGuid(0x9E480961, 0x4509D236, 0xEDD90B92, 0xF8A80978) }, 
        { FName("To Buy Items"), FGuid(0x918AE603, 0x4368D00C, 0xC44BFFAD, 0x3104154D) }, 
        { FName("Gunsmith Attachment Slot Ref"), FGuid(0x7845BD7A, 0x4CA21C0B, 0xFD0A0399, 0x19F84BA2) }, 
        { FName("GunsmithRef"), FGuid(0x6CAC5CD2, 0x4DF41E64, 0xD3F79084, 0x9447A24B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGunsmithAttachmentSlot Gunsmith Attachment Slot Ref = {
        "MainContainer": {
            "MainContainerUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
            "ContainerElements": {},
            "ContainerItems": {}
        },
        "ContainerIndex": 0,
        "LocalOffset": FVector2D(0, 0),
        "Start": FVector2D(0, 0),
        "End": FVector2D(0, 0),
        "LeaderEnd": FVector2D(0, 0),
        "bForeground": false,
        "bBelowWeapon": false
    };
    bool Vendor? = true;
    struct FGameplayTag WeaponCategoryTag = {
        "TagName": FName("Inventory.Items.Weapons.Rifle")
    };
    struct FContainerItem WeaponToLoad = {
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
    struct FDefaultItem PrevPreset = {
        "ItemType": EDefaultItemType::Preset,
        "ItemPreset": nullptr,
        "ItemDefinition": nullptr,
        "DefaultAttachments": {},
        "RandomAttachmentParameters": {
            "MinItemsToAdd": 3,
            "MaxItemsToAdd": 5,
            "MinValue": -1,
            "MaxValue": 3.4028235E+38,
            "ItemSpawnChances": {},
            "RarityChanceDrop": {},
            "bCanAddSameItem": true,
            "bForceMatchRarity": false,
            "bForceVitalParts": true,
            "SupportedFactions": FGameplayTagContainer({}),
            "AttachmentMinDepth": 1,
            "AttachmentMaxDepth": 2,
            "BackpackMinItems": 4,
            "BackpackMaxItems": 6,
            "BackpackItemSpawnChances": {},
            "ItemMaxDimensions": FVector2D(-1, -1),
            "ItemCountOverrides": {},
            "ItemSpawnOverrides": {}
        },
        "ItemSpawnOverrides": {},
        "Count": 1,
        "bKeepSwapSpaceFree": false,
        "CurrentStats": {}
    };
     OnBack = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* AttachmentInfoBox;
    class UW_IRR_Gunsmith_Filter_C* AttachmentFilterTab;
    class UW_IRR_HorizontalTabList_C* AttachmentCategoriesTab;
    class ABP_Gunsmith_C* GunsmithRef;
    TArray<struct FIRRVendorStockItem> To Buy Items;
    int ContentIndex;
    class UW_IRR_Gunsmith_ItemInfo_C* PresetRef;
    class UW_IRR_Gunsmith_SavePreset_C* SavePresetPopUpRef;
    bool PresetLoaded?;
    bool HasPresetChanged?;
    bool BackFromPreset?;
    class UW_IRR_Gunsmith_C* GunsmithWidgetRef;

};