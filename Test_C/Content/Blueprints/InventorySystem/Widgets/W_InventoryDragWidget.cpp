class UW_InventoryDragWidget_C : public UItemDragWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryDragWidget.W_InventoryDragWidget_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryDragWidget.W_InventoryDragWidget_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryDragWidget.W_InventoryDragWidget_C:ExecuteUbergraph_W_InventoryDragWidget'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Replaced?"), FGuid(0x00D55D71, 0x46519B0B, 0x8901AA94, 0xAA2DBB42) }, 
        { FName("My Geometry"), FGuid(0x7A8D19A6, 0x4BB07FAA, 0x3EE45ABC, 0x75524738) }, 
        { FName("FoldKey"), FGuid(0x898E0322, 0x4C5B0B2D, 0x02FCA482, 0x068082F9) }, 
        { FName("RotateKey"), FGuid(0x395F7C30, 0x4CA7B80E, 0x04FB4186, 0x0E001783) }, 
        { FName("isKeyDown"), FGuid(0xBCF4A097, 0x4F7F49B0, 0x80093D98, 0xFA934034) }, 
        { FName("FadeIn"), FGuid(0xD919BE7F, 0x49EF40D4, 0x1D8E60BA, 0xEC44A2EB) }, 
        { FName("Image"), FGuid(0xCEE8F7B6, 0x509B3BEE, 0x801A2D05, 0xB3DE3BA3) }, 
        { FName("InputActionTooltip"), FGuid(0x93C53097, 0x4AE723C4, 0xC943239F, 0x0EE72C3A) }, 
        { FName("IRRFloatingBox_83"), FGuid(0xD6DC9D1A, 0x425535A4, 0x8CA78D91, 0x7930DD1A) }, 
        { FName("IRRScaledSizeBox_1"), FGuid(0xBF1FB6E0, 0xD27A3BE2, 0x80DC7AC5, 0x2898D8EB) }, 
        { FName("ItemBackground"), FGuid(0x7BC05A78, 0x512A31EF, 0x96F5569B, 0x64208C3A) }, 
        { FName("ItemBorder"), FGuid(0x3B3F8132, 0xED763D63, 0xAD2F494B, 0x152D9A61) }, 
        { FName("ItemContainer"), FGuid(0xE32C04EC, 0x20AE35B0, 0xB9EDDF9A, 0x862A305F) }, 
        { FName("ScaleBox_0"), FGuid(0xFBA62E29, 0x9ACC339B, 0x800B3161, 0x951152A1) }, 
        { FName("W_OnHoverToolTip"), FGuid(0xD9B7D7EB, 0x06BE328A, 0xA6D831F7, 0x7A862C81) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FKey RotateKey = {
        "KeyName": FName("R")
    };
    struct FKey FoldKey = {
        "KeyName": FName("F")
    };
    struct FGeometry My Geometry = {};
    bool bIsFocusable = true;
    bool bStopAction = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Visible;
    class UW_OnHoverToolTip_C* W_OnHoverToolTip;
    class UScaleBox* ScaleBox_0;
    class USizeBox* ItemContainer;
    class UBorder* ItemBorder;
    class UBorder* ItemBackground;
    class UIRRScaledSizeBox* IRRScaledSizeBox_1;
    class UIRRFloatingBox* IRRFloatingBox_83;
    class URichTextBlock* InputActionTooltip;
    class UImage* Image;
    class UWidgetAnimation* FadeIn;
    bool isKeyDown;
    bool Replaced?;

};