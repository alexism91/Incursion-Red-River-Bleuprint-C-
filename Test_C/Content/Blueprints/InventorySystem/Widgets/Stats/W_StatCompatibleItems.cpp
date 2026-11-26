class UW_StatCompatibleItems_C : public UStatItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatCompatibleItems.W_StatCompatibleItems_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ContextButton",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_ContextButton_ToolTipWidget"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_ContextButton_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatCompatibleItems.W_StatCompatibleItems_C:ExecuteUbergraph_W_StatCompatibleItems'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CompatibleItemsTooltip"), FGuid(0x13F6575F, 0x40F728B8, 0xB6E899AE, 0x1C7111FF) }, 
        { FName("ContextButton"), FGuid(0x702C1D3C, 0x025639CA, 0xA3BCF3C2, 0x60CF0C28) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum StatItemAppearance = EStatItemAppearanceType::PlainTextBox;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UButton* ContextButton;
    class UW_OnHoverToolTip_C* CompatibleItemsTooltip;

};