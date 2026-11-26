class UWB_ListElement_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ListElement.WB_ListElement_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ListElement.WB_ListElement_C:ExecuteUbergraph_WB_ListElement'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Label"), FGuid(0x9BD91C51, 0x4BC5142B, 0x4D1A21AD, 0x07AE4FF7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* LeftBorder;
    class UTextBlock* LabelText;
    FText Label;

};