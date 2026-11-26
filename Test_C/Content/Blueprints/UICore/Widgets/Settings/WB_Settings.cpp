class UWB_Settings_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_Settings.WB_Settings_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_Settings.WB_Settings_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_Settings.WB_Settings_C:ExecuteUbergraph_WB_Settings'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ButtonWidgets"), FGuid(0x5C3EAA27, 0x40F7A197, 0xA6562284, 0x08E7B22B) }, 
        { FName("Buttons"), FGuid(0x1710EC6E, 0x45E38DE8, 0xC11E1992, 0x3B922B80) }, 
        { FName("CurrentIndex"), FGuid(0x187DEA6D, 0x493FC3E1, 0x98B39282, 0x4A518010) }, 
        { FName("AISettingsBox"), FGuid(0x7FEA12FF, 0x466D8381, 0x5DAD4CB6, 0x98058B31) }, 
        { FName("Apply"), FGuid(0x4EE02CE8, 0xF49F3CBD, 0x83FE47B3, 0x579ADB31) }, 
        { FName("ApplyBox"), FGuid(0x65D69EE1, 0xB48E3BB4, 0xB5B75242, 0x76F5356E) }, 
        { FName("Content"), FGuid(0xD013532E, 0xA59134CA, 0xABADF8E9, 0x15427529) }, 
        { FName("Export"), FGuid(0x865F0AF7, 0x4421AC96, 0x0588CAA5, 0x7C2EB458) }, 
        { FName("Image_106"), FGuid(0x0A0F1FE9, 0x53F932FA, 0x9534EE7D, 0xF503C4D0) }, 
        { FName("Import"), FGuid(0xCA3B78B3, 0x4235A68B, 0xD8DDB180, 0x86E14206) }, 
        { FName("Load"), FGuid(0x77EE2FF0, 0x4C3C1D48, 0xD538058E, 0xFD6A213E) }, 
        { FName("Reset"), FGuid(0x406989F5, 0x10A03E63, 0xA98E6857, 0x124D41F8) }, 
        { FName("Save"), FGuid(0x2BBE953B, 0x480CE066, 0x0812388C, 0x56B7ACB4) }, 
        { FName("TabMenu"), FGuid(0x4ECA00C5, 0x7B943E6F, 0xBE7E25FF, 0x9ADED724) }, 
        { FName("UtilityBar"), FGuid(0x5B4912E0, 0xF5B836B1, 0xA08E78C7, 0x2C60CA59) }, 
        { FName("W_IRR_Background"), FGuid(0x63DF5F71, 0x206234BF, 0xA3F7E70C, 0xCDF8BB9C) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x09A35B3E, 0xE7363B01, 0xBEE2A244, 0x01D03B51) }, 
        { FName("W_IRR_FANG_Header"), FGuid(0x6BAC739A, 0x94AA3271, 0xB74B59EA, 0x3C841389) }, 
        { FName("W_IRR_Headline"), FGuid(0xDC4623C3, 0x442A328B, 0xB4751658, 0xA64D8098) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FStruct_CustomButtonAppearence> Buttons = {
        {
            "ButtonName_43_5A779E05418A25B6F74808A562C80897": FName("None"),
            "Locked_37_5F1822CF4E9396F0D74363A4914A85D3": false,
            "Padding_36_857E09B143661632BA7512B905A2B1FE": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "InnerPadding_40_6900DC8A424DD6D78D32F38FCDFF14DA": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "BorderSetup_60_D3162C6C4146FE874C81CFAC15ABEC04": {
                "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(0,026241, 0,028426, 0,042311, 1),
                "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                }
            },
            "HoverBorderColor_49_21CAD6694F77EEC6E99E91985AC35230": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "ButtonBackgroundMaterial_58_CC0A4FC147AE19CE23DCEAB6C04E4AB9": nullptr,
            "ButtonMainSettings_13_D3B2DD644701892D8E6F04A870A2773D": {
                "Normal": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,5),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Hovered": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,45),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Pressed": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,5),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Disabled": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(1, 1, 1, 0,368),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::NoDrawType,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::NoImage,
                    "ImageSize": FVector2D(0, 0),
                    "Margin": {
                        "Left": 0,
                        "Top": 0,
                        "Right": 0,
                        "Bottom": 0
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                "NormalForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "HoveredForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "PressedForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "DisabledForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "NormalPadding": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "PressedPadding": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "PressedSlateSound": {
                    "ResourceObject": nullptr
                },
                "ClickedSlateSound": {
                    "ResourceObject": nullptr
                },
                "HoveredSlateSound": {
                    "ResourceObject": nullptr
                }
            },
            "ButtonTextSettings_32_0259C12542FE5FAFB70394A7AD700F2B": {
                "TextJustification_21_911370DF4C9F37F2873177A17927BC98": ETextJustify::Left,
                "Text_2_634ECB774367801585F64289E8499E19": FText("Default Text"),
                "TextPadding_18_EA9B24C741DF7EDADEC2F6984BCE1A42": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(1, 1, 1, 1),
                "TextHoverColor_26_D943843D4F7870BE4E48C1A1F6FD87B1": FLinearColor(1, 1, 1, 1),
                "Font_13_3A47B1E54E43B0F9138B2CA798FF943A": {
                    "FontObject": nullptr,
                    "FontMaterial": nullptr,
                    "OutlineSettings": {
                        "OutlineSize": 0,
                        "bMiteredCorners": false,
                        "bSeparateFillAlpha": false,
                        "bApplyOutlineToDropShadows": false,
                        "OutlineMaterial": nullptr,
                        "OutlineColor": FLinearColor(0, 0, 0, 1)
                    },
                    "TypefaceFontName": FName("Regular"),
                    "Size": 12,
                    "LetterSpacing": 0,
                    "SkewAmount": 0,
                    "bForceMonospaced": false,
                    "bMaterialIsStencil": false,
                    "MonospacedWidth": 1
                },
                "BackgroundTextSettings_23_933237914752E8E76D86C99B4303CEE8": {
                    "DisplayBackgroundText?_17_946B48324A7439CF2CB89AA8111D6EBC": false,
                    "Text_2_634ECB774367801585F64289E8499E19": FText(""),
                    "FontSize_20_3A47B1E54E43B0F9138B2CA798FF943A": 200,
                    "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(1, 1, 1, 1),
                    "Transform_22_933237914752E8E76D86C99B4303CEE8": {
                        "Translation": FVector2D(0, 0),
                        "Scale": FVector2D(1, 1),
                        "Shear": FVector2D(0, 0),
                        "Angle": 0
                    }
                }
            },
            "ButtonDecalSettings_31_330BF05F49319CE05896DA8560240B01": {
                "DecalTexture_18_933237914752E8E76D86C99B4303CEE8": nullptr,
                "DecalMaterial_40_4724506F410F9197095B27B67DF7C107": nullptr,
                "DecalColor_21_DF479CB34A370F808D384A89C98CFE73": FLinearColor(1, 1, 1, 1),
                "DecalTransform_24_289851464F99798ED67C8EAD246D1A08": {
                    "Translation": FVector2D(0, 0),
                    "Scale": FVector2D(1, 1),
                    "Shear": FVector2D(0, 0),
                    "Angle": 0
                }
            },
            "NavigationSetup_47_9E3908D841AD37B63B1EC68C9DDF7032": {
                "Up_19_A298BCD64B586E2F72B60C8B325F0A95": Enum_NavigationAction::NewEnumerator2,
                "Down_20_88744096491734A35EB809AA2992D210": Enum_NavigationAction::NewEnumerator2,
                "Left_21_B9299E9C4AF26B63AFD5C4BDEDF7DC25": Enum_NavigationAction::NewEnumerator2,
                "Right_22_4B287C72473B1032B81D63B7A3064693": Enum_NavigationAction::NewEnumerator2,
                "CustomPossibleTargetButtonNames_46_9EBD521040E9B3B3D7436B9FEE34B196": {}
            },
            "HelperIcon_68_97B185BA4CCFB0E5F0D83281477E0C72": {
                "VerticalAlignment_73_BF6234C841DB2698C22EFEB4C1F9E6E5": EVerticalAlignment::VAlign_Fill,
                "HorizontalAlignment_71_D3162C6C4146FE874C81CFAC15ABEC04": EHorizontalAlignment::HAlign_Fill,
                "Translation_74_6900DC8A424DD6D78D32F38FCDFF14DA": FVector2D(0, 0),
                "IconClass_66_97B185BA4CCFB0E5F0D83281477E0C72": nullptr
            }
        },
        {
            "ButtonName_43_5A779E05418A25B6F74808A562C80897": FName("None"),
            "Locked_37_5F1822CF4E9396F0D74363A4914A85D3": false,
            "Padding_36_857E09B143661632BA7512B905A2B1FE": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "InnerPadding_40_6900DC8A424DD6D78D32F38FCDFF14DA": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "BorderSetup_60_D3162C6C4146FE874C81CFAC15ABEC04": {
                "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(0,026241, 0,028426, 0,042311, 1),
                "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                }
            },
            "HoverBorderColor_49_21CAD6694F77EEC6E99E91985AC35230": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "ButtonBackgroundMaterial_58_CC0A4FC147AE19CE23DCEAB6C04E4AB9": nullptr,
            "ButtonMainSettings_13_D3B2DD644701892D8E6F04A870A2773D": {
                "Normal": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,5),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Hovered": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,45),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Pressed": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0,5),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::Image,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::FullColor,
                    "ImageSize": FVector2D(512, 512),
                    "Margin": {
                        "Left": 0.25,
                        "Top": 0.25,
                        "Right": 0.25,
                        "Bottom": 0.25
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                    "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
                },
                "Disabled": {
                    "TintColor": {
                        "SpecifiedColor": FLinearColor(1, 1, 1, 0,368),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "DrawAs": ESlateBrushDrawType::NoDrawType,
                    "Tiling": ESlateBrushTileType::NoTile,
                    "Mirroring": ESlateBrushMirrorType::NoMirror,
                    "ImageType": ESlateBrushImageType::NoImage,
                    "ImageSize": FVector2D(0, 0),
                    "Margin": {
                        "Left": 0,
                        "Top": 0,
                        "Right": 0,
                        "Bottom": 0
                    },
                    "ResourceObject": nullptr,
                    "OutlineSettings": {
                        "CornerRadii": FVector4(0, 0, 0, 1),
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
                "NormalForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "HoveredForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "PressedForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "DisabledForeground": {
                    "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
                },
                "NormalPadding": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "PressedPadding": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "PressedSlateSound": {
                    "ResourceObject": nullptr
                },
                "ClickedSlateSound": {
                    "ResourceObject": nullptr
                },
                "HoveredSlateSound": {
                    "ResourceObject": nullptr
                }
            },
            "ButtonTextSettings_32_0259C12542FE5FAFB70394A7AD700F2B": {
                "TextJustification_21_911370DF4C9F37F2873177A17927BC98": ETextJustify::Left,
                "Text_2_634ECB774367801585F64289E8499E19": FText("Default Text"),
                "TextPadding_18_EA9B24C741DF7EDADEC2F6984BCE1A42": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(1, 1, 1, 1),
                "TextHoverColor_26_D943843D4F7870BE4E48C1A1F6FD87B1": FLinearColor(1, 1, 1, 1),
                "Font_13_3A47B1E54E43B0F9138B2CA798FF943A": {
                    "FontObject": nullptr,
                    "FontMaterial": nullptr,
                    "OutlineSettings": {
                        "OutlineSize": 0,
                        "bMiteredCorners": false,
                        "bSeparateFillAlpha": false,
                        "bApplyOutlineToDropShadows": false,
                        "OutlineMaterial": nullptr,
                        "OutlineColor": FLinearColor(0, 0, 0, 1)
                    },
                    "TypefaceFontName": FName("Regular"),
                    "Size": 12,
                    "LetterSpacing": 0,
                    "SkewAmount": 0,
                    "bForceMonospaced": false,
                    "bMaterialIsStencil": false,
                    "MonospacedWidth": 1
                },
                "BackgroundTextSettings_23_933237914752E8E76D86C99B4303CEE8": {
                    "DisplayBackgroundText?_17_946B48324A7439CF2CB89AA8111D6EBC": false,
                    "Text_2_634ECB774367801585F64289E8499E19": FText(""),
                    "FontSize_20_3A47B1E54E43B0F9138B2CA798FF943A": 200,
                    "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(1, 1, 1, 1),
                    "Transform_22_933237914752E8E76D86C99B4303CEE8": {
                        "Translation": FVector2D(0, 0),
                        "Scale": FVector2D(1, 1),
                        "Shear": FVector2D(0, 0),
                        "Angle": 0
                    }
                }
            },
            "ButtonDecalSettings_31_330BF05F49319CE05896DA8560240B01": {
                "DecalTexture_18_933237914752E8E76D86C99B4303CEE8": nullptr,
                "DecalMaterial_40_4724506F410F9197095B27B67DF7C107": nullptr,
                "DecalColor_21_DF479CB34A370F808D384A89C98CFE73": FLinearColor(1, 1, 1, 1),
                "DecalTransform_24_289851464F99798ED67C8EAD246D1A08": {
                    "Translation": FVector2D(0, 0),
                    "Scale": FVector2D(1, 1),
                    "Shear": FVector2D(0, 0),
                    "Angle": 0
                }
            },
            "NavigationSetup_47_9E3908D841AD37B63B1EC68C9DDF7032": {
                "Up_19_A298BCD64B586E2F72B60C8B325F0A95": Enum_NavigationAction::NewEnumerator2,
                "Down_20_88744096491734A35EB809AA2992D210": Enum_NavigationAction::NewEnumerator2,
                "Left_21_B9299E9C4AF26B63AFD5C4BDEDF7DC25": Enum_NavigationAction::NewEnumerator2,
                "Right_22_4B287C72473B1032B81D63B7A3064693": Enum_NavigationAction::NewEnumerator2,
                "CustomPossibleTargetButtonNames_46_9EBD521040E9B3B3D7436B9FEE34B196": {}
            },
            "HelperIcon_68_97B185BA4CCFB0E5F0D83281477E0C72": {
                "VerticalAlignment_73_BF6234C841DB2698C22EFEB4C1F9E6E5": EVerticalAlignment::VAlign_Fill,
                "HorizontalAlignment_71_D3162C6C4146FE874C81CFAC15ABEC04": EHorizontalAlignment::HAlign_Fill,
                "Translation_74_6900DC8A424DD6D78D32F38FCDFF14DA": FVector2D(0, 0),
                "IconClass_66_97B185BA4CCFB0E5F0D83281477E0C72": nullptr
            }
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_FANG_Header_C* W_IRR_FANG_Header;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_UtilityBar_C* UtilityBar;
    class UW_IRR_HorizontalTabList_C* TabMenu;
    class UW_IRR_Button_Medium_C* Save;
    class UW_IRR_Button_Medium_C* Reset;
    class UW_IRR_Button_Medium_C* Load;
    class UW_IRR_Button_Medium_C* Import;
    class UImage* Image_106;
    class UW_IRR_Button_Medium_C* Export;
    class UOverlay* Content;
    class UHorizontalBox* ApplyBox;
    class UW_IRR_Button_Medium_C* Apply;
    class UHorizontalBox* AISettingsBox;
    int CurrentIndex;
    TArray<class UWB_SingleButton_C*>* ButtonWidgets;

};