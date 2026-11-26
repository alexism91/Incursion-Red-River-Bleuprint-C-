class UW_IRR_Gunsmith_AssembleWeapon_Container_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AssembleWeapon_Container.W_IRR_Gunsmith_AssembleWeapon_Container_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AssembleWeapon_Container.W_IRR_Gunsmith_AssembleWeapon_Container_C:ExecuteUbergraph_W_IRR_Gunsmith_AssembleWeapon_Container'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ItemPadding"), FGuid(0x1E07455A, 0x4D037FAF, 0x8E1F8A90, 0xC23C2D33) }, 
        { FName("BlackMarketPrice"), FGuid(0x578DD0B7, 0x4E7E985A, 0xD36A1EA2, 0x2F3E01D0) }, 
        { FName("HorizontalBox_1"), FGuid(0x67C07276, 0xAC423359, 0xA526E4CF, 0x04C76DEC) }, 
        { FName("Image_65"), FGuid(0x83CE2D0A, 0x43857645, 0xB50573BC, 0x2A4560E2) }, 
        { FName("IRRTextBlock"), FGuid(0x44F450AD, 0xD38E35C3, 0x98354144, 0xAED92FC5) }, 
        { FName("IRRTextBlock_1"), FGuid(0xEAEC180E, 0x76213A8A, 0x96EF5D0D, 0xB746550C) }, 
        { FName("ItemBox"), FGuid(0xE46F1EB2, 0x68DD3354, 0x900FDEEB, 0xE181A0C1) }, 
        { FName("Price"), FGuid(0xB4E01922, 0x817030E2, 0xA4BE4666, 0x1DFD9F8B) }, 
        { FName("Price_1"), FGuid(0x099996C8, 0x4112ED05, 0x04C7E689, 0x02A140ED) }, 
        { FName("StockMarketPrice"), FGuid(0x0798FF57, 0x436476C5, 0x8AB0AA83, 0x8850E167) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin ItemPadding = {
        "Left": 0,
        "Top": 2,
        "Right": 0,
        "Bottom": 2
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* StockMarketPrice;
    class UIRRTextBlock* Price_1;
    class UIRRTextBlock* Price;
    class UW_IRR_ScrollBox_C* ItemBox;
    class UIRRTextBlock* IRRTextBlock_1;
    class UIRRTextBlock* IRRTextBlock;
    class UImage* Image_65;
    class UHorizontalBox* HorizontalBox_1;
    class UHorizontalBox* BlackMarketPrice;

};