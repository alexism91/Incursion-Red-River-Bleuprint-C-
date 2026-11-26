class UWB_SingleGridButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleGridButton.WB_SingleGridButton_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleGridButton.WB_SingleGridButton_C:HoverAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleGridButton.WB_SingleGridButton_C:ToggleAnim_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleGridButton.WB_SingleGridButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Constructors/WB_SingleGridButton.WB_SingleGridButton_C:ExecuteUbergraph_WB_SingleGridButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FocusSound"), FGuid(0x9EAA5A00, 0x426D315C, 0xBC19048C, 0xC306A92F) }, 
        { FName("ClickSound"), FGuid(0xB15F6FE2, 0x4388EF18, 0x2107ABBE, 0x2241BE6E) }, 
        { FName("IsSelected"), FGuid(0xBB6503B0, 0x43FDABAE, 0x51095B97, 0xFA7A5FF4) }, 
        { FName("ButtonSettings"), FGuid(0xF1706D65, 0x4135C174, 0x9FE26D98, 0x8CF881A2) }, 
        { FName("AssignedBy"), FGuid(0xCBC3E3CD, 0x4D01EA2B, 0xD71C4F9A, 0xC8060950) }, 
        { FName("ButtonName"), FGuid(0x31459A1F, 0x44265FB5, 0x5E7EAFAC, 0x38A17BE9) }, 
        { FName("OnUnHover"), FGuid(0xD8001DF0, 0x4D21DE4C, 0xF14EE9BE, 0x4F088EB0) }, 
        { FName("OnHover"), FGuid(0xB89E695F, 0x416188C6, 0xF45A4EA5, 0x7CC31F4F) }, 
        { FName("OnClicked"), FGuid(0x1E0FF35D, 0x44CF3011, 0xB02F5A89, 0xC6D83245) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnClicked = ;
     OnHover = ;
     OnUnHover = ;
    struct FStruct_CustomGridButton ButtonSettings = {
        "ButtonName_2_24A56644417FACA07E3D21B2AD6CA1B8": FName("None"),
        "Locked?_5_D640E9564EA8EB9B662C95B18671C8A9": false,
        "IsActive?_57_9E9045DE4FB1344C661CA2AC198A28AB": false,
        "Padding_8_FF82C8AC432DA99B751023B0AECA4988": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "InnerPadding_10_6736276849E0B344AA4EE1AB7037199B": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "ButtonSize_38_063B7EF34E8DCCCF03A6BBB57ABA7EB4": FVector2D(300, 300),
        "BorderSetup_48_D847BDA2435B74608334F9959E360087": {
            "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                "Left": 3,
                "Top": 3,
                "Right": 3,
                "Bottom": 3
            }
        },
        "HoverBorderSetup_54_11CC92914BC430FF7392C9AA0444BA7E": {
            "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(0,802083, 0,274112, 0, 1),
            "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                "Left": 3,
                "Top": 3,
                "Right": 3,
                "Bottom": 3
            }
        },
        "FadeColor_43_EDC224D34E54C70D091D528A088C195B": FLinearColor(0,026241, 0,028426, 0,042311, 1),
        "ButtonMainSettings_18_3C4EC70F4F636371D7675BAC146FEAB6": {
            "Normal": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 0),
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
            "Hovered": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 0),
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
            "Pressed": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 0),
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
            "Disabled": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 1),
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
        "CategoryTextSettings_26_8E8FE0334DCDD2A009F85E82238CB89B": {
            "Text_3_4CDF99D140A67A062FBAA99D135648EC": FText("CATEGORY"),
            "TextPadding_6_B6DF0DD4463B0F143734E08A446FB3A8": {
                "Left": 5,
                "Top": 2.5,
                "Right": 5,
                "Bottom": 2.5
            },
            "TextColor_9_0BF01D694F1643350058CFA4EC428B03": FLinearColor(0,645833, 0,645833, 0,645833, 1),
            "TextHoverColor_11_3899000E462149E66E471AA2955881EA": FLinearColor(1, 1, 1, 1),
            "BoxColor_13_EFDC93184FC55161A56746BB32E80479": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "BoxHoverColor_15_1A2793134154384754D072A05A26C9A2": FLinearColor(0,016151, 0,017496, 0,026042, 1),
            "Font_18_FDC4E3534AB8FAD3EFFA4AB2E486374A": {
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
                "Size": 8,
                "LetterSpacing": 0,
                "SkewAmount": 0,
                "bForceMonospaced": false,
                "bMaterialIsStencil": false,
                "MonospacedWidth": 1
            }
        },
        "TitleSettings_39_1D1E39A74BC63634E37E09AABE67AA38": {
            "Text_3_4CDF99D140A67A062FBAA99D135648EC": FText("Default Title"),
            "TextPadding_6_B6DF0DD4463B0F143734E08A446FB3A8": {
                "Left": 10,
                "Top": 10,
                "Right": 10,
                "Bottom": 10
            },
            "TextColor_9_0BF01D694F1643350058CFA4EC428B03": FLinearColor(0,645833, 0,645833, 0,645833, 1),
            "TextHoverColor_11_3899000E462149E66E471AA2955881EA": FLinearColor(1, 1, 1, 1),
            "BoxColor_13_EFDC93184FC55161A56746BB32E80479": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "BoxHoverColor_15_1A2793134154384754D072A05A26C9A2": FLinearColor(0,016151, 0,017496, 0,026042, 1),
            "Font_18_FDC4E3534AB8FAD3EFFA4AB2E486374A": {
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
                "Size": 15,
                "LetterSpacing": 0,
                "SkewAmount": 0,
                "bForceMonospaced": false,
                "bMaterialIsStencil": false,
                "MonospacedWidth": 1
            }
        },
        "DescriptionSettings_40_FEA4DC3A4750C101B2E135B5A1A779BB": {
            "Text_3_4CDF99D140A67A062FBAA99D135648EC": FText("Default Description"),
            "TextPadding_6_B6DF0DD4463B0F143734E08A446FB3A8": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "TextColor_9_0BF01D694F1643350058CFA4EC428B03": FLinearColor(0,447917, 0,447917, 0,447917, 1),
            "TextHoverColor_11_3899000E462149E66E471AA2955881EA": FLinearColor(1, 1, 1, 1),
            "BoxColor_13_EFDC93184FC55161A56746BB32E80479": FLinearColor(0,026241, 0,028426, 0,042311, 1),
            "BoxHoverColor_15_1A2793134154384754D072A05A26C9A2": FLinearColor(0,016151, 0,017496, 0,026042, 1),
            "Font_18_FDC4E3534AB8FAD3EFFA4AB2E486374A": {
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
                "Size": 10,
                "LetterSpacing": 0,
                "SkewAmount": 0,
                "bForceMonospaced": false,
                "bMaterialIsStencil": false,
                "MonospacedWidth": 1
            }
        },
        "List_52_D634FC014A19CD67BEDBB38128B0B1EF": {},
        "ButtonDecalSettings_29_DD53A53F4AFEB2B922AAD28064B07561": {
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
        "ButtonBackgroundImageSettings_32_825D82F94FC84E9FFC3ACDB1D681CAB6": {
            "ImageOffset_2_122314E1464E514E8F86A1A67E7587DE": FVector2D(0, 0),
            "ImageScale_4_A7E13F6946FF44C7767BA6A5142887DB": FVector2D(1, 1),
            "ImageTint_7_C7DF004241CA49CD4C4DEE90FA521B9C": FLinearColor(1, 1, 1, 1),
            "BackgroundImage_10_71C1973E46A0E02DD9FDBB917EA4C6BF": "Texture2D'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Textures/DemoContent/T_Gadget.T_Gadget'"
        },
        "IconSetup_46_B78F1C2548FA6FD6C3AD19BE83410366": {
            "IconSize_9_D758DC244906D353F6A2A6ABEBF1A10F": FVector2D(100, 100),
            "IconColor_8_D0CEF3424EA09C078CF7408E1D6C674E": FLinearColor(1, 1, 1, 1),
            "Icon_7_8458E3D944766AF1A22120800306DCFB": nullptr
        },
        "NavigationSetup_35_FFC3438D42811CCDC6DB55B473325C3B": {
            "Up_19_A298BCD64B586E2F72B60C8B325F0A95": Enum_NavigationAction::NewEnumerator2,
            "Down_20_88744096491734A35EB809AA2992D210": Enum_NavigationAction::NewEnumerator2,
            "Left_21_B9299E9C4AF26B63AFD5C4BDEDF7DC25": Enum_NavigationAction::NewEnumerator2,
            "Right_22_4B287C72473B1032B81D63B7A3064693": Enum_NavigationAction::NewEnumerator2,
            "CustomPossibleTargetButtonNames_46_9EBD521040E9B3B3D7436B9FEE34B196": {}
        }
    };
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_ListElement_C* WB_ListElement_1;
    class UWB_ListElement_C* WB_ListElement;
    class UTextBlock* Title;
    class UOverlay* PaddingOverlay;
    class UImage* LockedImage;
    class UOverlay* LockedContainer;
    class UVerticalBox* ListContainer;
    class UButton* InteractionButton;
    class UOverlay* InnerPaddingOverlay;
    class UWB_FrameBuilder_C* InnerBorder;
    class USizeBox* IconContainer;
    class UWB_FrameBuilder_C* HoverFX;
    class UBorder* FadeEffect;
    class UTextBlock* Description;
    class USizeBox* DecalContainer;
    class UImage* Decal;
    class UTextBlock* CategoryText;
    class UOverlay* CategoryBoxContainer;
    class UBorder* CategoryBox;
    class USizeBox* ButtonSizeBox;
    class UImage* ButtonIcon;
    class UOverlay* BGImageContainer;
    class UImage* BGImage;
    class UBorder* BGColor;
    class UImage* ActiveImage;
    class UOverlay* ActiveContainer;
    class UWidgetAnimation* HoverAnim;
    class UWidgetAnimation* ToggleAnim;
    FName ButtonName;
    class UUserWidget* AssignedBy;
    bool IsSelected;
    class USoundBase* ClickSound;
    class USoundBase* FocusSound;

};