class UW_IRR_CurrencyText_C : public UInventoryCurrencyTextWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_CurrencyText.W_IRR_CurrencyText_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_CurrencyText.W_IRR_CurrencyText_C:ExecuteUbergraph_W_IRR_CurrencyText'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FollowingNumbersFont"), FGuid(0xB4729BEC, 0x4F9836B1, 0x5111BD90, 0x54D4016A) }, 
        { FName("LeadingZerosFont"), FGuid(0x011CCAAF, 0x4743C8A8, 0x37E7559E, 0x5ED712A0) }, 
        { FName("IconBox"), FGuid(0xBD88D307, 0x4C5E093A, 0xE86B9994, 0x7485012B) }, 
        { FName("Image_123"), FGuid(0x923EBF05, 0xC553338D, 0x9C6B9882, 0xE0CAA889) }, 
        { FName("Spacer"), FGuid(0xFFBB5B90, 0x5206359D, 0xB1B333A3, 0x27F6D995) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle LeadingZerosFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Currency.DT_Inventory_Font_Currency'",
        "RowName": FName("LeadingZeros")
    };
    struct FDataTableRowHandle FollowingNumbersFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Currency.DT_Inventory_Font_Currency'",
        "RowName": FName("FollowingNumbers")
    };
    class UTexture2D* PrimaryCurrencyIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_IRR_PrimaryCurrency_A.T_IRR_PrimaryCurrency_A'";
    class UTexture2D* SecondaryCurrencyIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_IRR_SecondaryCurrency_A.T_IRR_SecondaryCurrency_A'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USpacer* Spacer;
    class UImage* Image_123;
    class UHorizontalBox* IconBox;

};