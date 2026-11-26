class UW_IRR_Gunsmith_Filter_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Filter.W_IRR_Gunsmith_Filter_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Filter.W_IRR_Gunsmith_Filter_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_Filter.W_IRR_Gunsmith_Filter_C:ExecuteUbergraph_W_IRR_Gunsmith_Filter'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnFilterChanged"), FGuid(0x8FA97ADE, 0x4AD89363, 0x1D2BD988, 0x51E2B74A) }, 
        { FName("Items"), FGuid(0x465065BB, 0x42F6EF2A, 0xBDF7B0B2, 0xB2E31519) }, 
        { FName("Selected Item"), FGuid(0x53394BCC, 0x420F78DE, 0xF0678999, 0x8EDA223B) }, 
        { FName("ListWidth"), FGuid(0x76B95B48, 0x44E82BE3, 0xFB6D4992, 0x59F688C3) }, 
        { FName("Preregistered Tab Info Array"), FGuid(0x75D13B20, 0x4D35653F, 0xC34E40AF, 0x05FB3309) }, 
        { FName("Gunsmith Attachment Slot"), FGuid(0xB78DBC8B, 0x4AFBA7BF, 0x8BD11986, 0x18C94576) }, 
        { FName("GunsmithWidgetRef"), FGuid(0xB95D1792, 0x4C31EA87, 0x15C1EF8A, 0x0ED0237C) }, 
        { FName("OnItemSelected"), FGuid(0x765E1361, 0x4EB8FE7C, 0x2A4B4FAA, 0x8F141C07) }, 
        { FName("ItemInfo"), FGuid(0x889D3ABB, 0x49086138, 0xAC1196B0, 0x87575894) }, 
        { FName("TagContainer"), FGuid(0xF91E8231, 0x4B60AEEB, 0x15243B80, 0xD7894B05) }, 
        { FName("VerticalPadding"), FGuid(0x49CDE935, 0x4D14D8AD, 0xFC2D0C94, 0xE593F954) }, 
        { FName("ItemPadding"), FGuid(0x3B75325E, 0x4FD9B0F5, 0x1D1ACEA6, 0x8E9A49D0) }, 
        { FName("ItemSize"), FGuid(0xA00E7216, 0x4F45B7AD, 0xD1C22E9F, 0xD58269EF) }, 
        { FName("ItemsPerLine"), FGuid(0xD8441313, 0x4CF344C3, 0x0A2B358F, 0xB9C78A29) }, 
        { FName("BoxList"), FGuid(0xBE5BB3A5, 0x2FC9306A, 0xB8311827, 0xF547BA6D) }, 
        { FName("FilterBox"), FGuid(0x458C173C, 0x18EA310C, 0x9DE5E15A, 0x5ED418A0) }, 
        { FName("ListSizeBox"), FGuid(0x7DE9CD27, 0x16563DE5, 0xA3D6A932, 0x891C5769) }, 
        { FName("W_IRR_HorizontalTabList"), FGuid(0x647BDCCC, 0x8CAC3BE3, 0x834EAE5D, 0x45F63255) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 ItemsPerLine = 1;
    struct FVector2D ItemSize = FVector2D(362, 146);
    struct FMargin VerticalPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 5
    };
    struct FGameplayTagContainer TagContainer = FGameplayTagContainer({});
     OnItemSelected = ;
    struct FGunsmithAttachmentSlot Gunsmith Attachment Slot = {
        "MainContainer": {
            "MainContainerUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
            "ContainerElements": {},
            "ContainerItems": {}
        },
        "ContainerIndex": 0,
        "LocalOffset": FVector2D(0, 0),
        "Start": FVector2D(0, 0),
        "End": FVector2D(0, 0),
        "LeaderEnd": FVector2D(0, 0),
        "bForeground": false,
        "bBelowWeapon": false
    };
    TArray<struct FIRRTabDescriptor> Preregistered Tab Info Array = {
        {
            "TabType": EIRRButtonType::Text,
            "TabId": FName("All"),
            "TabText": FText("Market"),
            "TabTooltip": FText(""),
            "IconBrush": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                },
                "DrawAs": ESlateBrushDrawType::Image,
                "Tiling": ESlateBrushTileType::NoTile,
                "Mirroring": ESlateBrushMirrorType::NoMirror,
                "ImageType": ESlateBrushImageType::NoImage,
                "ImageSize": FVector2D(32, 32),
                "Margin": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "ResourceObject": nullptr,
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
            },
            "bEnabled": true,
            "TabButtonClass": "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_TabButton_Medium.W_IRR_TabButton_Medium_C'",
            "TabContentClass": nullptr,
            "CreatedTabContentWidget": nullptr
        },
        {
            "TabType": EIRRButtonType::Text,
            "TabId": FName("Owned"),
            "TabText": FText("Owned"),
            "TabTooltip": FText(""),
            "IconBrush": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                },
                "DrawAs": ESlateBrushDrawType::Image,
                "Tiling": ESlateBrushTileType::NoTile,
                "Mirroring": ESlateBrushMirrorType::NoMirror,
                "ImageType": ESlateBrushImageType::NoImage,
                "ImageSize": FVector2D(32, 32),
                "Margin": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "ResourceObject": nullptr,
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
            },
            "bEnabled": true,
            "TabButtonClass": "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_TabButton_Medium.W_IRR_TabButton_Medium_C'",
            "TabContentClass": nullptr,
            "CreatedTabContentWidget": nullptr
        }
    };
    double ListWidth = 380;
     OnFilterChanged = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HorizontalTabList_C* W_IRR_HorizontalTabList;
    class USizeBox* ListSizeBox;
    class UVerticalBox* FilterBox;
    class UVerticalBox* BoxList;
    double ItemPadding;
    class UW_IRR_Gunsmith_ItemInfo_C* ItemInfo;
    class UW_IRR_Gunsmith_C* GunsmithWidgetRef;
    class UW_IRR_Gunsmith_List_Item_C* Selected Item;
    TArray<class UW_IRR_Gunsmith_List_Item_C*>* Items;

};