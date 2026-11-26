class UW_RewardItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_RewardItem.W_RewardItem_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "TextBlock",
            "PropertyName": FName("Text"),
            "FunctionName": FName("GetText_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetText_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "TextBlock_68",
            "PropertyName": FName("Text"),
            "FunctionName": FName("GetText_1"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetText_1"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Border_30",
            "PropertyName": FName("BrushColor"),
            "FunctionName": FName("GetBrushColor_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("GetBrushColor_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_RewardItem.W_RewardItem_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_RewardItem.W_RewardItem_C:ExecuteUbergraph_W_RewardItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Reward"), FGuid(0x7571B118, 0x4224C61B, 0x4D585586, 0x6DC2C246) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_Reward Reward = {
        "RewardType_16_0CFD20454E04D7648FBEE6BC5302996D": E_RewardType::NewEnumerator0,
        "Value_5_4EA4281A43C5574034B37AABDAF74F80": 0,
        "Text_11_5746A83A423C5683D077388C209478A5": FText(""),
        "Icon_20_AC98B73949C923F88A1315990B5428FC": nullptr,
        "BackgroundColor_12_B78C39724DF6C59CE877D2B434361C25": FLinearColor(0, 0, 0, 0)
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetAnimation* Fade;
private:
    class UTextBlock* TextBlock_68;
    class UTextBlock* TextBlock;
    class UBorder* Border_30;

};