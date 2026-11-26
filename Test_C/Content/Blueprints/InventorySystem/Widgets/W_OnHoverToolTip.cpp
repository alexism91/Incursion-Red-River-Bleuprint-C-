class UW_OnHoverToolTip_C : public UToolTipWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_OnHoverToolTip.W_OnHoverToolTip_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/W_OnHoverToolTip.W_OnHoverToolTip_C:ShowToolTip_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_OnHoverToolTip.W_OnHoverToolTip_C:ExecuteUbergraph_W_OnHoverToolTip'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ToolTipPadding"), FGuid(0xFEBC0194, 0x49A486CC, 0xC4F608B3, 0xF6110D30) }, 
        { FName("ToolTipOffset"), FGuid(0xBEC4DDF5, 0x4A1E2EE1, 0xFF7A9DAC, 0xC0BE9BFF) }, 
        { FName("Custom Positioning"), FGuid(0xD05CFCC7, 0x434A2301, 0x7CD39CB8, 0x23783600) }, 
        { FName("Playback Speed"), FGuid(0xE4F38BC1, 0x46A3A3CD, 0x3DE13FA3, 0xB0C3E8D1) }, 
        { FName("ShowToolTip"), FGuid(0x803D47AA, 0x42AA3F4D, 0xA36375D9, 0xF58018F4) }, 
        { FName("Overlay"), FGuid(0x19A1937A, 0x85EB3F85, 0xA4696E73, 0x84F36A3A) }, 
        { FName("Text"), FGuid(0x8238FBCE, 0x993C3675, 0x83E66837, 0x60099770) }, 
        { FName("W_IRR_Background"), FGuid(0xAE21FE3C, 0x17B83F94, 0xBA2E559E, 0x553CDC78) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Playback Speed = 1;
    struct FVector2D ToolTipOffset = FVector2D(10, 10);
    double ToolTipPadding = 10;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background;
    class URichTextBlock* Text;
    class UOverlay* Overlay;
    class UWidgetAnimation* ShowToolTip;
    bool Custom Positioning;

};