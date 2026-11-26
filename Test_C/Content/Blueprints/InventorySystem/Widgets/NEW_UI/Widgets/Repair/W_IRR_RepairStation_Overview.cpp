class UW_IRR_RepairStation_Overview_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Repair/W_IRR_RepairStation_Overview.W_IRR_RepairStation_Overview_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Repair/W_IRR_RepairStation_Overview.W_IRR_RepairStation_Overview_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Repair/W_IRR_RepairStation_Overview.W_IRR_RepairStation_Overview_C:ExecuteUbergraph_W_IRR_RepairStation_Overview'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RepairMaterialAutoSelectItems"), FGuid(0x1E165DCF, 0x4EBDDC1F, 0x390757AA, 0xCE514F6E) }, 
        { FName("RepairMaterialsEnabled"), FGuid(0x817E1B45, 0x478A6A84, 0x734F76B0, 0x45B25E26) }, 
        { FName("RepairMaterials"), FGuid(0xEB96EADF, 0x4EC4944E, 0x326D3CB9, 0x0B64E44E) }, 
        { FName("Repair Base Value"), FGuid(0xD25029C2, 0x46F056A4, 0xBE28F6B8, 0xE38D5B42) }, 
        { FName("Repair Cost"), FGuid(0xBFB964C0, 0x47DD418D, 0x8C63DFAD, 0x68372DBF) }, 
        { FName("Repair Max Value"), FGuid(0x826A318B, 0x47758FC2, 0xE50C71A2, 0xFD1CA470) }, 
        { FName("Repair Value"), FGuid(0x23986FEB, 0x4033AB37, 0x39091D8D, 0x31BD11F4) }, 
        { FName("Repair Cash Value"), FGuid(0xB26588CB, 0x4D8D1CEB, 0x53D87C93, 0x9AEFA5B9) }, 
        { FName("Repair To Select Items"), FGuid(0xE9ACBA5A, 0x4FBF6824, 0x500FF99E, 0x459B9F7D) }, 
        { FName("Repair All Selected Items"), FGuid(0xCD4C1E36, 0x48FFC540, 0x8E6B2981, 0x6ACA393C) }, 
        { FName("RepairItem"), FGuid(0x2B173ED9, 0x4FB262CA, 0x7D01DCB3, 0xC2D500FC) }, 
        { FName("RepairRules"), FGuid(0xD89CA429, 0x4AFE63A4, 0xB3C1288E, 0xE9280205) }, 
        { FName("ItemContainer"), FGuid(0x0A38AC77, 0x4E3EF18B, 0x12204FBF, 0x87DC6D88) }, 
        { FName("Item Padding"), FGuid(0x2B29FED8, 0x431CDA14, 0xCADE6784, 0x235E14A6) }, 
        { FName("Unit"), FGuid(0x05866F1B, 0x4A2BF8C5, 0xA9857CAC, 0xBD56DE7D) }, 
        { FName("BaseValueCash"), FGuid(0xB881301A, 0x48BFD095, 0xD262D1B5, 0xEB4A4004) }, 
        { FName("BaseValueTextMaterial"), FGuid(0x951FA08D, 0x48BA581F, 0x20ADCD94, 0x55F69F81) }, 
        { FName("DescriptionBox"), FGuid(0x61F4A054, 0x438009B4, 0xAA0B00BB, 0xBF991602) }, 
        { FName("FilterBox"), FGuid(0xEFD1DAF8, 0x4D9DBBDD, 0x71C4BABD, 0x3FD56A35) }, 
        { FName("FinalValueCash"), FGuid(0xE2A12E26, 0x433412BF, 0x25CBF7B3, 0x493FAD47) }, 
        { FName("FinalValueMaterial"), FGuid(0x6DCD3F8C, 0x4E0A20D6, 0x85696DB1, 0x7F084C25) }, 
        { FName("IRRTextBlock_107"), FGuid(0x632C9714, 0x4485AEF0, 0xF8EDD9AF, 0x531BBB9F) }, 
        { FName("ItemBox"), FGuid(0x67142DA9, 0x47E7E788, 0x01A0AE97, 0x2DA14FA3) }, 
        { FName("ItemDescription"), FGuid(0xC078E939, 0x41834DB7, 0x9296AD93, 0x0118DFDB) }, 
        { FName("ItemDescription_1"), FGuid(0xF3E16CB1, 0x4437D35C, 0xD75E498A, 0x749BA526) }, 
        { FName("ItemDescription_2"), FGuid(0xB63623AA, 0x4392431B, 0x61F326B6, 0x0F841011) }, 
        { FName("ItemDescription_3"), FGuid(0x604DF165, 0x4AD6ADA1, 0x70E3EC89, 0x2E2A1BE3) }, 
        { FName("ItemDescription_5"), FGuid(0x3C4EF9F9, 0x4BCCAB74, 0xA6F4F5AA, 0x836C25C8) }, 
        { FName("ItemDescription_6"), FGuid(0xCC326B84, 0x47A1B62C, 0x29A2619C, 0x656EB080) }, 
        { FName("ItemDescription_7"), FGuid(0xC2C5D2C1, 0x477A352A, 0xF035C5AF, 0xA2A5324D) }, 
        { FName("ItemDescription_8"), FGuid(0x5F1B3622, 0x434A1FB0, 0xB5248AB6, 0xFE006E1A) }, 
        { FName("ItemDescription_9"), FGuid(0xE7E992A7, 0x4C4885B5, 0x12B0E1B8, 0x53AD1276) }, 
        { FName("ItemDescription_10"), FGuid(0x1059557F, 0x4AF4E662, 0xB2BEE7A9, 0x51D9DB1F) }, 
        { FName("ItemDescription_11"), FGuid(0xD2F50E5D, 0x4E163279, 0xB7C3DF85, 0x2C6E8921) }, 
        { FName("ItemDescription_12"), FGuid(0x0A04B140, 0x423C5CA5, 0x93742392, 0x22659DF1) }, 
        { FName("ItemName"), FGuid(0x5D9C5AF0, 0x4E877D5B, 0x4AA3D0A7, 0xFCD5CEAB) }, 
        { FName("LimitMaterial"), FGuid(0x2639D58E, 0x4F7673D9, 0x78DA5FB8, 0xFCC5F49F) }, 
        { FName("LimitPrice"), FGuid(0xEA383429, 0x49846F38, 0xC5792AA9, 0x8C31F07C) }, 
        { FName("RepairBonusCash"), FGuid(0xB74B2513, 0x4A988E00, 0xC2FD269A, 0x9FC0A4FD) }, 
        { FName("RepairBonusMaterial"), FGuid(0x77A9DAF1, 0x42896893, 0x6AED708C, 0x930B1B4F) }, 
        { FName("RepairBonusText_1"), FGuid(0x6C2B69B8, 0x4EE0C185, 0xDCB50282, 0x8ECF0B49) }, 
        { FName("RepairCash"), FGuid(0x313871EE, 0x47D7AE01, 0x8980D1A8, 0xBAAE5724) }, 
        { FName("RepairItems"), FGuid(0x5BE008BB, 0x46E4D0D6, 0xAE281FB5, 0xAE21B1B5) }, 
        { FName("ReplacementValueMaterial"), FGuid(0x93860393, 0x49DE198D, 0x57E9DEB0, 0x51321496) }, 
        { FName("ResourceBox"), FGuid(0xD0F7771A, 0x4D61A093, 0xB3BA39A7, 0x7D2E1167) }, 
        { FName("ResourceBox_1"), FGuid(0x3480EB17, 0x4462E2F1, 0x1C3D60A5, 0xC7C2DB6B) }, 
        { FName("W_InventorySection_1"), FGuid(0x3DAD867F, 0x4212BF9C, 0x2F5C139B, 0xE24880CD) }, 
        { FName("W_InventorySection_2"), FGuid(0x0B41CC77, 0x4DB4D6CF, 0x09965491, 0x43658473) }, 
        { FName("W_InventorySection_3"), FGuid(0x96B67BB2, 0x45623695, 0x107D729E, 0x68A7DCB5) }, 
        { FName("W_IRR_Background"), FGuid(0x951F0EDC, 0x4DB663A6, 0x66F57892, 0x5D4913BC) }, 
        { FName("W_IRR_BaseIcon_1"), FGuid(0x32B8A8E1, 0x47F79A33, 0x44437EB8, 0x3C11AF81) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Item_Container"), FGuid(0x0438BF39, 0x4F5157FC, 0x4CF0CFA7, 0x015EC1DE) }, 
        { FName("W_IRR_HorizontalTabList"), FGuid(0x329C7DA3, 0x470D9A56, 0x289A4E90, 0x3C9E8A31) }, 
        { FName("W_ItemStatContainer"), FGuid(0xF3BEC801, 0x44BCBF89, 0x361BB180, 0xFB7B279A) }, 
        { FName("WeaponHeader"), FGuid(0xDA638CD9, 0x440CC075, 0x9F2CC3AD, 0xD6A97D5E) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x039548F1, 0x40C6F0BA, 0x387B3980, 0x5EC55E2B) }, 
        { FName("WidgetSwitcher_1"), FGuid(0x8B309A4D, 0x4D2F8399, 0xB22F31A4, 0xE0F36117) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin Item Padding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 6
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
    class UWidgetSwitcher* WidgetSwitcher_1;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UVerticalBox* WeaponHeader;
    class UW_StatContainer_C* W_ItemStatContainer;
    class UW_IRR_HorizontalTabList_C* W_IRR_HorizontalTabList;
    class UW_IRR_HideoutUpgrade_Overview_Item_Container_C* W_IRR_HideoutUpgrade_Overview_Item_Container;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon_1;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventorySection_C* W_InventorySection_3;
    class UW_InventorySection_C* W_InventorySection_2;
    class UW_InventorySection_C* W_InventorySection_1;
    class UVerticalBox* ResourceBox_1;
    class UVerticalBox* ResourceBox;
    class UIRRTextBlock* ReplacementValueMaterial;
    class UW_IRR_BaseButton_C* RepairItems;
    class UW_IRR_BaseButton_C* RepairCash;
    class UIRRTextBlock* RepairBonusText_1;
    class UIRRTextBlock* RepairBonusMaterial;
    class UIRRTextBlock* RepairBonusCash;
    class UIRRTextBlock* LimitPrice;
    class UIRRTextBlock* LimitMaterial;
    class UIRRTextBlock* ItemName;
    class UIRRTextBlock* ItemDescription_12;
    class UIRRTextBlock* ItemDescription_11;
    class UIRRTextBlock* ItemDescription_10;
    class UIRRTextBlock* ItemDescription_9;
    class UIRRTextBlock* ItemDescription_8;
    class UIRRTextBlock* ItemDescription_7;
    class UIRRTextBlock* ItemDescription_6;
    class UIRRTextBlock* ItemDescription_5;
    class UIRRTextBlock* ItemDescription_3;
    class UIRRTextBlock* ItemDescription_2;
    class UIRRTextBlock* ItemDescription_1;
    class UIRRTextBlock* ItemDescription;
    class UVerticalBox* ItemBox;
    class UIRRTextBlock* IRRTextBlock_107;
    class UIRRTextBlock* FinalValueMaterial;
    class UIRRTextBlock* FinalValueCash;
    class UVerticalBox* FilterBox;
    class UVerticalBox* DescriptionBox;
    class UIRRTextBlock* BaseValueTextMaterial;
    class UIRRTextBlock* BaseValueCash;
    class UIRRHideoutUnitComponent* Unit;
    class UW_IRR_HideoutUpgrade_Overview_Item_Container_C* ItemContainer;
    class URepairRules* RepairRules;
    TMap<struct FGuid, int> Repair All Selected Items;
    TMap<struct FGuid, int> Repair To Select Items;
    double Repair Cash Value;
    float Repair Value;
    float Repair Max Value;
    int Repair Cost;
    float Repair Base Value;
    TMap<struct FGameplayTag, int> RepairMaterials;
    bool RepairMaterialsEnabled;
    TArray<struct FContainerItem*>* RepairMaterialAutoSelectItems;

};