class UWB_SingleButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleButton.WB_SingleButton_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleButton.WB_SingleButton_C:HoverAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleButton.WB_SingleButton_C:ToggleAnim_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleButton.WB_SingleButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleButton.WB_SingleButton_C:ExecuteUbergraph_WB_SingleButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PlayFlashAnimation?"), FGuid(0x03F65476, 0x4F7B4471, 0x7840C8BC, 0x2F26E471) }, 
        { FName("IsTabButton?"), FGuid(0xC3698FB2, 0x4E267CC1, 0xDA060D81, 0xA003904C) }, 
        { FName("FocusSound"), FGuid(0xBEA29C90, 0x48EB40A3, 0x933F9293, 0xFB8EA780) }, 
        { FName("ClickSound"), FGuid(0xEA6F06DF, 0x483F56F2, 0x4708E18C, 0x72E56D7C) }, 
        { FName("AssignedBy"), FGuid(0x75722680, 0x4EB979CA, 0x8BDD78B5, 0xD4D1D06E) }, 
        { FName("IsFocused"), FGuid(0x607064D7, 0x42E63D17, 0xEF1258B5, 0x53CFB697) }, 
        { FName("ButtonSize"), FGuid(0xFDE20EFE, 0x43E9C547, 0x4AC3DBBA, 0x45EE57E7) }, 
        { FName("ButtonSettings"), FGuid(0xC464AFDB, 0x44605BA5, 0xBA12118A, 0x21BE1172) }, 
        { FName("OnUnHover"), FGuid(0x8CCD8A60, 0x40EEDBCC, 0x14181D85, 0x75CB2146) }, 
        { FName("OnHover"), FGuid(0xDA931422, 0x4AFA01F6, 0x0003BDBA, 0x545C283D) }, 
        { FName("OnClicked"), FGuid(0x0989FB4E, 0x40CE57D5, 0x3A08FE83, 0xA39CEDAB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnClicked = ;
     OnHover = ;
     OnUnHover = ;
    struct FStruct_CustomButtonAppearence ButtonSettings = {
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
                "Left": 3,
                "Top": 3,
                "Right": 3,
                "Bottom": 3
            }
        },
        "HoverBorderColor_49_21CAD6694F77EEC6E99E91985AC35230": FLinearColor(0,802083, 0,274112, 0, 1),
        "ButtonBackgroundMaterial_58_CC0A4FC147AE19CE23DCEAB6C04E4AB9": nullptr,
        "ButtonMainSettings_13_D3B2DD644701892D8E6F04A870A2773D": {
            "Normal": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(0, 0, 0, 0,6),
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
                    "CornerRadii": FVector4(4, 4, 4, 4),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0,695111, 0,695111, 0,695111, 1),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "Width": 1,
                    "RoundingType": ESlateBrushRoundingType::FixedRadius,
                    "bUseBrushTransparency": true
                },
                "UVRegion": FBox2D(TIntVector2<float>(0, 0), TIntVector2<float>(0, 0), 0),
                "bIsDynamicallyLoaded": false,
                "ResourceName": FName("None")
            },
            "Hovered": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(0, 0, 0, 0,8),
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
                    "CornerRadii": FVector4(4, 4, 4, 4),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0,724268, 0,724268, 0,724268, 1),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "Width": 1,
                    "RoundingType": ESlateBrushRoundingType::FixedRadius,
                    "bUseBrushTransparency": true
                },
                "UVRegion": FBox2D(TIntVector2<float>(0, 0), TIntVector2<float>(0, 0), 0),
                "bIsDynamicallyLoaded": false,
                "ResourceName": FName("None")
            },
            "Pressed": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(0, 0, 0, 1),
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
                    "CornerRadii": FVector4(4, 4, 4, 4),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0,724268, 0,724268, 0,724268, 1),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "Width": 1,
                    "RoundingType": ESlateBrushRoundingType::FixedRadius,
                    "bUseBrushTransparency": true
                },
                "UVRegion": FBox2D(TIntVector2<float>(0, 0), TIntVector2<float>(0, 0), 0),
                "bIsDynamicallyLoaded": false,
                "ResourceName": FName("None")
            },
            "Disabled": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 0,6),
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
                "SpecifiedColor": FLinearColor(1, 0, 0,628237, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "HoveredForeground": {
                "SpecifiedColor": FLinearColor(0, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
            },
            "PressedForeground": {
                "SpecifiedColor": FLinearColor(0, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DisabledForeground": {
                "SpecifiedColor": FLinearColor(0,527115, 0,527115, 0,527115, 1),
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
                "Left": 10,
                "Top": 10,
                "Right": 10,
                "Bottom": 10
            },
            "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(1, 1, 1, 1),
            "TextHoverColor_26_D943843D4F7870BE4E48C1A1F6FD87B1": FLinearColor(1, 1, 1, 1),
            "Font_13_3A47B1E54E43B0F9138B2CA798FF943A": {
                "FontObject": "Font'Test_C/Content/ThirdParty/CompShooterHUD/Fonts/CONSOLA_Font.CONSOLA_Font'",
                "FontMaterial": nullptr,
                "OutlineSettings": {
                    "OutlineSize": 0,
                    "bMiteredCorners": false,
                    "bSeparateFillAlpha": false,
                    "bApplyOutlineToDropShadows": false,
                    "OutlineMaterial": nullptr,
                    "OutlineColor": FLinearColor(0, 0, 0, 1)
                },
                "TypefaceFontName": FName("Default"),
                "Size": 16,
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
    };
    struct FVector2D ButtonSize = FVector2D(0, 0);
    bool PlayFlashAnimation? = true;
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* TextPaddingArea;
    class UOverlay* PaddingOverlay;
    class USizeBox* OverrideButtonSize;
    class UTextBlock* LabelHover;
    class UTextBlock* Label;
    class UOverlay* InnerOverlay;
    class UWB_FrameBuilder_C* InnerFrame;
    class UWB_FrameBuilder_C* HoverFX;
    class UBorder* Frame;
    class UBorder* Decal;
    class UBorder* ButtonHoverBG;
    class UBorder* ButtonBG;
    class UButton* ButtonArea;
    class UTextBlock* BackgroundText;
    class UOverlay* BackgroundContainer;
    class UWidgetAnimation* HoverAnim;
    class UWidgetAnimation* ToggleAnim;
    bool IsFocused;
    class UUserWidget* AssignedBy;
    class USoundBase* ClickSound;
    class USoundBase* FocusSound;
    bool IsTabButton?;

};