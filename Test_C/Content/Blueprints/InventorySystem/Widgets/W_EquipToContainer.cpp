class UW_EquipToContainer_C : public UEquipToContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_EquipToContainer.W_EquipToContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_EquipToContainer.W_EquipToContainer_C:ExecuteUbergraph_W_EquipToContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Item Appearance"), FGuid(0x279B196A, 0x43AF8E85, 0x17497F92, 0xC19D1B78) }, 
        { FName("OnContainerClicked"), FGuid(0x08B12D67, 0x48563656, 0xD8B4E19B, 0x07978F31) }, 
        { FName("EquipToBackgroundBrush"), FGuid(0xD789793E, 0x4519886F, 0x2D262D97, 0xE7004AD5) }, 
        { FName("OnItemRemoved"), FGuid(0x6B72FBC1, 0x4BD38DB6, 0x37F6A893, 0xE94A5F23) }, 
        { FName("OnItemAdded"), FGuid(0xCE58DBAB, 0x477ED309, 0x30BFC4AB, 0xC3989129) }, 
        { FName("OverrideEquipToBox"), FGuid(0x6FCFD206, 0x456234DF, 0x4A5E3A98, 0x2507FBDE) }, 
        { FName("KeyInfo"), FGuid(0x2F0A5FEF, 0x47662001, 0xFE9FA087, 0x6482DE45) }, 
        { FName("Item Container Padding"), FGuid(0xA21659A6, 0x4D4880FB, 0x76EA84A0, 0x34C64B5E) }, 
        { FName("ItemRef"), FGuid(0x98C476DA, 0x42AB2676, 0xDFCE80B0, 0xBF57C636) }, 
        { FName("AppearanceBox"), FGuid(0x9A454933, 0x25AA36C5, 0xBFA1FACF, 0x84CA1646) }, 
        { FName("DragEnterHighlight"), FGuid(0x66B7518C, 0xE80331AC, 0xA51AB0C9, 0x7DBBE0C4) }, 
        { FName("EquipmentSizeBox"), FGuid(0x095ACC78, 0x94323DE9, 0x85DAC355, 0xF6B25947) }, 
        { FName("EquipToBackground_Color"), FGuid(0xF4C0C9F4, 0x47517083, 0x03D0AAB9, 0x3D57D76B) }, 
        { FName("EquipToBackground_Topo"), FGuid(0xFB6CEFDC, 0x185D37EA, 0x8E16116C, 0xB0D6F7DB) }, 
        { FName("EquipToBorder"), FGuid(0xCFC10635, 0x4A5E3F36, 0xB7E137C0, 0x4E588CD8) }, 
        { FName("EquipToBox"), FGuid(0x6300AE90, 0x7F133E76, 0x958CFA44, 0x5C48555D) }, 
        { FName("EquipTypeIcon"), FGuid(0x96B243BD, 0x7FD73BFB, 0xB92CEEB0, 0x3D667CD3) }, 
        { FName("HeadlineText"), FGuid(0xAE518E02, 0x96C13E12, 0x934B2962, 0xD50F23D9) }, 
        { FName("InventorySlot"), FGuid(0x90039866, 0xD84A3FD5, 0xA44E5167, 0x47ECA7E5) }, 
        { FName("ItemContainer"), FGuid(0x8CC07C8C, 0xD7B13AF5, 0xB70D1102, 0x19FE9957) }, 
        { FName("KeySlot"), FGuid(0x4F2D276D, 0xFED030F4, 0xB57D1793, 0x43231365) }, 
        { FName("KeyText"), FGuid(0x61734BA1, 0x8E7431CF, 0x8C811944, 0x9E462B71) }, 
        { FName("SlotNameText"), FGuid(0xA1E55FF7, 0x679E3109, 0x9D083EC2, 0x22822970) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin Item Container Padding = {
        "Left": 50,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
    struct FStruct_InputKeyInfo KeyInfo = {
        "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
        "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
        "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": nullptr,
        "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
        "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
    };
     OnItemAdded = ;
     OnItemRemoved = ;
    struct FSlateBrush EquipToBackgroundBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 0,5),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::Both,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(2560, 1440),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Background/T_IRR_MarmorBackground.T_IRR_MarmorBackground'",
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
     OnContainerClicked = ;
    struct FWidgetItemAppearance Item Appearance = {
        "bShowBackground": true,
        "bShowBorder": true,
        "bShowItemName": true,
        "bShowCapacity": true,
        "bShowDurability": true,
        "bShowArmorTier": true,
        "bShowCaliber": true,
        "bShowVendorLock": true,
        "bShowMarketCues": false,
        "bOverrideName": false,
        "Name": FName("None")
    };
    bool bUseHeadline = true;
    struct FVector2D EquipToSlotSize = FVector2D(60, 60);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* SlotNameText;
    class UIRRTextBlock* KeyText;
    class USizeBox* KeySlot;
    class UOverlay* ItemContainer;
    class UW_InventorySlot_C* InventorySlot;
    class UW_InventoryHeadline_C* HeadlineText;
    class UImage* EquipTypeIcon;
    class UHorizontalBox* EquipToBox;
    class UBorder* EquipToBorder;
    class UBorder* EquipToBackground_Topo;
    class UBorder* EquipToBackground_Color;
    class USizeBox* EquipmentSizeBox;
    class UBorder* DragEnterHighlight;
    class UOverlay* AppearanceBox;
    class UW_InventoryItem_C* ItemRef;
    class UHorizontalBox* OverrideEquipToBox;

};