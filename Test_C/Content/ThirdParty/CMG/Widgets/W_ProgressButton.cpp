class UW_ProgressButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_ProgressButton.W_ProgressButton_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "Icon",
            "PropertyName": FName("Brush"),
            "FunctionName": FName("Get_Icon_Brush_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Icon_Brush_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Icon",
            "PropertyName": FName("Visibility"),
            "FunctionName": FName("Get_Icon_Visibility_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Icon_Visibility_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_ProgressButton.W_ProgressButton_C:ExecuteUbergraph_W_ProgressButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MarkerSettings"), FGuid(0xDB523C2A, 0x46D7654A, 0xE219469E, 0xA712B385) }, 
        { FName("CurrentProgress"), FGuid(0x7630F8E7, 0x4D617978, 0xFFB23C99, 0x60312048) }, 
        { FName("Size"), FGuid(0xEB1E7BCD, 0x4FF4F2C5, 0x9EB09987, 0xC3B41F03) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(40, 40);
    struct FInteractionMarkerDisplaySetting MarkerSettings = {
        "UseMaterialAsTexture": false,
        "Texture": nullptr,
        "Material": nullptr,
        "MarkerSize": 50,
        "MarginPadding": {
            "Left": 6,
            "Top": 6,
            "Right": 6,
            "Bottom": 6
        },
        "BorderColor": {
            "SpecifiedColor": FLinearColor(1, 0, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ProgressColor": {
            "SpecifiedColor": FLinearColor(1, 0, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* ProgressButtonBox;
    class UImage* Progress;
    class UImage* Icon;
    class UImage* Background;
    double CurrentProgress;

};