class UW_IRR_Gunsmith_ItemInfo_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_ItemInfo.W_IRR_Gunsmith_ItemInfo_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_ItemInfo.W_IRR_Gunsmith_ItemInfo_C:BlendIn_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_ItemInfo.W_IRR_Gunsmith_ItemInfo_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_ItemInfo.W_IRR_Gunsmith_ItemInfo_C:ExecuteUbergraph_W_IRR_Gunsmith_ItemInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Index"), FGuid(0xD9DFDC63, 0x4702F137, 0xBBF65383, 0xCC08DBD7) }, 
        { FName("BP Gunsmith Inventory"), FGuid(0xF1715DB9, 0x44B06EFA, 0x3F3D9D8F, 0xF3901670) }, 
        { FName("Action Type"), FGuid(0x7F4DD2BE, 0x48CF8DE5, 0xC9DFC0AE, 0x10387170) }, 
        { FName("Attachment"), FGuid(0xAFE88225, 0x49139FA4, 0x7E0395BA, 0x817F60DE) }, 
        { FName("OnItemClicked"), FGuid(0xC776E107, 0x4B2309A4, 0x34257483, 0xBF500A02) }, 
        { FName("PresetItem"), FGuid(0x6CB09863, 0x460C5D41, 0x59EDF08F, 0x3BD4BDE0) }, 
        { FName("BlendIn"), FGuid(0xE5AACA54, 0x13EF3135, 0x9E7D76F9, 0x5BDD5D61) }, 
        { FName("AttachmentBox"), FGuid(0x588BCA75, 0x70E83323, 0xA213A208, 0xA1BD02C9) }, 
        { FName("AttachmentDescription"), FGuid(0x92E0EC33, 0xA26B3F14, 0xA485D3BC, 0xE2A433CE) }, 
        { FName("AttachmentName"), FGuid(0x9EF25CA2, 0x17FC30D2, 0xA87626A1, 0xA0064C53) }, 
        { FName("Button"), FGuid(0x0635CC64, 0x2ED0378B, 0xAAE9072D, 0xD34B3142) }, 
        { FName("W_AttachmentPrice"), FGuid(0x4473D27D, 0xDA1D318B, 0x80B25ADC, 0x88353CDF) }, 
        { FName("W_AttachmentStatContainer"), FGuid(0x393110C2, 0x20463D74, 0x80AE3AD9, 0xCC1E10C7) }, 
        { FName("W_IRR_Background"), FGuid(0x3242F645, 0x2BEC3BE9, 0xB42BACED, 0x3A07EA8C) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0xE6FD33F8, 0x7BFC3C52, 0x8560C5E4, 0x4F8C9237) }, 
        { FName("W_WeaponPrice"), FGuid(0x4933C200, 0x3E1A3058, 0xB7E5E080, 0xE5897074) }, 
        { FName("W_WeaponStatContainer"), FGuid(0x9C492720, 0x7919355B, 0xB70071AC, 0x4BC3DBEF) }, 
        { FName("WeaponBox"), FGuid(0xFC4A3AD4, 0x44C43DA6, 0xA151E612, 0x840D660A) }, 
        { FName("WeaponDescription"), FGuid(0x036AEFFB, 0xB5F1341B, 0x86F64148, 0xD5603164) }, 
        { FName("WeaponHeader"), FGuid(0x07985A50, 0xAC3336D2, 0x8CDE022F, 0x30784736) }, 
        { FName("WeaponNameText"), FGuid(0x237C09BA, 0x49C234A4, 0x91FDB33E, 0x58EB3651) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem PresetItem = {
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
     OnItemClicked = ;
    struct FContainerItem Attachment = {
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
    class UIRRTextBlock* WeaponNameText;
    class UVerticalBox* WeaponHeader;
    class UIRRTextBlock* WeaponDescription;
    class UVerticalBox* WeaponBox;
    class UW_StatContainer_C* W_WeaponStatContainer;
    class UW_StatPrice_C* W_WeaponPrice;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_StatContainer_C* W_AttachmentStatContainer;
    class UW_StatPrice_C* W_AttachmentPrice;
    class UW_IRR_BaseButton_C* Button;
    class UIRRTextBlock* AttachmentName;
    class UIRRTextBlock* AttachmentDescription;
    class UVerticalBox* AttachmentBox;
    class UWidgetAnimation* BlendIn;
    EGunsmithActionType Action Type;
    class UInventoryComponent_Gunsmith* BP Gunsmith Inventory;
    int Index;

};