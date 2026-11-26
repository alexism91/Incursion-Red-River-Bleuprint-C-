class UW_IRR_Mission_Deliver_Container_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Container.W_IRR_Mission_Deliver_Container_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Container.W_IRR_Mission_Deliver_Container_C:ExecuteUbergraph_W_IRR_Mission_Deliver_Container'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RequireAllItems?"), FGuid(0x2241E870, 0x4FF3CCBF, 0xC7DEDDBA, 0xD66F60BC) }, 
        { FName("Button Ref"), FGuid(0xCCBCC853, 0x4D26F12D, 0x780608AD, 0x15EE4DCD) }, 
        { FName("ProgressItems"), FGuid(0xFC3E744B, 0x430364A6, 0x59744EA4, 0xB465CBB9) }, 
        { FName("SelectableItems"), FGuid(0x9B15EB67, 0x4E3BEA9D, 0x9760A2AC, 0x563225F7) }, 
        { FName("Items"), FGuid(0x630CB9C3, 0x475B3375, 0x55094688, 0x0851F590) }, 
        { FName("Target Data"), FGuid(0xF4DAAF28, 0x42ECA50F, 0xEB3D0094, 0x8AA7096F) }, 
        { FName("ToDeliverAmount"), FGuid(0xFA2DF66E, 0x4BDBB800, 0x19DE2BA0, 0xDD6FFD4A) }, 
        { FName("ItemPadding"), FGuid(0xD604F31C, 0x44D22AD8, 0x03E3E68C, 0xD99EC131) }, 
        { FName("ErrorBox"), FGuid(0xE0F43873, 0x36BD3540, 0xAF8A67A1, 0x358C29B8) }, 
        { FName("IRRTextBlock"), FGuid(0x19C67CB1, 0xFEAA3809, 0xBC26069A, 0xE3EDB439) }, 
        { FName("ItemBox"), FGuid(0xE23D5DDD, 0xB0D03D51, 0xBB1EAE53, 0xC61E34FE) }, 
        { FName("ProgressBorder"), FGuid(0xF23DDB8A, 0x5989318D, 0xB3C2BD5F, 0x8F05E2DB) }
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
    class UBorder* ProgressBorder;
    class UW_IRR_ScrollBox_C* ItemBox;
    class UIRRTextBlock* IRRTextBlock;
    class UHorizontalBox* ErrorBox;
    int ToDeliverAmount;
    class UIRRTargetData* Target Data;
    TMap<struct FGameplayTag, int> Items;
    TArray<class UW_IRR_Mission_Deliver_Selectable_Item_C*>* SelectableItems;
    TArray<class UW_IRR_Mission_Deliver_Progress_Item_C*>* ProgressItems;
    class UIRRBaseButtonWidget* Button Ref;
    bool RequireAllItems?;

};