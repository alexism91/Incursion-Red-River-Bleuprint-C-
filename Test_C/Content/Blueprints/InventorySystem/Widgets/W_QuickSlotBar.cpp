class UW_QuickSlotBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_QuickSlotBar.W_QuickSlotBar_C:WidgetTree'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("W_QuickSlotContainer"), FGuid(0xB71DA2AA, 0xE9543148, 0xBC80AE47, 0xF7DE402A) }, 
        { FName("W_QuickSlotContainer_1"), FGuid(0x9BF0BA44, 0x37573C4A, 0x9A1E7542, 0x0499AAF6) }, 
        { FName("W_QuickSlotContainer_2"), FGuid(0x8B11D25E, 0x85713D0E, 0xB8E89085, 0x2D3D4A4B) }, 
        { FName("W_QuickSlotContainer_3"), FGuid(0x72B8FE58, 0xBC273F2D, 0x9AA0A031, 0xF1AEF588) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_QuickSlotContainer_C* W_QuickSlotContainer_3;
    class UW_QuickSlotContainer_C* W_QuickSlotContainer_2;
    class UW_QuickSlotContainer_C* W_QuickSlotContainer_1;
    class UW_QuickSlotContainer_C* W_QuickSlotContainer;
};