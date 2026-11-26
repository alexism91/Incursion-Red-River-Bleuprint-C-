class UW_IRR_MenuButton_C : public UWB_SingleButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/W_IRR_MenuButton.W_IRR_MenuButton_C:WidgetTree'";
    struct FStruct_CustomButtonAppearence ButtonSettings = {
        "ButtonName_43_5A779E05418A25B6F74808A562C80897": FName("Resume"),
        "BorderSetup_60_D3162C6C4146FE874C81CFAC15ABEC04": {
            "Color_2_88B5041A42086A0A3A73519271B1B04F": FLinearColor(1, 1, 1, 1),
            "BorderSize_10_1691BEFA4375C15B700281A2D7A85E76": {
                "Left": 2,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            }
        },
        "HoverBorderColor_49_21CAD6694F77EEC6E99E91985AC35230": FLinearColor(1, 1, 1, 1),
        "ButtonMainSettings_13_D3B2DD644701892D8E6F04A870A2773D": {
            "Normal": {
                "Tiling": ESlateBrushTileType::Both,
                "ImageType": ESlateBrushImageType::FullColor,
                "ImageSize": FVector2D(1971, 1079),
                "Margin": {
                    "Left": 0.25,
                    "Top": 0.25,
                    "Right": 0.25,
                    "Bottom": 0.25
                },
                "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/UICore/Materials/M_ButtonGrid_Inst.M_ButtonGrid_Inst'",
                "OutlineSettings": {
                    "CornerRadii": FVector4(0, 0, 0, 1),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0)
                    },
                    "Width": 0,
                    "RoundingType": ESlateBrushRoundingType::HalfHeightRadius,
                    "bUseBrushTransparency": false
                },
                "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
            },
            "Hovered": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 1)
                },
                "ImageType": ESlateBrushImageType::FullColor,
                "ImageSize": FVector2D(1971, 1079),
                "Margin": {
                    "Left": 0.25,
                    "Top": 0.25,
                    "Right": 0.25,
                    "Bottom": 0.25
                },
                "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/UICore/Materials/M_ButtonGrid_Inst.M_ButtonGrid_Inst'",
                "OutlineSettings": {
                    "CornerRadii": FVector4(0, 0, 0, 1),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0)
                    },
                    "Width": 0,
                    "RoundingType": ESlateBrushRoundingType::HalfHeightRadius,
                    "bUseBrushTransparency": false
                },
                "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
            },
            "Pressed": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(0, 0, 0, 0,5)
                },
                "ImageType": ESlateBrushImageType::FullColor,
                "ImageSize": FVector2D(1971, 1079),
                "Margin": {
                    "Left": 0.25,
                    "Top": 0.25,
                    "Right": 0.25,
                    "Bottom": 0.25
                },
                "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/UICore/Materials/M_ButtonGrid_Inst.M_ButtonGrid_Inst'",
                "OutlineSettings": {
                    "CornerRadii": FVector4(0, 0, 0, 1),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0)
                    },
                    "Width": 0,
                    "RoundingType": ESlateBrushRoundingType::HalfHeightRadius,
                    "bUseBrushTransparency": false
                },
                "ResourceName": FName("../../../Engine/Content/Slate/Common/Button.png")
            },
            "Disabled": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 0,368)
                },
                "DrawAs": ESlateBrushDrawType::Image,
                "ImageSize": FVector2D(1971, 1079),
                "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/UICore/Materials/M_ButtonGrid_Inst.M_ButtonGrid_Inst'"
            },
            "NormalForeground": {
                "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
            },
            "HoveredForeground": {
                "SpecifiedColor": FLinearColor(1, 0, 1, 1)
            },
            "PressedForeground": {
                "SpecifiedColor": FLinearColor(1, 0, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Foreground
            },
            "DisabledForeground": {
                "SpecifiedColor": FLinearColor(1, 0, 1, 1)
            }
        },
        "ButtonTextSettings_32_0259C12542FE5FAFB70394A7AD700F2B": {
            "Text_2_634ECB774367801585F64289E8499E19": FText("Continue"),
            "TextColor_8_DC74546D4C8D469F136058B723BC947B": FLinearColor(0,875, 0,875, 0,875, 1),
            "TextHoverColor_26_D943843D4F7870BE4E48C1A1F6FD87B1": FLinearColor(0, 0, 0, 1)
        },
        "NavigationSetup_47_9E3908D841AD37B63B1EC68C9DDF7032": {
            "Up_19_A298BCD64B586E2F72B60C8B325F0A95": Enum_NavigationAction::NewEnumerator5,
            "Down_20_88744096491734A35EB809AA2992D210": Enum_NavigationAction::NewEnumerator1,
            "Right_22_4B287C72473B1032B81D63B7A3064693": Enum_NavigationAction::NewEnumerator5,
            "CustomPossibleTargetButtonNames_46_9EBD521040E9B3B3D7436B9FEE34B196": {
                { Enum_NavigationType::NewEnumerator1, {
                    "Name_3_16DC10CD481EAC8B1D2598B226CC0A8A": {
                        FName("MainMenu")
                    }
                } }, 
                { Enum_NavigationType::NewEnumerator4, {
                    "Name_3_16DC10CD481EAC8B1D2598B226CC0A8A": {
                        FName("GridBTN")
                    }
                } }
            }
        }
    };
    struct FVector2D ButtonSize = FVector2D(300, 50);
    enum Cursor = EMouseCursor::Hand;
};