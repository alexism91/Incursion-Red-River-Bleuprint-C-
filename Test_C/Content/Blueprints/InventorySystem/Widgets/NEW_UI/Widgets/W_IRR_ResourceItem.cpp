class UW_IRR_ResourceItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_ResourceItem.W_IRR_ResourceItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_ResourceItem.W_IRR_ResourceItem_C:ExecuteUbergraph_W_IRR_ResourceItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnHoverToolTip"), FGuid(0x167F1B1E, 0x45D9F1A9, 0xF8094897, 0x5AF7C23C) }, 
        { FName("ResourceType"), FGuid(0x256A6E26, 0x44CD681D, 0x94F160A9, 0xFB380F79) }, 
        { FName("Resource Tag"), FGuid(0x88FAC1EC, 0x40D1D514, 0x1F20B3A9, 0x4506C6A0) }, 
        { FName("Fill Image"), FGuid(0x9AF72C6B, 0x45153536, 0xCECC48A7, 0xD28CD8D0) }, 
        { FName("PB_ProgressBar"), FGuid(0x07D90DF5, 0x466F84A0, 0x4D1458AC, 0x077C998E) }, 
        { FName("W_IRR_CurrencyText"), FGuid(0x863549DE, 0x49E17342, 0xC096929C, 0x20C82B6F) }, 
        { FName("W_IRR_ResourceIcon"), FGuid(0xE2718066, 0x4D7BE4FF, 0x2479E2AE, 0x81087BBE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UMaterialInstanceConstant* Fill Image = "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'";
    struct FGameplayTag Resource Tag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ResourceIcon_C* W_IRR_ResourceIcon;
    class UW_IRR_CurrencyText_C* W_IRR_CurrencyText;
    class UProgressBar* PB_ProgressBar;
    class UIRRResourceType* ResourceType;
    class UW_OnHoverToolTip_C* OnHoverToolTip;

};