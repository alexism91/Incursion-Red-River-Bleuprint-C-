class UW_ShoppingCartAttachment_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_ShoppingCartAttachment.W_ShoppingCartAttachment_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_ShoppingCartAttachment.W_ShoppingCartAttachment_C:ExecuteUbergraph_W_ShoppingCartAttachment'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AttachmentIndex"), FGuid(0x466FF987, 0x48BD0B99, 0x897BDF87, 0xBB4AED27) }, 
        { FName("AttachmentInfo"), FGuid(0x6E2BF604, 0x4541C54B, 0x033337BA, 0xA75B3D10) }, 
        { FName("ParentVendorItem"), FGuid(0x0B04FEAE, 0x4E7444C5, 0x93665C99, 0xB2E6E4D4) }, 
        { FName("AttachmentList"), FGuid(0x50D98EE8, 0xD6133ED2, 0x889EF176, 0x656C69C3) }, 
        { FName("BackgroundBorder"), FGuid(0xB654D4B0, 0x48D830EC, 0x90BAAD5C, 0x417CD4C0) }, 
        { FName("ItemNameText"), FGuid(0x0C36AC14, 0x9E8E3B9D, 0xB88BBB31, 0xCC2ABAFB) }, 
        { FName("TreeSpacer"), FGuid(0xDF04C82D, 0x07ED3570, 0x925FFAE8, 0x51A16D25) }, 
        { FName("W_IRR_CurrencyText"), FGuid(0x80A64323, 0xF1F23244, 0xBA52089C, 0xCD036029) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRVendorStockItem ParentVendorItem = {
        "StockCount": 0,
        "PurchaseCount": 1,
        "RestockPercentage": 0,
        "RowName": FName("None"),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MarketTag": {
            "TagName": FName("None")
        }
    };
    struct FDefaultAttachment AttachmentInfo = {
        "InContainerIndex": 0,
        "ParentIndex": -1,
        "AttachmentType": EDefaultItemType::Manual,
        "AttachmentPreset": nullptr,
        "AttachmentDefinition": nullptr,
        "Count": 1,
        "AttachmentDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CurrentStats": {},
        "SlotIndex": -1,
        "bRotated": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_CurrencyText_C* W_IRR_CurrencyText;
    class USpacer* TreeSpacer;
    class UIRRTextBlock* ItemNameText;
    class UBorder* BackgroundBorder;
    class UVerticalBox* AttachmentList;
    int AttachmentIndex;

};