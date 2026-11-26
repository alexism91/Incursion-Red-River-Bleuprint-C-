class UW_IRR_Gunsmith_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith.W_IRR_Gunsmith_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith.W_IRR_Gunsmith_C:FadeInOut_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith.W_IRR_Gunsmith_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith.W_IRR_Gunsmith_C:ExecuteUbergraph_W_IRR_Gunsmith'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Ability Tag"), FGuid(0x2BF5D3AB, 0x4AC40F50, 0x161DACBC, 0x0B23B01F) }, 
        { FName("HideUI?"), FGuid(0xBE0E6708, 0x49E53EB6, 0x935458B0, 0x310CF02C) }, 
        { FName("HideUI_Action"), FGuid(0xBEE555C0, 0x4E4416B0, 0x38064AA4, 0x080D60DE) }, 
        { FName("OnContentUpdated"), FGuid(0x4E21C3C7, 0x49A21E1F, 0xCD1629BE, 0x51F1F5D6) }, 
        { FName("PrevPreset"), FGuid(0x8EF82629, 0x44F482AA, 0xF82FF6BB, 0x4224AC73) }, 
        { FName("BackFromPreset?"), FGuid(0xE9993122, 0x4866EFA7, 0x0FA712B1, 0x826E4C9D) }, 
        { FName("HasPresetChanged?"), FGuid(0xE38852A0, 0x413E5DFB, 0x4A7E02A1, 0xF3554B20) }, 
        { FName("PresetLoaded?"), FGuid(0xF297F917, 0x48B2A2FB, 0x6C6B5EA5, 0x8D48881C) }, 
        { FName("SavePresetPopUpRef"), FGuid(0xC53CD410, 0x4198C1D2, 0xF604D1AB, 0x615E2F9B) }, 
        { FName("PresetRef"), FGuid(0x960812CE, 0x499B8221, 0xCCAB9AB1, 0x68896388) }, 
        { FName("WeaponCategoryTag"), FGuid(0x4F0B6BEB, 0x4493979D, 0xBCA36EAE, 0x048B3CB3) }, 
        { FName("ContentIndex"), FGuid(0x4B3FE4B4, 0x4AFEC35A, 0x58EADDB1, 0x385F471E) }, 
        { FName("Vendor?"), FGuid(0x38717FF3, 0x4979EC67, 0x1FC6A3B2, 0xC92F4C3B) }, 
        { FName("Weapon Ref"), FGuid(0x7862ED50, 0x4FEE6D5C, 0x7FB193A0, 0x1737F775) }, 
        { FName("To Buy Items"), FGuid(0xC311CDA1, 0x49C00C9D, 0x303906AD, 0x5822AEA3) }, 
        { FName("Gunsmith Attachment Slot Ref"), FGuid(0xF25A1091, 0x40D58F4C, 0x3703DF9B, 0x6D86119D) }, 
        { FName("OnGunsmithAttachmentChanged"), FGuid(0xBE7F412A, 0x41FB7862, 0x6DAB2BA8, 0x07BCC57D) }, 
        { FName("GunsmithRef"), FGuid(0x5AB45AF1, 0x43EF469F, 0x371B05B5, 0xA951B715) }, 
        { FName("OnGunsmithWeaponChanged"), FGuid(0x0F245401, 0x4AE6685E, 0xFFBC8C9B, 0x599C45E0) }, 
        { FName("InfoRef"), FGuid(0xF5111FB8, 0x4EF05A60, 0xC78AEAB4, 0xB47CC65E) }, 
        { FName("FadeInOut"), FGuid(0x83258C7B, 0x44D63D86, 0xA6593F8B, 0x79345635) }, 
        { FName("AttachmentBar"), FGuid(0x47095199, 0xBF433086, 0xA039E8A8, 0xF1A05989) }, 
        { FName("Content"), FGuid(0x48F0F54E, 0x9DA0377A, 0x91DD947A, 0xAB4726BB) }, 
        { FName("ContentSwitcher"), FGuid(0x5E41FE54, 0xD9BD31B6, 0xA79FE9C8, 0xB458DCBA) }, 
        { FName("Image_106"), FGuid(0x998159F6, 0x430B344C, 0x87A3BEDA, 0xD1E98C3A) }, 
        { FName("Overlay_5"), FGuid(0x72421068, 0xE348306E, 0xB25BCA98, 0x13ABDDA5) }, 
        { FName("OverviewBar"), FGuid(0x0085304F, 0x2AC53519, 0xA02CF2E4, 0x0FB3DC6E) }, 
        { FName("PartyContainer"), FGuid(0x621400DC, 0x62733372, 0x811AEB5E, 0xFE31E160) }, 
        { FName("UtilityBarSwitcher"), FGuid(0xFB3CD9DC, 0xC26433EC, 0xA68A3F0C, 0x6FD2DA0C) }, 
        { FName("W_IRR_Background"), FGuid(0x12194B3E, 0xBBED3A19, 0xBE8293A1, 0xCE14F71A) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x7561B359, 0xC2323412, 0x8587DFB3, 0x8082D316) }, 
        { FName("W_IRR_FANG_Header"), FGuid(0xD7DBA55B, 0xE749326C, 0x9BF257AB, 0x8E483781) }, 
        { FName("W_IRR_Gunsmith_Content_Attachment"), FGuid(0x9ABF7065, 0xF2D43FF8, 0xBE773F1E, 0x12F4DBE0) }, 
        { FName("W_IRR_Gunsmith_Content_Modify"), FGuid(0x11B14818, 0xF7EE3E11, 0xAF00D723, 0x70D4061A) }, 
        { FName("W_IRR_Gunsmith_WeaponList"), FGuid(0x119C41CC, 0x799A3C54, 0xA5C6D9C8, 0xC52E7A52) }, 
        { FName("W_IRR_Headline"), FGuid(0x234FC63B, 0x51C73680, 0xA673B14C, 0x515ECE73) }, 
        { FName("W_IRR_PartyData"), FGuid(0xC934AA77, 0x29FB3350, 0x9E447661, 0x69B7782C) }, 
        { FName("W_IRR_WeaponOverview"), FGuid(0xECD1BA36, 0xA7853BDD, 0x8423949C, 0x952AF46A) }, 
        { FName("W_MissionFactionRelation"), FGuid(0x6CFCD4C1, 0x4A2AABD2, 0xBF249AB0, 0x7BAE274F) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0x5ECA7808, 0x496348F4, 0xECCD0695, 0xF7DFB03B) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0x83B4005D, 0x4E29ED29, 0xB835DF87, 0xA931486C) }, 
        { FName("WeaponBar"), FGuid(0x9F9AC882, 0x31583838, 0xA90F4229, 0xB469A265) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnGunsmithWeaponChanged = ;
     OnGunsmithAttachmentChanged = ;
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
     OnContentUpdated = ;
    struct FDataTableRowHandle HideUI_Action = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_UI_InputActions.DT_UI_InputActions'",
        "RowName": FName("HideUI")
    };
    struct FGameplayTag Ability Tag = {
        "TagName": FName("Character.Abilities.Active.Gunsmith")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UtilityBar_C* WeaponBar;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_Gunsmith_WeaponOverview_C* W_IRR_WeaponOverview;
    class UW_IRR_PartyData_C* W_IRR_PartyData;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_Gunsmith_Content_WeaponList_C* W_IRR_Gunsmith_WeaponList;
    class UW_IRR_Gunsmith_Content_Modify_C* W_IRR_Gunsmith_Content_Modify;
    class UW_IRR_Gunsmith_Content_Attachment_C* W_IRR_Gunsmith_Content_Attachment;
    class UW_IRR_FANG_Header_C* W_IRR_FANG_Header;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UWidgetSwitcher* UtilityBarSwitcher;
    class UOverlay* PartyContainer;
    class UW_UtilityBar_C* OverviewBar;
    class UOverlay* Overlay_5;
    class UImage* Image_106;
    class UWidgetSwitcher* ContentSwitcher;
    class UOverlay* Content;
    class UW_UtilityBar_C* AttachmentBar;
    class UWidgetAnimation* FadeInOut;
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
    bool HideUI?;

};