class UW_IRR_Gunsmith_Content_Modify_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_Modify.W_IRR_Gunsmith_Content_Modify_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_Modify.W_IRR_Gunsmith_Content_Modify_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_Modify.W_IRR_Gunsmith_Content_Modify_C:ExecuteUbergraph_W_IRR_Gunsmith_Content_Modify'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnAttachmentSlotFilterUpdated"), FGuid(0x6E694FA0, 0x42D99A4B, 0x1FEC2AB2, 0x54455387) }, 
        { FName("Loaded?"), FGuid(0xFFCD825A, 0x4DE83598, 0x49B2D39B, 0xE9F6F1FB) }, 
        { FName("OnBack"), FGuid(0xDB731664, 0x4DD96C1A, 0xB6EDF48D, 0xC976D311) }, 
        { FName("PrevPreset"), FGuid(0x2F82DD5B, 0x4DDFE60B, 0x92F88CA3, 0x10F704AC) }, 
        { FName("BackFromPreset?"), FGuid(0xF24EDBB9, 0x4F3F3797, 0xB759D8BB, 0x5BF0B75A) }, 
        { FName("HasPresetChanged?"), FGuid(0x8C4C0526, 0x454BF106, 0x0162D181, 0x5A67426A) }, 
        { FName("PresetLoaded?"), FGuid(0xA94B3027, 0x4AB25701, 0xC44911A0, 0x2C5D1E11) }, 
        { FName("SavePresetPopUpRef"), FGuid(0xBBBF40E7, 0x44B71F47, 0xEA9E3FB7, 0x31ADFD7A) }, 
        { FName("PresetRef"), FGuid(0x3E460AAB, 0x4625D4B7, 0x0CC116B0, 0x9542E4AA) }, 
        { FName("WeaponToLoad"), FGuid(0x1C16DBB7, 0x48DD2972, 0xA68227A2, 0x17E3212E) }, 
        { FName("WeaponCategoryTag"), FGuid(0x55F7E979, 0x479EC1A7, 0xF29A178D, 0x4FFB8B55) }, 
        { FName("ContentIndex"), FGuid(0x8F192806, 0x45DD2C81, 0x71FEEA87, 0xEA53465E) }, 
        { FName("Vendor?"), FGuid(0x649D5405, 0x4199052B, 0x2B07C5A1, 0x9142B9DE) }, 
        { FName("GunsmithWidgetRef"), FGuid(0x0981627C, 0x444E87C9, 0x7544F2B9, 0x4834DECF) }, 
        { FName("To Buy Items"), FGuid(0x5A20EBBA, 0x4B1F9D4B, 0x8ECD0EAD, 0xFBD05F3C) }, 
        { FName("Gunsmith Attachment Slot Ref"), FGuid(0x35D9C182, 0x477B73C3, 0x2600EF83, 0xBCC1A026) }, 
        { FName("GunsmithRef"), FGuid(0xCFBD2399, 0x40734A40, 0x94809CBA, 0xF7046EA6) }, 
        { FName("InfoRef"), FGuid(0xDC86F07B, 0x4D6F6158, 0xED2BD2BC, 0xDED02790) }, 
        { FName("Assemble"), FGuid(0x6A38DE59, 0x9C943DC9, 0xA457751D, 0xFD9B374B) }, 
        { FName("AttachmentFilter_Functional"), FGuid(0x6C03228B, 0x6B9D33F1, 0xBE1E94C0, 0x3B6490B6) }, 
        { FName("AttachmentFilter_Gear"), FGuid(0xA58B436E, 0x97E2354E, 0x87671E5A, 0x86EAD3BB) }, 
        { FName("AttachmentFilter_Vital"), FGuid(0xE7CE157A, 0x5CCE361E, 0x8AF398E6, 0xDCE61D80) }, 
        { FName("Delete"), FGuid(0x80B8DA3E, 0x448A3220, 0xE0D196BB, 0x67AF8267) }, 
        { FName("Export"), FGuid(0x4109832A, 0x46F76DA6, 0xB8A582BB, 0x14AA4A68) }, 
        { FName("Import"), FGuid(0x89364760, 0x49D1AEDC, 0x09E0C79D, 0x19D7F8DD) }, 
        { FName("OverviewSwitcher"), FGuid(0x043984F3, 0x4BF63E9E, 0xBBF60F92, 0xE5287C2F) }, 
        { FName("PresetFilterTab"), FGuid(0xC0B39F54, 0x96A132CA, 0xA300676C, 0xD688AD3D) }, 
        { FName("PresetsInfoBox"), FGuid(0xEC9B2154, 0x520836AF, 0x86CE764C, 0xDD488295) }, 
        { FName("Save"), FGuid(0x22B6F687, 0xCFB33E66, 0xA4CF58EE, 0xD7435985) }, 
        { FName("W_IRR_Line"), FGuid(0xC70F42E7, 0x46747E80, 0x55644A96, 0xAE76E8C7) }, 
        { FName("WeaponOverviewTab"), FGuid(0x9358E27D, 0x7EEC34B9, 0xBC0BA719, 0xC3D83112) }
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
    bool Loaded? = true;
     OnAttachmentSlotFilterUpdated = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HorizontalTabList_C* WeaponOverviewTab;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Button_Small_C* Save;
    class UOverlay* PresetsInfoBox;
    class UW_IRR_Gunsmith_Filter_Presets_C* PresetFilterTab;
    class UWidgetSwitcher* OverviewSwitcher;
    class UW_IRR_Button_Small_C* Import;
    class UW_IRR_Button_Small_C* Export;
    class UW_IRR_BaseButton_C* Delete;
    class UW_IRR_TabButton_Medium_C* AttachmentFilter_Vital;
    class UW_IRR_TabButton_Medium_C* AttachmentFilter_Gear;
    class UW_IRR_TabButton_Medium_C* AttachmentFilter_Functional;
    class UW_IRR_BaseButton_C* Assemble;
    class UW_IRR_Gunsmith_ItemInfo_C* InfoRef;
    class ABP_Gunsmith_C* GunsmithRef;
    TArray<struct FIRRVendorStockItem> To Buy Items;
    class UW_IRR_Gunsmith_C* GunsmithWidgetRef;
    int ContentIndex;
    class UW_IRR_Gunsmith_ItemInfo_C* PresetRef;
    class UW_IRR_Gunsmith_SavePreset_C* SavePresetPopUpRef;
    bool PresetLoaded?;
    bool HasPresetChanged?;
    bool BackFromPreset?;

};