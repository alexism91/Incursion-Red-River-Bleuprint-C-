class UW_IRR_BaseIcon_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseIcon.W_IRR_BaseIcon_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseIcon.W_IRR_BaseIcon_C:ExecuteUbergraph_W_IRR_BaseIcon'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BorderColor"), FGuid(0x6BA0D22E, 0x45E6383F, 0x28DB7EAA, 0x3A838BA4) }, 
        { FName("BorderIcon"), FGuid(0x8CA1C832, 0x4F2936FB, 0xD813F4B7, 0xB4B31580) }, 
        { FName("Border?"), FGuid(0xB17BAD2C, 0x4ADF0B8B, 0xB03142AB, 0x247A8542) }, 
        { FName("Foreground?"), FGuid(0x87DFBDCB, 0x4AE2DB3D, 0x20E40186, 0x15204BB2) }, 
        { FName("IconPadding"), FGuid(0x53957DB4, 0x4629C50C, 0xC63EA0A4, 0xAEF362E9) }, 
        { FName("IconColor"), FGuid(0x5D624ED6, 0x427345B1, 0xE5F93496, 0x8C10DA4D) }, 
        { FName("IconTexture"), FGuid(0x748F1E13, 0x42FC76CF, 0xC90B3D95, 0x922BA3BC) }, 
        { FName("IconSize"), FGuid(0x28A11E70, 0x4546087F, 0xF09613A2, 0xBD63B510) }, 
        { FName("Border"), FGuid(0x941314B9, 0x448A43E9, 0xF9DF86B2, 0x2492077F) }, 
        { FName("Image_55"), FGuid(0x148B64EB, 0x33AC309E, 0x91D37810, 0xAFC00200) }, 
        { FName("SizeBox_0"), FGuid(0x1ED67832, 0x990737E0, 0xB5758538, 0x7AE761EA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float IconSize = 16;
    class UTexture2D* IconTexture = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_IRR_Gunsmith_AttachmentPoint.T_IRR_Gunsmith_AttachmentPoint'";
    struct FSlateColor IconColor = {
        "SpecifiedColor": FLinearColor(1, 1, 1, 1),
        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
    };
    struct FMargin IconPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
    struct FSlateColor BorderColor = {
        "SpecifiedColor": FLinearColor(1, 1, 1, 1),
        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SizeBox_0;
    class UImage* Image_55;
    class UImage* Border;
    bool Foreground?;
    bool Border?;
    class UTexture2D* BorderIcon;

};