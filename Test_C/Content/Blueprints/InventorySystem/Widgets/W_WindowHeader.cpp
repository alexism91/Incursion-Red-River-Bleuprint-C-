class UW_WindowHeader_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_WindowHeader.W_WindowHeader_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_WindowHeader.W_WindowHeader_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_WindowHeader.W_WindowHeader_C:ExecuteUbergraph_W_WindowHeader'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Height Override"), FGuid(0x30F8CA9F, 0x43762BE3, 0x26486A8E, 0xA9DA7D0A) }, 
        { FName("Font Preset"), FGuid(0xB8F348D5, 0x4A735CFB, 0xF13DCD97, 0xD714883C) }, 
        { FName("Headline Text"), FGuid(0x5ECB3F35, 0x4FC65CDE, 0xAAA76CA2, 0x61295F83) }, 
        { FName("bUseQuitButton"), FGuid(0x6B0251C3, 0x48A752A1, 0xD5F94BA9, 0x697EA408) }, 
        { FName("bUseIcon"), FGuid(0x14B63CAC, 0x47255B2D, 0x944F24A7, 0xCD5DC9AD) }, 
        { FName("IconBrush"), FGuid(0x9B01B71D, 0x4B51FBBF, 0xDBED3E83, 0x8055DFB8) }, 
        { FName("ParentWidgetRef"), FGuid(0xDACE9FC3, 0x461B2A89, 0x89C4FFA2, 0x5A68B988) }, 
        { FName("TitleBtnMouseDown"), FGuid(0xF8391527, 0x4BC29EF1, 0x7A1061BA, 0x65E7AA6C) }, 
        { FName("CurrentMousePos"), FGuid(0xEF6BD2E8, 0x41E1FCB2, 0x42A14A85, 0x92D96109) }, 
        { FName("OnClosed"), FGuid(0x28458747, 0x4D36A2B6, 0xCC6AF389, 0xA3740F72) }, 
        { FName("OnClicked"), FGuid(0x3EDA3D35, 0x48FF799C, 0xEFA303AF, 0x8C3F931C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnClicked = ;
     OnClosed = ;
    struct FVector2D CurrentMousePos = FVector2D(0, 0);
    struct FSlateBrush IconBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_InspectWindow_Star.T_InspectWindow_Star'",
        "OutlineSettings": {
            "CornerRadii": FVector4(0, 0, 0, 0),
            "Color": {
                "SpecifiedColor": FLinearColor(0, 0, 0, 0),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "Width": 0,
            "RoundingType": ESlateBrushRoundingType::HalfHeightRadius,
            "bUseBrushTransparency": false
        },
        "UVRegion": FBox2D(TIntVector2<float>(0, 0), TIntVector2<float>(0, 0), 0),
        "bIsDynamicallyLoaded": false,
        "ResourceName": FName("None")
    };
    bool bUseQuitButton = true;
    FText Headline Text = FText("Placeholder", CultureInvariant);
    struct FDataTableRowHandle Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SmallButton")
    };
    float Height Override = 32;
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;
    class USizeBox* SizeBox_1;
    class UIRRTextBlock* ItemNameText;
    class UImage* Image_85;
    bool TitleBtnMouseDown;
    class UWidget* ParentWidgetRef;
    bool bUseIcon;

};