class UW_IRR_Gunsmith_Content_WeaponList_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_WeaponList.W_IRR_Gunsmith_Content_WeaponList_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_WeaponList.W_IRR_Gunsmith_Content_WeaponList_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Content_WeaponList.W_IRR_Gunsmith_Content_WeaponList_C:ExecuteUbergraph_W_IRR_Gunsmith_Content_WeaponList'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GunsmithWidgetRef"), FGuid(0x615E1CF3, 0x4E20744C, 0xA1C65A93, 0xE24651B5) }, 
        { FName("OnBack"), FGuid(0xA8DE9CBF, 0x47B82C1E, 0xAAD726AF, 0xFEF7BB12) }, 
        { FName("PrevPreset"), FGuid(0xA977C708, 0x46A31D08, 0x758075BD, 0x3476CCB3) }, 
        { FName("BackFromPreset?"), FGuid(0x6F5E97AF, 0x4199B076, 0xFAB71E9A, 0x8B769EED) }, 
        { FName("HasPresetChanged?"), FGuid(0x96476654, 0x43D3FB60, 0x8E29C591, 0xFD57BAA0) }, 
        { FName("PresetLoaded?"), FGuid(0xDEB8BCD5, 0x4526581D, 0xBE3B1CA9, 0xEBF2F570) }, 
        { FName("SavePresetPopUpRef"), FGuid(0x10CF1CDA, 0x4B80C7FC, 0xEBA7F99F, 0x239AC68D) }, 
        { FName("PresetRef"), FGuid(0x3DED051D, 0x42246482, 0x6F2583AE, 0x14270BA8) }, 
        { FName("WeaponToLoad"), FGuid(0xBB3046FC, 0x4C863F33, 0xA22436BA, 0x026A6203) }, 
        { FName("WeaponCategoryTag"), FGuid(0x868D9CB5, 0x45CCD999, 0x187565BD, 0x50A8B1F7) }, 
        { FName("ContentIndex"), FGuid(0xAE03E15F, 0x497AAF35, 0x1ED728B5, 0xCDF4F74C) }, 
        { FName("Vendor?"), FGuid(0x9729635C, 0x4417C26D, 0x7FF436B2, 0x89D55BC7) }, 
        { FName("Weapon Ref"), FGuid(0x2CB0C5AA, 0x4373F98D, 0xB5BEE7BC, 0xBFD49D1C) }, 
        { FName("To Buy Items"), FGuid(0xFE5A283D, 0x4D7266C9, 0x5128AFBC, 0xE06D6212) }, 
        { FName("Gunsmith Attachment Slot Ref"), FGuid(0x3C8D56E3, 0x48411D00, 0x37A187A2, 0x8E880FFA) }, 
        { FName("GunsmithRef"), FGuid(0x46FCBDFC, 0x4DE391C0, 0x27F5A9A6, 0xEF01363E) }, 
        { FName("InfoRef"), FGuid(0x3275ABBD, 0x4D74C428, 0xF97A6995, 0x9E5640DE) }, 
        { FName("WeaponCategoriesTab"), FGuid(0xF1F64E56, 0x47ED3E53, 0x97369F88, 0x00E263E2) }, 
        { FName("WeaponFilterTab"), FGuid(0xD9F5CA04, 0x3CF436E1, 0x9D19FAD6, 0x9C202EE1) }, 
        { FName("WeaponsInfoBox"), FGuid(0x9D56BA98, 0xB66C3826, 0x89C0AD5C, 0x74F2C556) }
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
    class UOverlay* WeaponsInfoBox;
    class UW_IRR_Gunsmith_Filter_C* WeaponFilterTab;
    class UW_IRR_HorizontalTabList_C* WeaponCategoriesTab;
    class UW_IRR_Gunsmith_ItemInfo_C* InfoRef;
    class ABP_Gunsmith_C* GunsmithRef;
    TArray<struct FIRRVendorStockItem> To Buy Items;
    class UItemWidget* Weapon Ref;
    int ContentIndex;
    class UW_IRR_Gunsmith_ItemInfo_C* PresetRef;
    class UW_IRR_Gunsmith_SavePreset_C* SavePresetPopUpRef;
    bool PresetLoaded?;
    bool HasPresetChanged?;
    bool BackFromPreset?;
    class UW_IRR_Gunsmith_C* GunsmithWidgetRef;

};